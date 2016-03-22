// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "chrome/browser/ui/views/frame/avatar_button_manager.h"

#include "chrome/browser/ui/view_ids.h"
#include "chrome/browser/ui/views/frame/browser_frame.h"
#include "chrome/browser/ui/views/frame/browser_view.h"
#include "chrome/browser/ui/views/profiles/new_avatar_button.h"

AvatarButtonManager::AvatarButtonManager(BrowserNonClientFrameView* frame_view)
    : frame_view_(frame_view), view_(nullptr) {}

void AvatarButtonManager::Update(AvatarButtonStyle style) {
  BrowserView* browser_view = frame_view_->browser_view();
  BrowserFrame* frame = frame_view_->frame();

  // This should never be called in incognito mode.
  DCHECK(browser_view->IsRegularOrGuestSession());

  if (browser_view->ShouldShowAvatar()) {
    if (!view_) {
      view_ = new NewAvatarButton(this, style, browser_view->browser());
      view_->set_id(VIEW_ID_NEW_AVATAR_BUTTON);
      frame_view_->AddChildView(view_);
      frame->GetRootView()->Layout();
    }
  } else if (view_) {
    delete view_;
    view_ = nullptr;
    frame->GetRootView()->Layout();
  }
}

void AvatarButtonManager::ButtonPressed(views::Button* sender,
                                       const ui::Event& event) {
  DCHECK_EQ(view_, sender);
  BrowserWindow::AvatarBubbleMode mode =
      BrowserWindow::AVATAR_BUBBLE_MODE_DEFAULT;
  if ((event.IsMouseEvent() &&
       static_cast<const ui::MouseEvent&>(event).IsRightMouseButton()) ||
      (event.type() == ui::ET_GESTURE_LONG_PRESS)) {
    mode = BrowserWindow::AVATAR_BUBBLE_MODE_FAST_USER_SWITCH;
  }
  frame_view_->browser_view()->ShowAvatarBubbleFromAvatarButton(
      mode, signin::ManageAccountsParams(),
      signin_metrics::AccessPoint::ACCESS_POINT_AVATAR_BUBBLE_SIGN_IN);
}
