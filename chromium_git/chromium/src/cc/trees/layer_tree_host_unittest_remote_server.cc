// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "cc/trees/layer_tree_host.h"

#include "base/thread_task_runner_handle.h"
#include "cc/test/test_task_graph_runner.h"
#include "cc/trees/layer_tree_host_client.h"
#include "cc/trees/proxy_common.h"
#include "cc/trees/proxy_main.h"
#include "cc/trees/remote_proto_channel.h"
#include "testing/gtest/include/gtest/gtest.h"

namespace cc {
namespace {

class LayerTreeHostTestRemoteServer : public testing::Test,
                                      public RemoteProtoChannel,
                                      public LayerTreeHostClient {
 public:
  LayerTreeHostTestRemoteServer() : calls_received_(0) {
    LayerTreeHost::InitParams params;
    params.client = this;
    params.task_graph_runner = &task_graph_runner_;
    params.settings = &settings_;
    params.main_task_runner = base::ThreadTaskRunnerHandle::Get();
    layer_tree_host_ = LayerTreeHost::CreateRemoteServer(this, &params);
  }

  ~LayerTreeHostTestRemoteServer() override {}

  // LayerTreeHostClient implementation
  void WillBeginMainFrame() override {}
  void BeginMainFrame(const BeginFrameArgs& args) override {}
  void BeginMainFrameNotExpectedSoon() override {}
  void DidBeginMainFrame() override {}
  void UpdateLayerTreeHost() override {}
  void ApplyViewportDeltas(const gfx::Vector2dF& inner_delta,
                           const gfx::Vector2dF& outer_delta,
                           const gfx::Vector2dF& elastic_overscroll_delta,
                           float page_scale,
                           float top_controls_delta) override {}
  void RequestNewOutputSurface() override { NOTREACHED(); }
  void DidInitializeOutputSurface() override { NOTREACHED(); }
  void DidFailToInitializeOutputSurface() override { NOTREACHED(); }
  void WillCommit() override {}
  void DidCommit() override {}
  void DidCommitAndDrawFrame() override {}
  void DidCompleteSwapBuffers() override {}
  void RecordFrameTimingEvents(
      scoped_ptr<FrameTimingTracker::CompositeTimingSet> composite_events,
      scoped_ptr<FrameTimingTracker::MainFrameTimingSet> main_frame_events)
      override{};
  void DidCompletePageScaleAnimation() override {}
  void SendBeginFramesToChildren(const BeginFrameArgs& args) override {}

  // RemoteProtoChannel implementation
  void SetProtoReceiver(RemoteProtoChannel::ProtoReceiver* receiver) override {
    receiver_ = receiver;
  }
  void SendCompositorProto(const proto::CompositorMessage& proto) override {}

  int calls_received_;
  TestTaskGraphRunner task_graph_runner_;
  LayerTreeSettings settings_;
  scoped_ptr<LayerTreeHost> layer_tree_host_;
  RemoteProtoChannel::ProtoReceiver* receiver_;

 private:
  DISALLOW_COPY_AND_ASSIGN(LayerTreeHostTestRemoteServer);
};

class LayerTreeHostTestRemoteServerBeginMainFrame
    : public LayerTreeHostTestRemoteServer {
 protected:
  void BeginMainFrame(const BeginFrameArgs& args) override {
    calls_received_++;
  }
};

// Makes sure that the BeginMainFrame call is not aborted on the server.
// See crbug.com/577301.
TEST_F(LayerTreeHostTestRemoteServerBeginMainFrame, BeginMainFrameNotAborted) {
  layer_tree_host_->SetVisible(true);

  scoped_ptr<BeginMainFrameAndCommitState> begin_frame_state;
  begin_frame_state.reset(new BeginMainFrameAndCommitState());
  begin_frame_state->scroll_info.reset(new ScrollAndScaleSet());

  static_cast<ProxyMain*>(layer_tree_host_->proxy())
      ->BeginMainFrame(std::move(begin_frame_state));
  EXPECT_EQ(calls_received_, 1);
}

}  // namespace
}  // namespace cc
