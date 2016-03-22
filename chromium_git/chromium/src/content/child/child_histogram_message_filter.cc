// Copyright (c) 2012 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "content/child/child_histogram_message_filter.h"

#include <ctype.h>

#include "base/bind.h"
#include "base/location.h"
#include "base/metrics/histogram_delta_serialization.h"
#include "base/single_thread_task_runner.h"
#include "content/child/child_process.h"
#include "content/common/child_process_messages.h"
#include "ipc/ipc_sender.h"

namespace content {

ChildHistogramMessageFilter::ChildHistogramMessageFilter()
    : sender_(NULL),
      io_task_runner_(ChildProcess::current()->io_task_runner()) {
}

ChildHistogramMessageFilter::~ChildHistogramMessageFilter() {
}

void ChildHistogramMessageFilter::OnFilterAdded(IPC::Sender* sender) {
  sender_ = sender;
}

void ChildHistogramMessageFilter::OnFilterRemoved() {
}

bool ChildHistogramMessageFilter::OnMessageReceived(
    const IPC::Message& message) {
  bool handled = true;
  IPC_BEGIN_MESSAGE_MAP(ChildHistogramMessageFilter, message)
    IPC_MESSAGE_HANDLER(ChildProcessMsg_GetChildHistogramData,
                        OnGetChildHistogramData)
    IPC_MESSAGE_UNHANDLED(handled = false)
  IPC_END_MESSAGE_MAP()
  return handled;
}

void ChildHistogramMessageFilter::SendHistograms(int sequence_number) {
  io_task_runner_->PostTask(
      FROM_HERE, base::Bind(&ChildHistogramMessageFilter::UploadAllHistograms,
                            this, sequence_number));
}

void ChildHistogramMessageFilter::OnGetChildHistogramData(int sequence_number) {
  UploadAllHistograms(sequence_number);
}

void ChildHistogramMessageFilter::UploadAllHistograms(int sequence_number) {
  if (!histogram_delta_serialization_) {
    histogram_delta_serialization_.reset(
        new base::HistogramDeltaSerialization("ChildProcess"));
  }

  std::vector<std::string> deltas;
  // "false" to PerpareAndSerializeDeltas() indicates to *not* include
  // histograms held in persistent storage on the assumption that they will be
  // visible to the recipient through other means.
  histogram_delta_serialization_->PrepareAndSerializeDeltas(&deltas, false);
  sender_->Send(
      new ChildProcessHostMsg_ChildHistogramData(sequence_number, deltas));

#ifndef NDEBUG
  static int count = 0;
  count++;
  LOCAL_HISTOGRAM_COUNTS("Histogram.ChildProcessHistogramSentCount", count);
#endif
}

}  // namespace content
