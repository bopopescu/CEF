// Copyright 2015 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "base/command_line.h"
#include "base/macros.h"
#include "chrome/browser/extensions/extension_apitest.h"
#include "chrome/browser/ui/tabs/tab_strip_model.h"
#include "chrome/browser/ui/website_settings/permission_bubble_manager.h"
#include "chrome/test/base/ui_test_utils.h"
#include "extensions/test/result_catcher.h"
#include "media/base/media_switches.h"
#include "net/dns/mock_host_resolver.h"
#include "net/test/embedded_test_server/embedded_test_server.h"

namespace extensions {

namespace {

// Used to observe the creation of permission prompt without responding.
class PermissionRequestObserver : public PermissionBubbleManager::Observer {
 public:
  explicit PermissionRequestObserver(content::WebContents* web_contents)
      : bubble_manager_(PermissionBubbleManager::FromWebContents(web_contents)),
        request_shown_(false) {
    bubble_manager_->AddObserver(this);
  }
  ~PermissionRequestObserver() override {
    // Safe to remove twice if it happens.
    bubble_manager_->RemoveObserver(this);
  }

  bool request_shown() const { return request_shown_; }

 private:
  // PermissionBubbleManager::Observer
  void OnBubbleAdded() override {
    request_shown_ = true;
    bubble_manager_->RemoveObserver(this);
  }

  PermissionBubbleManager* bubble_manager_;
  bool request_shown_;

  DISALLOW_COPY_AND_ASSIGN(PermissionRequestObserver);
};

}  // namespace

class WebRtcFromWebAccessibleResourceTest : public ExtensionApiTest {
 public:
  WebRtcFromWebAccessibleResourceTest() {}
  ~WebRtcFromWebAccessibleResourceTest() override {}

  // InProcessBrowserTest:
  void SetUpCommandLine(base::CommandLine* command_line) override {
    ExtensionApiTest::SetUpCommandLine(command_line);

    command_line->AppendSwitch(switches::kUseFakeDeviceForMediaStream);
  }

 protected:
  GURL GetTestServerInsecureUrl(const std::string& path) {
    GURL url = embedded_test_server()->GetURL(path);

    GURL::Replacements replace_host_and_scheme;
    replace_host_and_scheme.SetHostStr("a.com");
    replace_host_and_scheme.SetSchemeStr("http");
    url = url.ReplaceComponents(replace_host_and_scheme);

    return url;
  }

  void LoadTestExtension() {
    ASSERT_TRUE(LoadExtension(test_data_dir_.AppendASCII(
        "webrtc_from_web_accessible_resource")));
  }

 private:
  DISALLOW_COPY_AND_ASSIGN(WebRtcFromWebAccessibleResourceTest);
};

// Verify that a chrome-extension:// web accessible URL can successfully access
// getUserMedia(), even if it is embedded in an insecure context.
IN_PROC_BROWSER_TEST_F(WebRtcFromWebAccessibleResourceTest,
                       GetUserMediaInWebAccessibleResourceSuccess) {
  host_resolver()->AddRule("a.com", "127.0.0.1");
  ASSERT_TRUE(StartEmbeddedTestServer());

  LoadTestExtension();
  GURL url = GetTestServerInsecureUrl("/extensions/test_file.html?succeed");
  content::WebContents* web_contents =
      browser()->tab_strip_model()->GetActiveWebContents();
  PermissionBubbleManager* bubble_manager =
      PermissionBubbleManager::FromWebContents(web_contents);
  bubble_manager->set_auto_response_for_test(
      PermissionBubbleManager::ACCEPT_ALL);
  PermissionRequestObserver permission_request_observer(web_contents);
  extensions::ResultCatcher catcher;
  ui_test_utils::NavigateToURL(browser(), url);

  ASSERT_TRUE(catcher.GetNextResult());
  EXPECT_TRUE(permission_request_observer.request_shown());
}

// Verify that a chrome-extension:// web accessible URL will fail to access
// getUserMedia() if it is denied by the permission bubble, even if it is
// embedded in an insecure context.
IN_PROC_BROWSER_TEST_F(WebRtcFromWebAccessibleResourceTest,
                       GetUserMediaInWebAccessibleResourceFail) {
  host_resolver()->AddRule("a.com", "127.0.0.1");
  ASSERT_TRUE(StartEmbeddedTestServer());

  LoadTestExtension();
  GURL url = GetTestServerInsecureUrl("/extensions/test_file.html?fail");
  content::WebContents* web_contents =
      browser()->tab_strip_model()->GetActiveWebContents();
  PermissionBubbleManager* bubble_manager =
      PermissionBubbleManager::FromWebContents(web_contents);
  bubble_manager->set_auto_response_for_test(PermissionBubbleManager::DENY_ALL);
  PermissionRequestObserver permission_request_observer(web_contents);
  extensions::ResultCatcher catcher;
  ui_test_utils::NavigateToURL(browser(), url);

  ASSERT_TRUE(catcher.GetNextResult());
  EXPECT_TRUE(permission_request_observer.request_shown());
}

}  // namespace extensions
