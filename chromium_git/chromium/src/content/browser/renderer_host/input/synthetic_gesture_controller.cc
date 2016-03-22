// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "content/browser/renderer_host/input/synthetic_gesture_controller.h"

#include <utility>

#include "base/trace_event/trace_event.h"
#include "content/browser/renderer_host/input/synthetic_gesture_target.h"
#include "content/common/input/synthetic_smooth_scroll_gesture_params.h"
#include "content/common/input_messages.h"
#include "content/public/browser/render_widget_host.h"

namespace content {

SyntheticGestureController::SyntheticGestureController(
    scoped_ptr<SyntheticGestureTarget> gesture_target)
    : gesture_target_(std::move(gesture_target)) {}

SyntheticGestureController::~SyntheticGestureController() {}

void SyntheticGestureController::QueueSyntheticGesture(
    scoped_ptr<SyntheticGesture> synthetic_gesture,
    const OnGestureCompleteCallback& completion_callback) {
  DCHECK(synthetic_gesture);

  bool was_empty = pending_gesture_queue_.IsEmpty();

  pending_gesture_queue_.Push(std::move(synthetic_gesture),
                              completion_callback);

  if (was_empty)
    StartGesture(*pending_gesture_queue_.FrontGesture());
}

void SyntheticGestureController::Flush(base::TimeTicks timestamp) {
  TRACE_EVENT0("input", "SyntheticGestureController::Flush");
  if (pending_gesture_queue_.IsEmpty())
    return;

  if (pending_gesture_result_)
    return;

  SyntheticGesture* gesture = pending_gesture_queue_.FrontGesture();
  SyntheticGesture::Result result =
      gesture->ForwardInputEvents(timestamp, gesture_target_.get());

  if (result == SyntheticGesture::GESTURE_RUNNING) {
    gesture_target_->SetNeedsFlush();
    return;
  }

  // It's possible that all events generated by the gesture have been fully
  // dispatched at this point, in which case |OnDidFlushInput()| was called
  // before |pending_gesture_result_| was initialized. Requesting another flush
  // will trigger the necessary gesture-ending call to |OnDidFlushInput()|.
  pending_gesture_result_.reset(new SyntheticGesture::Result(result));
  gesture_target_->SetNeedsFlush();
}

void SyntheticGestureController::OnDidFlushInput() {
  if (!pending_gesture_result_)
    return;

  DCHECK(!pending_gesture_queue_.IsEmpty());
  auto pending_gesture_result = std::move(pending_gesture_result_);
  StopGesture(*pending_gesture_queue_.FrontGesture(),
              pending_gesture_queue_.FrontCallback(),
              *pending_gesture_result);
  pending_gesture_queue_.Pop();

  if (!pending_gesture_queue_.IsEmpty())
    StartGesture(*pending_gesture_queue_.FrontGesture());
}

void SyntheticGestureController::StartGesture(const SyntheticGesture& gesture) {
  TRACE_EVENT_ASYNC_BEGIN0("input,benchmark",
                           "SyntheticGestureController::running",
                           &gesture);
  gesture_target_->SetNeedsFlush();
}

void SyntheticGestureController::StopGesture(
    const SyntheticGesture& gesture,
    const OnGestureCompleteCallback& completion_callback,
    SyntheticGesture::Result result) {
  DCHECK_NE(result, SyntheticGesture::GESTURE_RUNNING);
  TRACE_EVENT_ASYNC_END0("input,benchmark",
                         "SyntheticGestureController::running",
                         &gesture);

  completion_callback.Run(result);
}

SyntheticGestureController::GestureAndCallbackQueue::GestureAndCallbackQueue() {
}

SyntheticGestureController::GestureAndCallbackQueue::
    ~GestureAndCallbackQueue() {
}

}  // namespace content
