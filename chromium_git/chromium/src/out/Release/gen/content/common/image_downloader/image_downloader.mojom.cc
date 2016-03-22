// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#if defined(__clang__)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunused-private-field"
#elif defined(_MSC_VER)
#pragma warning(push)
#pragma warning(disable:4056)
#pragma warning(disable:4065)
#pragma warning(disable:4756)
#endif

#include "content/common/image_downloader/image_downloader.mojom.h"

#include <math.h>
#include <stdint.h>
#include <utility>

#include "base/trace_event/trace_event.h"
#include "mojo/public/cpp/bindings/lib/array_serialization.h"
#include "mojo/public/cpp/bindings/lib/bindings_serialization.h"
#include "mojo/public/cpp/bindings/lib/bounds_checker.h"
#include "mojo/public/cpp/bindings/lib/map_data_internal.h"
#include "mojo/public/cpp/bindings/lib/map_serialization.h"
#include "mojo/public/cpp/bindings/lib/message_builder.h"
#include "mojo/public/cpp/bindings/lib/native_serialization.h"
#include "mojo/public/cpp/bindings/lib/string_serialization.h"
#include "mojo/public/cpp/bindings/lib/validate_params.h"
#include "mojo/public/cpp/bindings/lib/validation_errors.h"
#include "mojo/public/cpp/bindings/lib/validation_util.h"
#include "mojo/public/cpp/environment/lib/scoped_task_tracking.h"
#include "mojo/public/cpp/environment/logging.h"
#include "mojo/public/interfaces/bindings/interface_control_messages.mojom.h"
namespace image_downloader {

namespace internal {
namespace {

#pragma pack(push, 1)
const uint32_t kImageDownloader_DownloadImage_Name = 0;

class ImageDownloader_DownloadImage_Params_Data {
 public:
  static ImageDownloader_DownloadImage_Params_Data* New(mojo::internal::Buffer* buf);

  static bool Validate(const void* data,
                       mojo::internal::BoundsChecker* bounds_checker);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);



  mojo::internal::StructHeader header_;
  mojo::internal::StructPointer<internal::DownloadRequest_Data> request;

 private:
  ImageDownloader_DownloadImage_Params_Data();
  ~ImageDownloader_DownloadImage_Params_Data() = delete;
};
static_assert(sizeof(ImageDownloader_DownloadImage_Params_Data) == 16,
              "Bad sizeof(ImageDownloader_DownloadImage_Params_Data)");

// static
ImageDownloader_DownloadImage_Params_Data* ImageDownloader_DownloadImage_Params_Data::New(mojo::internal::Buffer* buf) {
  return new (buf->Allocate(sizeof(ImageDownloader_DownloadImage_Params_Data))) ImageDownloader_DownloadImage_Params_Data();
}

// static
bool ImageDownloader_DownloadImage_Params_Data::Validate(const void* data,
                              mojo::internal::BoundsChecker* bounds_checker) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, bounds_checker))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const ImageDownloader_DownloadImage_Params_Data* object = static_cast<const ImageDownloader_DownloadImage_Params_Data*>(data);

  static const struct {
    uint32_t version;
    uint32_t num_bytes;
  } kVersionSizes[] = {{ 0, 16 }};

  if (object->header_.version <=
          kVersionSizes[MOJO_ARRAYSIZE(kVersionSizes) - 1].version) {
    // Scan in reverse order to optimize for more recent versions.
    for (int i = MOJO_ARRAYSIZE(kVersionSizes) - 1; i >= 0; --i) {
      if (object->header_.version >= kVersionSizes[i].version) {
        if (object->header_.num_bytes == kVersionSizes[i].num_bytes)
          break;

        ReportValidationError(
            mojo::internal::VALIDATION_ERROR_UNEXPECTED_STRUCT_HEADER);
        return false;
      }
    }
  } else if (object->header_.num_bytes <
                 kVersionSizes[MOJO_ARRAYSIZE(kVersionSizes) - 1].num_bytes) {
    ReportValidationError(
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_STRUCT_HEADER);
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->request, "null request field in ImageDownloader_DownloadImage_Params struct")) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->request, bounds_checker))
    return false;

  return true;
}

void ImageDownloader_DownloadImage_Params_Data::EncodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  MOJO_CHECK(header_.version == 0);
  mojo::internal::Encode(&request, handles);
}

void ImageDownloader_DownloadImage_Params_Data::DecodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  // NOTE: The memory backing |this| may has be smaller than |sizeof(*this)|, if
  // the message comes from an older version.
  mojo::internal::Decode(&request, handles);
}

ImageDownloader_DownloadImage_Params_Data::ImageDownloader_DownloadImage_Params_Data() {
  header_.num_bytes = sizeof(*this);
  header_.version = 0;
}
class ImageDownloader_DownloadImage_ResponseParams_Data {
 public:
  static ImageDownloader_DownloadImage_ResponseParams_Data* New(mojo::internal::Buffer* buf);

  static bool Validate(const void* data,
                       mojo::internal::BoundsChecker* bounds_checker);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);



  mojo::internal::StructHeader header_;
  mojo::internal::StructPointer<internal::DownloadResult_Data> result;

 private:
  ImageDownloader_DownloadImage_ResponseParams_Data();
  ~ImageDownloader_DownloadImage_ResponseParams_Data() = delete;
};
static_assert(sizeof(ImageDownloader_DownloadImage_ResponseParams_Data) == 16,
              "Bad sizeof(ImageDownloader_DownloadImage_ResponseParams_Data)");

// static
ImageDownloader_DownloadImage_ResponseParams_Data* ImageDownloader_DownloadImage_ResponseParams_Data::New(mojo::internal::Buffer* buf) {
  return new (buf->Allocate(sizeof(ImageDownloader_DownloadImage_ResponseParams_Data))) ImageDownloader_DownloadImage_ResponseParams_Data();
}

// static
bool ImageDownloader_DownloadImage_ResponseParams_Data::Validate(const void* data,
                              mojo::internal::BoundsChecker* bounds_checker) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, bounds_checker))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const ImageDownloader_DownloadImage_ResponseParams_Data* object = static_cast<const ImageDownloader_DownloadImage_ResponseParams_Data*>(data);

  static const struct {
    uint32_t version;
    uint32_t num_bytes;
  } kVersionSizes[] = {{ 0, 16 }};

  if (object->header_.version <=
          kVersionSizes[MOJO_ARRAYSIZE(kVersionSizes) - 1].version) {
    // Scan in reverse order to optimize for more recent versions.
    for (int i = MOJO_ARRAYSIZE(kVersionSizes) - 1; i >= 0; --i) {
      if (object->header_.version >= kVersionSizes[i].version) {
        if (object->header_.num_bytes == kVersionSizes[i].num_bytes)
          break;

        ReportValidationError(
            mojo::internal::VALIDATION_ERROR_UNEXPECTED_STRUCT_HEADER);
        return false;
      }
    }
  } else if (object->header_.num_bytes <
                 kVersionSizes[MOJO_ARRAYSIZE(kVersionSizes) - 1].num_bytes) {
    ReportValidationError(
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_STRUCT_HEADER);
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->result, "null result field in ImageDownloader_DownloadImage_ResponseParams struct")) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->result, bounds_checker))
    return false;

  return true;
}

void ImageDownloader_DownloadImage_ResponseParams_Data::EncodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  MOJO_CHECK(header_.version == 0);
  mojo::internal::Encode(&result, handles);
}

void ImageDownloader_DownloadImage_ResponseParams_Data::DecodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  // NOTE: The memory backing |this| may has be smaller than |sizeof(*this)|, if
  // the message comes from an older version.
  mojo::internal::Decode(&result, handles);
}

ImageDownloader_DownloadImage_ResponseParams_Data::ImageDownloader_DownloadImage_ResponseParams_Data() {
  header_.num_bytes = sizeof(*this);
  header_.version = 0;
}

#pragma pack(pop)

}  // namespace


// static
DownloadRequest_Data* DownloadRequest_Data::New(mojo::internal::Buffer* buf) {
  return new (buf->Allocate(sizeof(DownloadRequest_Data))) DownloadRequest_Data();
}

// static
bool DownloadRequest_Data::Validate(const void* data,
                              mojo::internal::BoundsChecker* bounds_checker) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, bounds_checker))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const DownloadRequest_Data* object = static_cast<const DownloadRequest_Data*>(data);

  static const struct {
    uint32_t version;
    uint32_t num_bytes;
  } kVersionSizes[] = {{ 0, 24 }};

  if (object->header_.version <=
          kVersionSizes[MOJO_ARRAYSIZE(kVersionSizes) - 1].version) {
    // Scan in reverse order to optimize for more recent versions.
    for (int i = MOJO_ARRAYSIZE(kVersionSizes) - 1; i >= 0; --i) {
      if (object->header_.version >= kVersionSizes[i].version) {
        if (object->header_.num_bytes == kVersionSizes[i].num_bytes)
          break;

        ReportValidationError(
            mojo::internal::VALIDATION_ERROR_UNEXPECTED_STRUCT_HEADER);
        return false;
      }
    }
  } else if (object->header_.num_bytes <
                 kVersionSizes[MOJO_ARRAYSIZE(kVersionSizes) - 1].num_bytes) {
    ReportValidationError(
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_STRUCT_HEADER);
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->url, "null url field in DownloadRequest struct")) {
    return false;
  }
  const mojo::internal::ArrayValidateParams url_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateArray(object->url, bounds_checker,
                                     &url_validate_params)) {
    return false;
  }

  return true;
}

void DownloadRequest_Data::EncodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  MOJO_CHECK(header_.version == 0);
  mojo::internal::Encode(&url, handles);
}

void DownloadRequest_Data::DecodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  // NOTE: The memory backing |this| may has be smaller than |sizeof(*this)|, if
  // the message comes from an older version.
  mojo::internal::Decode(&url, handles);
}

DownloadRequest_Data::DownloadRequest_Data() {
  header_.num_bytes = sizeof(*this);
  header_.version = 0;
}

// static
DownloadResult_Data* DownloadResult_Data::New(mojo::internal::Buffer* buf) {
  return new (buf->Allocate(sizeof(DownloadResult_Data))) DownloadResult_Data();
}

// static
bool DownloadResult_Data::Validate(const void* data,
                              mojo::internal::BoundsChecker* bounds_checker) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, bounds_checker))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const DownloadResult_Data* object = static_cast<const DownloadResult_Data*>(data);

  static const struct {
    uint32_t version;
    uint32_t num_bytes;
  } kVersionSizes[] = {{ 0, 32 }};

  if (object->header_.version <=
          kVersionSizes[MOJO_ARRAYSIZE(kVersionSizes) - 1].version) {
    // Scan in reverse order to optimize for more recent versions.
    for (int i = MOJO_ARRAYSIZE(kVersionSizes) - 1; i >= 0; --i) {
      if (object->header_.version >= kVersionSizes[i].version) {
        if (object->header_.num_bytes == kVersionSizes[i].num_bytes)
          break;

        ReportValidationError(
            mojo::internal::VALIDATION_ERROR_UNEXPECTED_STRUCT_HEADER);
        return false;
      }
    }
  } else if (object->header_.num_bytes <
                 kVersionSizes[MOJO_ARRAYSIZE(kVersionSizes) - 1].num_bytes) {
    ReportValidationError(
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_STRUCT_HEADER);
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->images, "null images field in DownloadResult struct")) {
    return false;
  }
  const mojo::internal::ArrayValidateParams images_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateArray(object->images, bounds_checker,
                                     &images_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->original_image_sizes, "null original_image_sizes field in DownloadResult struct")) {
    return false;
  }
  const mojo::internal::ArrayValidateParams original_image_sizes_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateArray(object->original_image_sizes, bounds_checker,
                                     &original_image_sizes_validate_params)) {
    return false;
  }

  return true;
}

void DownloadResult_Data::EncodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  MOJO_CHECK(header_.version == 0);
  mojo::internal::Encode(&images, handles);
  mojo::internal::Encode(&original_image_sizes, handles);
}

void DownloadResult_Data::DecodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  // NOTE: The memory backing |this| may has be smaller than |sizeof(*this)|, if
  // the message comes from an older version.
  mojo::internal::Decode(&images, handles);
  mojo::internal::Decode(&original_image_sizes, handles);
}

DownloadResult_Data::DownloadResult_Data() {
  header_.num_bytes = sizeof(*this);
  header_.version = 0;
}


}  // namespace internal// static
DownloadRequestPtr DownloadRequest::New() {
  DownloadRequestPtr rv;
  mojo::internal::StructHelper<DownloadRequest>::Initialize(&rv);
  return rv;
}

DownloadRequest::DownloadRequest()
    : url(),
      is_favicon(),
      max_bitmap_size(),
      bypass_cache() {
}

DownloadRequest::~DownloadRequest() {
}


DownloadRequestPtr DownloadRequest::Clone() const {
  DownloadRequestPtr rv(New());
  rv->url = url;
  rv->is_favicon = is_favicon;
  rv->max_bitmap_size = max_bitmap_size;
  rv->bypass_cache = bypass_cache;
  return rv;
}


bool DownloadRequest::Equals(const DownloadRequest& other) const {
  if (!mojo::internal::ValueTraits<mojo::String>::Equals(this->url, other.url))
    return false;
  if (!mojo::internal::ValueTraits<bool>::Equals(this->is_favicon, other.is_favicon))
    return false;
  if (!mojo::internal::ValueTraits<uint32_t>::Equals(this->max_bitmap_size, other.max_bitmap_size))
    return false;
  if (!mojo::internal::ValueTraits<bool>::Equals(this->bypass_cache, other.bypass_cache))
    return false;
  return true;
}// static
DownloadResultPtr DownloadResult::New() {
  DownloadResultPtr rv;
  mojo::internal::StructHelper<DownloadResult>::Initialize(&rv);
  return rv;
}

DownloadResult::DownloadResult()
    : http_status_code(),
      images(),
      original_image_sizes() {
}

DownloadResult::~DownloadResult() {
}


DownloadResultPtr DownloadResult::Clone() const {
  DownloadResultPtr rv(New());
  rv->http_status_code = http_status_code;
  rv->images = images.Clone();
  rv->original_image_sizes = original_image_sizes.Clone();
  return rv;
}


bool DownloadResult::Equals(const DownloadResult& other) const {
  if (!mojo::internal::ValueTraits<int32_t>::Equals(this->http_status_code, other.http_status_code))
    return false;
  if (!mojo::internal::ValueTraits<mojo::Array<skia::BitmapPtr>>::Equals(this->images, other.images))
    return false;
  if (!mojo::internal::ValueTraits<mojo::Array<mojo::SizePtr>>::Equals(this->original_image_sizes, other.original_image_sizes))
    return false;
  return true;
}
MOJO_STATIC_CONST_MEMBER_DEFINITION const char ImageDownloader::Name_[] = "image_downloader::ImageDownloader";
MOJO_STATIC_CONST_MEMBER_DEFINITION const uint32_t ImageDownloader::Version_;
class ImageDownloader_DownloadImage_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  ImageDownloader_DownloadImage_ForwardToCallback(
      const ImageDownloader::DownloadImageCallback& callback,
      scoped_refptr<mojo::internal::MultiplexRouter> router)
      : callback_(callback), serialization_context_(std::move(router)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  ImageDownloader::DownloadImageCallback callback_;
  mojo::internal::SerializationContext serialization_context_;
  MOJO_DISALLOW_COPY_AND_ASSIGN(ImageDownloader_DownloadImage_ForwardToCallback);
};
bool ImageDownloader_DownloadImage_ForwardToCallback::Accept(
    mojo::Message* message) {
  internal::ImageDownloader_DownloadImage_ResponseParams_Data* params =
      reinterpret_cast<internal::ImageDownloader_DownloadImage_ResponseParams_Data*>(
          message->mutable_payload());

  params->DecodePointersAndHandles(message->mutable_handles());
  
  bool success = true;
  DownloadResultPtr p_result{};
  do {
    // NOTE: The memory backing |params| may has be smaller than
    // |sizeof(*params)| if the message comes from an older version.
    if (!Deserialize_(params->result.ptr, &p_result, &serialization_context_))
      success = false;
  } while (false);
  if (!success)
    return false;
  callback_.Run(std::move(p_result));
  return true;
}

ImageDownloaderProxy::ImageDownloaderProxy(mojo::MessageReceiverWithResponder* receiver)
    : ControlMessageProxy(receiver) {
}
void ImageDownloaderProxy::DownloadImage(
    DownloadRequestPtr in_request, const DownloadImageCallback& callback) {
  size_t size = sizeof(internal::ImageDownloader_DownloadImage_Params_Data);
  size += GetSerializedSize_(in_request);
  mojo::internal::RequestMessageBuilder builder(internal::kImageDownloader_DownloadImage_Name, size);

  internal::ImageDownloader_DownloadImage_Params_Data* params =
      internal::ImageDownloader_DownloadImage_Params_Data::New(builder.buffer());
  Serialize_(std::move(in_request), builder.buffer(), &params->request.ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !params->request.ptr,
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null request in ImageDownloader.DownloadImage request");
  params->EncodePointersAndHandles(builder.message()->mutable_handles());
  mojo::MessageReceiver* responder =
      new ImageDownloader_DownloadImage_ForwardToCallback(callback, serialization_context_.router);
  if (!receiver_->AcceptWithResponder(builder.message(), responder))
    delete responder;
}
class ImageDownloader_DownloadImage_ProxyToResponder
    : public ImageDownloader::DownloadImageCallback::Runnable {
 public:
  ~ImageDownloader_DownloadImage_ProxyToResponder() override {
    // Is the Mojo application destroying the callback without running it
    // and without first closing the pipe?
    bool callback_was_dropped = responder_ && responder_->IsValid();
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    delete responder_;
    MOJO_DCHECK(!callback_was_dropped)  << "The callback passed to "
        "ImageDownloader::DownloadImage(std::move(p_request), callback) "
        "was never run.";
  }

  ImageDownloader_DownloadImage_ProxyToResponder(
      uint64_t request_id,
      mojo::MessageReceiverWithStatus* responder)
      : request_id_(request_id),
        responder_(responder) {
  }

  void Run(DownloadResultPtr in_result) const override;

 private:
  uint64_t request_id_;
  mutable mojo::MessageReceiverWithStatus* responder_;
  MOJO_DISALLOW_COPY_AND_ASSIGN(ImageDownloader_DownloadImage_ProxyToResponder);
};
void ImageDownloader_DownloadImage_ProxyToResponder::Run(
    DownloadResultPtr in_result) const {
  size_t size = sizeof(internal::ImageDownloader_DownloadImage_ResponseParams_Data);
  size += GetSerializedSize_(in_result);
  mojo::internal::ResponseMessageBuilder builder(
      internal::kImageDownloader_DownloadImage_Name, size, request_id_);
  internal::ImageDownloader_DownloadImage_ResponseParams_Data* params =
      internal::ImageDownloader_DownloadImage_ResponseParams_Data::New(builder.buffer());
  Serialize_(std::move(in_result), builder.buffer(), &params->result.ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !params->result.ptr,
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null result in ImageDownloader.DownloadImage response");
  params->EncodePointersAndHandles(builder.message()->mutable_handles());
  bool ok = responder_->Accept(builder.message());
  MOJO_ALLOW_UNUSED_LOCAL(ok);
  // TODO(darin): !ok returned here indicates a malformed message, and that may
  // be good reason to close the connection. However, we don't have a way to do
  // that from here. We should add a way.
  delete responder_;
  responder_ = nullptr;
}

ImageDownloaderStub::ImageDownloaderStub()
    : sink_(nullptr),
      control_message_handler_(ImageDownloader::Version_) {
}

ImageDownloaderStub::~ImageDownloaderStub() {}

bool ImageDownloaderStub::Accept(mojo::Message* message) {
  if (mojo::internal::ControlMessageHandler::IsControlMessage(message))
    return control_message_handler_.Accept(message);
  switch (message->header()->name) {
    case internal::kImageDownloader_DownloadImage_Name: {
      mojo::internal::ScopedTaskTracking task_id("mojo.image_downloader.ImageDownloader.DownloadImage", __FILE__, __LINE__);
      break;
    }
  }
  return false;
}

bool ImageDownloaderStub::AcceptWithResponder(
    mojo::Message* message, mojo::MessageReceiverWithStatus* responder) {
  if (mojo::internal::ControlMessageHandler::IsControlMessage(message))
    return control_message_handler_.AcceptWithResponder(message, responder);
  switch (message->header()->name) {
    case internal::kImageDownloader_DownloadImage_Name: {
      mojo::internal::ScopedTaskTracking task_id("mojo::image_downloader::ImageDownloader::DownloadImage", __FILE__, __LINE__);
      internal::ImageDownloader_DownloadImage_Params_Data* params =
          reinterpret_cast<internal::ImageDownloader_DownloadImage_Params_Data*>(
              message->mutable_payload());

      params->DecodePointersAndHandles(message->mutable_handles());
      
      bool success = true;
      DownloadRequestPtr p_request{};
      do {
        // NOTE: The memory backing |params| may has be smaller than
        // |sizeof(*params)| if the message comes from an older version.
        if (!Deserialize_(params->request.ptr, &p_request, &serialization_context_))
          success = false;
      } while (false);
      if (!success)
        return false;
      ImageDownloader::DownloadImageCallback::Runnable* runnable =
          new ImageDownloader_DownloadImage_ProxyToResponder(
              message->request_id(), responder);
      ImageDownloader::DownloadImageCallback callback(runnable);
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "ImageDownloader::DownloadImage");
      sink_->DownloadImage(std::move(p_request), callback);
      return true;
    }
  }
  return false;
}

ImageDownloaderRequestValidator::ImageDownloaderRequestValidator(
    mojo::MessageReceiver* sink) : MessageFilter(sink) {
}

bool ImageDownloaderRequestValidator::Accept(mojo::Message* message) {
  assert(sink_);

  if (mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    if (!mojo::internal::ValidateControlRequest(message))
      return false;
    return sink_->Accept(message);
  }

  switch (message->header()->name) {
    case internal::kImageDownloader_DownloadImage_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(message))
        return false;
      if (!mojo::internal::ValidateMessagePayload<
               internal::ImageDownloader_DownloadImage_Params_Data>(message)) {
        return false;
      }
      return sink_->Accept(message);
    }
    default:
      break;
  }

  // Unrecognized message.
  ReportValidationError(
      mojo::internal::VALIDATION_ERROR_MESSAGE_HEADER_UNKNOWN_METHOD);
  return false;
}

ImageDownloaderResponseValidator::ImageDownloaderResponseValidator(
    mojo::MessageReceiver* sink) : MessageFilter(sink) {
}

bool ImageDownloaderResponseValidator::Accept(mojo::Message* message) {
  assert(sink_);

  if (mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    if (!mojo::internal::ValidateControlResponse(message))
      return false;
    return sink_->Accept(message);
  }

  if (!mojo::internal::ValidateMessageIsResponse(message))
    return false;
  switch (message->header()->name) {
    case internal::kImageDownloader_DownloadImage_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::ImageDownloader_DownloadImage_ResponseParams_Data>(message)) {
        return false;
      }
      return sink_->Accept(message);
    }
    default:
      break;
  }

  // Unrecognized message.
  ReportValidationError(
      mojo::internal::VALIDATION_ERROR_MESSAGE_HEADER_UNKNOWN_METHOD);
  return false;
}
size_t GetSerializedSize_(const DownloadRequestPtr& input) {
  if (!input)
    return 0;
  size_t size = sizeof(internal::DownloadRequest_Data);
  size += GetSerializedSize_(input->url);
  return size;
}

void Serialize_(DownloadRequestPtr input, mojo::internal::Buffer* buf,
                internal::DownloadRequest_Data** output) {
  if (input) {
    internal::DownloadRequest_Data* result =
        internal::DownloadRequest_Data::New(buf);
    Serialize_(std::move(input->url), buf, &result->url.ptr);
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        !result->url.ptr,
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null url in DownloadRequest struct");
    result->is_favicon = input->is_favicon;
    result->max_bitmap_size = input->max_bitmap_size;
    result->bypass_cache = input->bypass_cache;
    *output = result;
  } else {
    *output = nullptr;
  }
}

bool Deserialize_(internal::DownloadRequest_Data* input,
                  DownloadRequestPtr* output,
                  mojo::internal::SerializationContext* context) {
  bool success = true;
  if (input) {
    DownloadRequestPtr result(DownloadRequest::New());
    do {
      // NOTE: The memory backing |input| may has be smaller than
      // |sizeof(*input)| if the message comes from an older version.
      if (!Deserialize_(input->url.ptr, &result->url, context))
        success = false;
      result->is_favicon = input->is_favicon;
      result->max_bitmap_size = input->max_bitmap_size;
      result->bypass_cache = input->bypass_cache;
    } while (false);
    *output = std::move(result);
  } else {
    output->reset();
  }
  return success;
}

DownloadRequest_Reader::DownloadRequest_Reader(
    internal::DownloadRequest_Data*  data,
    mojo::internal::SerializationContext* context)
    : data_(data), context_(context) { }
size_t GetSerializedSize_(const DownloadResultPtr& input) {
  if (!input)
    return 0;
  size_t size = sizeof(internal::DownloadResult_Data);
  size += GetSerializedSize_(input->images);
  size += GetSerializedSize_(input->original_image_sizes);
  return size;
}

void Serialize_(DownloadResultPtr input, mojo::internal::Buffer* buf,
                internal::DownloadResult_Data** output) {
  if (input) {
    internal::DownloadResult_Data* result =
        internal::DownloadResult_Data::New(buf);
    result->http_status_code = input->http_status_code;
    const mojo::internal::ArrayValidateParams images_validate_params(
        0, false, nullptr);
    mojo::SerializeArray_(std::move(input->images), buf,
        &result->images.ptr, &images_validate_params);
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        !result->images.ptr,
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null images in DownloadResult struct");
    const mojo::internal::ArrayValidateParams original_image_sizes_validate_params(
        0, false, nullptr);
    mojo::SerializeArray_(std::move(input->original_image_sizes), buf,
        &result->original_image_sizes.ptr, &original_image_sizes_validate_params);
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        !result->original_image_sizes.ptr,
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null original_image_sizes in DownloadResult struct");
    *output = result;
  } else {
    *output = nullptr;
  }
}

bool Deserialize_(internal::DownloadResult_Data* input,
                  DownloadResultPtr* output,
                  mojo::internal::SerializationContext* context) {
  bool success = true;
  if (input) {
    DownloadResultPtr result(DownloadResult::New());
    do {
      // NOTE: The memory backing |input| may has be smaller than
      // |sizeof(*input)| if the message comes from an older version.
      result->http_status_code = input->http_status_code;
      if (!Deserialize_(input->images.ptr, &result->images, context))
        success = false;
      if (!Deserialize_(input->original_image_sizes.ptr, &result->original_image_sizes, context))
        success = false;
    } while (false);
    *output = std::move(result);
  } else {
    output->reset();
  }
  return success;
}

DownloadResult_Reader::DownloadResult_Reader(
    internal::DownloadResult_Data*  data,
    mojo::internal::SerializationContext* context)
    : data_(data), context_(context) { }
}  // namespace image_downloader

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif