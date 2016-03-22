// Copyright (c) 2012 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "sync/internal_api/syncapi_server_connection_manager.h"

#include "base/bind.h"
#include "base/bind_helpers.h"
#include "base/compiler_specific.h"
#include "base/synchronization/waitable_event.h"
#include "base/test/test_timeouts.h"
#include "base/threading/thread.h"
#include "base/time/time.h"
#include "net/base/net_errors.h"
#include "sync/internal_api/public/base/cancelation_signal.h"
#include "sync/internal_api/public/http_post_provider_factory.h"
#include "sync/internal_api/public/http_post_provider_interface.h"
#include "testing/gtest/include/gtest/gtest.h"

namespace syncer {
namespace {

using base::TimeDelta;

class BlockingHttpPost : public HttpPostProviderInterface {
 public:
  BlockingHttpPost() : wait_for_abort_(false, false) {}
  ~BlockingHttpPost() override {}

  void SetExtraRequestHeaders(const char* headers) override {}
  void SetURL(const char* url, int port) override {}
  void SetPostPayload(const char* content_type,
                      int content_length,
                      const char* content) override {}
  bool MakeSynchronousPost(int* error_code, int* response_code) override {
    wait_for_abort_.TimedWait(TestTimeouts::action_max_timeout());
    *error_code = net::ERR_ABORTED;
    return false;
  }
  int GetResponseContentLength() const override { return 0; }
  const char* GetResponseContent() const override { return ""; }
  const std::string GetResponseHeaderValue(
      const std::string& name) const override {
    return std::string();
  }
  void Abort() override { wait_for_abort_.Signal(); }
 private:
  base::WaitableEvent wait_for_abort_;
};

class BlockingHttpPostFactory : public HttpPostProviderFactory {
 public:
  ~BlockingHttpPostFactory() override {}
  void Init(const std::string& user_agent,
            const BindToTrackerCallback& bind_to_tracker_callback) override {}

  HttpPostProviderInterface* Create() override {
    return new BlockingHttpPost();
  }
  void Destroy(HttpPostProviderInterface* http) override {
    delete static_cast<BlockingHttpPost*>(http);
  }
};

}  // namespace

// Ask the ServerConnectionManager to stop before it is created.
TEST(SyncAPIServerConnectionManagerTest, VeryEarlyAbortPost) {
  CancelationSignal signal;
  signal.Signal();
  SyncAPIServerConnectionManager server(
      "server", 0, true, new BlockingHttpPostFactory(), &signal);

  ServerConnectionManager::PostBufferParams params;

  bool result = server.PostBufferToPath(&params, "/testpath", "testauth");

  EXPECT_FALSE(result);
  EXPECT_EQ(HttpResponse::CONNECTION_UNAVAILABLE,
            params.response.server_status);
}

// Ask the ServerConnectionManager to stop before its first request is made.
TEST(SyncAPIServerConnectionManagerTest, EarlyAbortPost) {
  CancelationSignal signal;
  SyncAPIServerConnectionManager server(
      "server", 0, true, new BlockingHttpPostFactory(), &signal);

  ServerConnectionManager::PostBufferParams params;

  signal.Signal();
  bool result = server.PostBufferToPath(&params, "/testpath", "testauth");

  EXPECT_FALSE(result);
  EXPECT_EQ(HttpResponse::CONNECTION_UNAVAILABLE,
            params.response.server_status);
}

// Ask the ServerConnectionManager to stop during a request.
TEST(SyncAPIServerConnectionManagerTest, AbortPost) {
  CancelationSignal signal;
  SyncAPIServerConnectionManager server(
      "server", 0, true, new BlockingHttpPostFactory(), &signal);

  ServerConnectionManager::PostBufferParams params;

  base::Thread abort_thread("Test_AbortThread");
  ASSERT_TRUE(abort_thread.Start());
  abort_thread.message_loop()->PostDelayedTask(
      FROM_HERE,
      base::Bind(&CancelationSignal::Signal,
                 base::Unretained(&signal)),
      TestTimeouts::tiny_timeout());

  bool result = server.PostBufferToPath(&params, "/testpath", "testauth");

  EXPECT_FALSE(result);
  EXPECT_EQ(HttpResponse::CONNECTION_UNAVAILABLE,
            params.response.server_status);
  abort_thread.Stop();
}

namespace {

class FailingHttpPost : public HttpPostProviderInterface {
 public:
  explicit FailingHttpPost(int error_code) : error_code_(error_code) {}
  ~FailingHttpPost() override {}

  void SetExtraRequestHeaders(const char* headers) override {}
  void SetURL(const char* url, int port) override {}
  void SetPostPayload(const char* content_type,
                      int content_length,
                      const char* content) override {}
  bool MakeSynchronousPost(int* error_code, int* response_code) override {
    *error_code = error_code_;
    return false;
  }
  int GetResponseContentLength() const override { return 0; }
  const char* GetResponseContent() const override { return ""; }
  const std::string GetResponseHeaderValue(
      const std::string& name) const override {
    return std::string();
  }
  void Abort() override {}

 private:
  int error_code_;
};

class FailingHttpPostFactory : public HttpPostProviderFactory {
 public:
  explicit FailingHttpPostFactory(int error_code) : error_code_(error_code) {}
  ~FailingHttpPostFactory() override {}
  void Init(const std::string& user_agent,
            const BindToTrackerCallback& bind_to_tracker_callback) override {}

  HttpPostProviderInterface* Create() override {
    return new FailingHttpPost(error_code_);
  }
  void Destroy(HttpPostProviderInterface* http) override {
    delete static_cast<FailingHttpPost*>(http);
  }

 private:
  int error_code_;
};

}  // namespace

// Fail request with TIMED_OUT error. Make sure server status is
// CONNECTION_UNAVAILABLE and therefore request will be retried after network
// change.
TEST(SyncAPIServerConnectionManagerTest, FailPostWithTimedOut) {
  CancelationSignal signal;
  SyncAPIServerConnectionManager server(
      "server", 0, true, new FailingHttpPostFactory(net::ERR_TIMED_OUT),
      &signal);

  ServerConnectionManager::PostBufferParams params;

  bool result = server.PostBufferToPath(&params, "/testpath", "testauth");

  EXPECT_FALSE(result);
  EXPECT_EQ(HttpResponse::CONNECTION_UNAVAILABLE,
            params.response.server_status);
}

}  // namespace syncer
