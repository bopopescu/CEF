// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "cc/resources/video_resource_updater.h"

#include <stddef.h>
#include <stdint.h>

#include "cc/resources/resource_provider.h"
#include "cc/test/fake_output_surface.h"
#include "cc/test/fake_output_surface_client.h"
#include "cc/test/fake_resource_provider.h"
#include "cc/test/test_shared_bitmap_manager.h"
#include "cc/test/test_web_graphics_context_3d.h"
#include "cc/trees/blocking_task_runner.h"
#include "gpu/GLES2/gl2extchromium.h"
#include "media/base/video_frame.h"
#include "testing/gtest/include/gtest/gtest.h"

namespace cc {
namespace {

class WebGraphicsContext3DUploadCounter : public TestWebGraphicsContext3D {
 public:
  void texSubImage2D(GLenum target,
                     GLint level,
                     GLint xoffset,
                     GLint yoffset,
                     GLsizei width,
                     GLsizei height,
                     GLenum format,
                     GLenum type,
                     const void* pixels) override {
    ++upload_count_;
  }

  void texStorage2DEXT(GLenum target,
                       GLint levels,
                       GLuint internalformat,
                       GLint width,
                       GLint height) override {
    immutable_texture_created_ = true;
  }

  GLuint createTexture() override {
    ++created_texture_count_;
    return TestWebGraphicsContext3D::createTexture();
  }

  void deleteTexture(GLuint texture) override {
    --created_texture_count_;
    TestWebGraphicsContext3D::deleteTexture(texture);
  }

  int UploadCount() { return upload_count_; }
  void ResetUploadCount() { upload_count_ = 0; }

  int TextureCreationCount() { return created_texture_count_; }
  void ResetTextureCreationCount() { created_texture_count_ = 0; }

  bool WasImmutableTextureCreated() { return immutable_texture_created_; }
  void ResetImmutableTextureCreated() { immutable_texture_created_ = false; }

 private:
  int upload_count_;
  int created_texture_count_;
  bool immutable_texture_created_;
};

class SharedBitmapManagerAllocationCounter : public TestSharedBitmapManager {
 public:
  scoped_ptr<SharedBitmap> AllocateSharedBitmap(
      const gfx::Size& size) override {
    ++allocation_count_;
    return TestSharedBitmapManager::AllocateSharedBitmap(size);
  }

  int AllocationCount() { return allocation_count_; }
  void ResetAllocationCount() { allocation_count_ = 0; }

 private:
  int allocation_count_;
};

class VideoResourceUpdaterTest : public testing::Test {
 protected:
  VideoResourceUpdaterTest() {
    scoped_ptr<WebGraphicsContext3DUploadCounter> context3d(
        new WebGraphicsContext3DUploadCounter());

    context3d_ = context3d.get();
    context3d_->set_support_texture_storage(true);

    output_surface3d_ = FakeOutputSurface::Create3d(std::move(context3d));
    CHECK(output_surface3d_->BindToClient(&client_));

    output_surface_software_ = FakeOutputSurface::CreateSoftware(
        make_scoped_ptr(new SoftwareOutputDevice));
    CHECK(output_surface_software_->BindToClient(&client_));

    shared_bitmap_manager_.reset(new SharedBitmapManagerAllocationCounter());
    resource_provider3d_ = FakeResourceProvider::Create(
        output_surface3d_.get(), shared_bitmap_manager_.get());

    resource_provider_software_ = FakeResourceProvider::Create(
        output_surface_software_.get(), shared_bitmap_manager_.get());
  }

  scoped_refptr<media::VideoFrame> CreateTestYUVVideoFrame() {
    const int kDimension = 10;
    gfx::Size size(kDimension, kDimension);
    static uint8_t y_data[kDimension * kDimension] = {0};
    static uint8_t u_data[kDimension * kDimension / 2] = {0};
    static uint8_t v_data[kDimension * kDimension / 2] = {0};

    scoped_refptr<media::VideoFrame> video_frame =
        media::VideoFrame::WrapExternalYuvData(
            media::PIXEL_FORMAT_YV16,  // format
            size,                      // coded_size
            gfx::Rect(size),           // visible_rect
            size,                      // natural_size
            size.width(),              // y_stride
            size.width() / 2,          // u_stride
            size.width() / 2,          // v_stride
            y_data,                    // y_data
            u_data,                    // u_data
            v_data,                    // v_data
            base::TimeDelta());        // timestamp
    EXPECT_TRUE(video_frame);
    return video_frame;
  }

  static void ReleaseMailboxCB(const gpu::SyncToken& sync_token) {}

  scoped_refptr<media::VideoFrame> CreateTestHardwareVideoFrame(
      unsigned target) {
    const int kDimension = 10;
    gfx::Size size(kDimension, kDimension);

    gpu::Mailbox mailbox;
    mailbox.name[0] = 51;

    const gpu::SyncToken sync_token(gpu::CommandBufferNamespace::GPU_IO, 0,
                                    0x123, 7);
    scoped_refptr<media::VideoFrame> video_frame =
        media::VideoFrame::WrapNativeTexture(
            media::PIXEL_FORMAT_ARGB,
            gpu::MailboxHolder(mailbox, sync_token, target),
            base::Bind(&ReleaseMailboxCB),
            size,                // coded_size
            gfx::Rect(size),     // visible_rect
            size,                // natural_size
            base::TimeDelta());  // timestamp
    EXPECT_TRUE(video_frame);
    return video_frame;
  }

  scoped_refptr<media::VideoFrame> CreateTestRGBAHardwareVideoFrame() {
    return CreateTestHardwareVideoFrame(GL_TEXTURE_2D);
  }

  scoped_refptr<media::VideoFrame> CreateTestStreamTextureHardwareVideoFrame(
      bool needs_copy) {
    scoped_refptr<media::VideoFrame> video_frame =
        CreateTestHardwareVideoFrame(GL_TEXTURE_EXTERNAL_OES);
    video_frame->metadata()->SetBoolean(
        media::VideoFrameMetadata::COPY_REQUIRED, needs_copy);
    return video_frame;
  }

  scoped_refptr<media::VideoFrame> CreateTestYuvHardwareVideoFrame() {
    const int kDimension = 10;
    gfx::Size size(kDimension, kDimension);

    const int kPlanesNum = 3;
    gpu::Mailbox mailbox[kPlanesNum];
    for (int i = 0; i < kPlanesNum; ++i) {
      mailbox[i].name[0] = 50 + 1;
    }
    const gpu::SyncToken sync_token(gpu::CommandBufferNamespace::GPU_IO, 0,
                                    0x123, 7);
    const unsigned target = GL_TEXTURE_RECTANGLE_ARB;
    scoped_refptr<media::VideoFrame> video_frame =
        media::VideoFrame::WrapYUV420NativeTextures(
            gpu::MailboxHolder(mailbox[media::VideoFrame::kYPlane], sync_token,
                               target),
            gpu::MailboxHolder(mailbox[media::VideoFrame::kUPlane], sync_token,
                               target),
            gpu::MailboxHolder(mailbox[media::VideoFrame::kVPlane], sync_token,
                               target),
            base::Bind(&ReleaseMailboxCB),
            size,                // coded_size
            gfx::Rect(size),     // visible_rect
            size,                // natural_size
            base::TimeDelta());  // timestamp
    EXPECT_TRUE(video_frame);
    return video_frame;
  }

  WebGraphicsContext3DUploadCounter* context3d_;
  FakeOutputSurfaceClient client_;
  scoped_ptr<FakeOutputSurface> output_surface3d_;
  scoped_ptr<FakeOutputSurface> output_surface_software_;
  scoped_ptr<SharedBitmapManagerAllocationCounter> shared_bitmap_manager_;
  scoped_ptr<ResourceProvider> resource_provider3d_;
  scoped_ptr<ResourceProvider> resource_provider_software_;
};

TEST_F(VideoResourceUpdaterTest, SoftwareFrame) {
  VideoResourceUpdater updater(output_surface3d_->context_provider(),
                               resource_provider3d_.get());
  scoped_refptr<media::VideoFrame> video_frame = CreateTestYUVVideoFrame();

  VideoFrameExternalResources resources =
      updater.CreateExternalResourcesFromVideoFrame(video_frame);
  EXPECT_EQ(VideoFrameExternalResources::YUV_RESOURCE, resources.type);
}

TEST_F(VideoResourceUpdaterTest, ReuseResource) {
  VideoResourceUpdater updater(output_surface3d_->context_provider(),
                               resource_provider3d_.get());
  scoped_refptr<media::VideoFrame> video_frame = CreateTestYUVVideoFrame();
  video_frame->set_timestamp(base::TimeDelta::FromSeconds(1234));

  // Allocate the resources for a YUV video frame.
  context3d_->ResetUploadCount();
  VideoFrameExternalResources resources =
      updater.CreateExternalResourcesFromVideoFrame(video_frame);
  EXPECT_EQ(VideoFrameExternalResources::YUV_RESOURCE, resources.type);
  EXPECT_EQ(size_t(3), resources.mailboxes.size());
  EXPECT_EQ(size_t(3), resources.release_callbacks.size());
  EXPECT_EQ(size_t(0), resources.software_resources.size());
  // Expect exactly three texture uploads, one for each plane.
  EXPECT_EQ(3, context3d_->UploadCount());

  // Simulate the ResourceProvider releasing the resources back to the video
  // updater.
  for (ReleaseCallbackImpl& release_callback : resources.release_callbacks)
    release_callback.Run(gpu::SyncToken(), false, nullptr);

  // Allocate resources for the same frame.
  context3d_->ResetUploadCount();
  resources = updater.CreateExternalResourcesFromVideoFrame(video_frame);
  EXPECT_EQ(VideoFrameExternalResources::YUV_RESOURCE, resources.type);
  EXPECT_EQ(size_t(3), resources.mailboxes.size());
  EXPECT_EQ(size_t(3), resources.release_callbacks.size());
  // The data should be reused so expect no texture uploads.
  EXPECT_EQ(0, context3d_->UploadCount());
}

TEST_F(VideoResourceUpdaterTest, ReuseResourceNoDelete) {
  VideoResourceUpdater updater(output_surface3d_->context_provider(),
                               resource_provider3d_.get());
  scoped_refptr<media::VideoFrame> video_frame = CreateTestYUVVideoFrame();
  video_frame->set_timestamp(base::TimeDelta::FromSeconds(1234));

  // Allocate the resources for a YUV video frame.
  context3d_->ResetUploadCount();
  VideoFrameExternalResources resources =
      updater.CreateExternalResourcesFromVideoFrame(video_frame);
  EXPECT_EQ(VideoFrameExternalResources::YUV_RESOURCE, resources.type);
  EXPECT_EQ(size_t(3), resources.mailboxes.size());
  EXPECT_EQ(size_t(3), resources.release_callbacks.size());
  EXPECT_EQ(size_t(0), resources.software_resources.size());
  // Expect exactly three texture uploads, one for each plane.
  EXPECT_EQ(3, context3d_->UploadCount());

  // Allocate resources for the same frame.
  context3d_->ResetUploadCount();
  resources = updater.CreateExternalResourcesFromVideoFrame(video_frame);
  EXPECT_EQ(VideoFrameExternalResources::YUV_RESOURCE, resources.type);
  EXPECT_EQ(size_t(3), resources.mailboxes.size());
  EXPECT_EQ(size_t(3), resources.release_callbacks.size());
  // The data should be reused so expect no texture uploads.
  EXPECT_EQ(0, context3d_->UploadCount());
}

TEST_F(VideoResourceUpdaterTest, SoftwareFrameSoftwareCompositor) {
  VideoResourceUpdater updater(nullptr, resource_provider_software_.get());
  scoped_refptr<media::VideoFrame> video_frame = CreateTestYUVVideoFrame();

  VideoFrameExternalResources resources =
      updater.CreateExternalResourcesFromVideoFrame(video_frame);
  EXPECT_EQ(VideoFrameExternalResources::SOFTWARE_RESOURCE, resources.type);
}

TEST_F(VideoResourceUpdaterTest, ReuseResourceSoftwareCompositor) {
  VideoResourceUpdater updater(nullptr, resource_provider_software_.get());
  scoped_refptr<media::VideoFrame> video_frame = CreateTestYUVVideoFrame();
  video_frame->set_timestamp(base::TimeDelta::FromSeconds(1234));

  // Allocate the resources for a software video frame.
  shared_bitmap_manager_->ResetAllocationCount();
  VideoFrameExternalResources resources =
      updater.CreateExternalResourcesFromVideoFrame(video_frame);
  EXPECT_EQ(VideoFrameExternalResources::SOFTWARE_RESOURCE, resources.type);
  EXPECT_EQ(size_t(0), resources.mailboxes.size());
  EXPECT_EQ(size_t(0), resources.release_callbacks.size());
  EXPECT_EQ(size_t(1), resources.software_resources.size());
  // Expect exactly one allocated shared bitmap.
  EXPECT_EQ(1, shared_bitmap_manager_->AllocationCount());

  // Simulate the ResourceProvider releasing the resource back to the video
  // updater.
  resources.software_release_callback.Run(gpu::SyncToken(), false, nullptr);

  // Allocate resources for the same frame.
  shared_bitmap_manager_->ResetAllocationCount();
  resources = updater.CreateExternalResourcesFromVideoFrame(video_frame);
  EXPECT_EQ(VideoFrameExternalResources::SOFTWARE_RESOURCE, resources.type);
  EXPECT_EQ(size_t(0), resources.mailboxes.size());
  EXPECT_EQ(size_t(0), resources.release_callbacks.size());
  EXPECT_EQ(size_t(1), resources.software_resources.size());
  // The data should be reused so expect no new allocations.
  EXPECT_EQ(0, shared_bitmap_manager_->AllocationCount());
}

TEST_F(VideoResourceUpdaterTest, ReuseResourceNoDeleteSoftwareCompositor) {
  VideoResourceUpdater updater(nullptr, resource_provider_software_.get());
  scoped_refptr<media::VideoFrame> video_frame = CreateTestYUVVideoFrame();
  video_frame->set_timestamp(base::TimeDelta::FromSeconds(1234));

  // Allocate the resources for a software video frame.
  shared_bitmap_manager_->ResetAllocationCount();
  VideoFrameExternalResources resources =
      updater.CreateExternalResourcesFromVideoFrame(video_frame);
  EXPECT_EQ(VideoFrameExternalResources::SOFTWARE_RESOURCE, resources.type);
  EXPECT_EQ(size_t(0), resources.mailboxes.size());
  EXPECT_EQ(size_t(0), resources.release_callbacks.size());
  EXPECT_EQ(size_t(1), resources.software_resources.size());
  // Expect exactly one allocated shared bitmap.
  EXPECT_EQ(1, shared_bitmap_manager_->AllocationCount());

  // Allocate resources for the same frame.
  shared_bitmap_manager_->ResetAllocationCount();
  resources = updater.CreateExternalResourcesFromVideoFrame(video_frame);
  EXPECT_EQ(VideoFrameExternalResources::SOFTWARE_RESOURCE, resources.type);
  EXPECT_EQ(size_t(0), resources.mailboxes.size());
  EXPECT_EQ(size_t(0), resources.release_callbacks.size());
  EXPECT_EQ(size_t(1), resources.software_resources.size());
  // The data should be reused so expect no new allocations.
  EXPECT_EQ(0, shared_bitmap_manager_->AllocationCount());
}

TEST_F(VideoResourceUpdaterTest, CreateForHardwarePlanes) {
  VideoResourceUpdater updater(output_surface3d_->context_provider(),
                               resource_provider3d_.get());

  scoped_refptr<media::VideoFrame> video_frame =
      CreateTestRGBAHardwareVideoFrame();

  VideoFrameExternalResources resources =
      updater.CreateExternalResourcesFromVideoFrame(video_frame);
  EXPECT_EQ(VideoFrameExternalResources::RGBA_PREMULTIPLIED_RESOURCE,
            resources.type);
  EXPECT_EQ(1u, resources.mailboxes.size());
  EXPECT_EQ(1u, resources.release_callbacks.size());
  EXPECT_EQ(0u, resources.software_resources.size());

  video_frame = CreateTestYuvHardwareVideoFrame();

  resources = updater.CreateExternalResourcesFromVideoFrame(video_frame);
  EXPECT_EQ(VideoFrameExternalResources::YUV_RESOURCE, resources.type);
  EXPECT_TRUE(resources.read_lock_fences_enabled);
  EXPECT_EQ(3u, resources.mailboxes.size());
  EXPECT_EQ(3u, resources.release_callbacks.size());
  EXPECT_EQ(0u, resources.software_resources.size());
}

TEST_F(VideoResourceUpdaterTest, CreateForHardwarePlanes_StreamTexture) {
  VideoResourceUpdater updater(output_surface3d_->context_provider(),
                               resource_provider3d_.get());
  context3d_->ResetTextureCreationCount();
  scoped_refptr<media::VideoFrame> video_frame =
      CreateTestStreamTextureHardwareVideoFrame(false);

  VideoFrameExternalResources resources =
      updater.CreateExternalResourcesFromVideoFrame(video_frame);
  EXPECT_EQ(VideoFrameExternalResources::STREAM_TEXTURE_RESOURCE,
            resources.type);
  EXPECT_EQ(1u, resources.mailboxes.size());
  EXPECT_EQ((GLenum)GL_TEXTURE_EXTERNAL_OES, resources.mailboxes[0].target());
  EXPECT_EQ(1u, resources.release_callbacks.size());
  EXPECT_EQ(0u, resources.software_resources.size());
  EXPECT_EQ(0, context3d_->TextureCreationCount());

  // A copied stream texture should return an RGBA resource in a new
  // GL_TEXTURE_2D texture.
  context3d_->ResetTextureCreationCount();
  video_frame = CreateTestStreamTextureHardwareVideoFrame(true);
  context3d_->ResetImmutableTextureCreated();
  resources = updater.CreateExternalResourcesFromVideoFrame(video_frame);
  EXPECT_EQ(VideoFrameExternalResources::RGBA_RESOURCE, resources.type);
  EXPECT_EQ(1u, resources.mailboxes.size());
  EXPECT_EQ((GLenum)GL_TEXTURE_2D, resources.mailboxes[0].target());
  EXPECT_EQ(1u, resources.release_callbacks.size());
  EXPECT_EQ(0u, resources.software_resources.size());
  EXPECT_EQ(1, context3d_->TextureCreationCount());

  // The texture copy path requires the use of CopyTextureCHROMIUM, which
  // enforces that the target texture not be immutable, as it may need
  // to alter the storage of the texture. Therefore, this test asserts
  // that an immutable texture wasn't created by glTexStorage2DEXT, when
  // that extension is supported.
  EXPECT_FALSE(context3d_->WasImmutableTextureCreated());
}
}  // namespace
}  // namespace cc
