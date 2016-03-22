// Copyright 2015 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "third_party/mojo/src/mojo/edk/test/scoped_ipc_support.h"

#include <utility>

#include "base/message_loop/message_loop.h"
#include "third_party/mojo/src/mojo/edk/embedder/embedder.h"

namespace mojo {
namespace test {

namespace internal {

ScopedIPCSupportHelper::ScopedIPCSupportHelper() {
}

ScopedIPCSupportHelper::~ScopedIPCSupportHelper() {
  if (base::MessageLoop::current() &&
      base::MessageLoop::current()->task_runner() == io_thread_task_runner_) {
    embedder::ShutdownIPCSupportOnIOThread();
  } else {
    embedder::ShutdownIPCSupport();
    run_loop_.Run();
  }
}

void ScopedIPCSupportHelper::Init(
    embedder::ProcessType process_type,
    embedder::ProcessDelegate* process_delegate,
    scoped_refptr<base::TaskRunner> io_thread_task_runner,
    embedder::ScopedPlatformHandle platform_handle) {
  io_thread_task_runner_ = io_thread_task_runner;
  // Note: Run delegate methods on the I/O thread.
  embedder::InitIPCSupport(process_type, process_delegate,
                           io_thread_task_runner_, std::move(platform_handle));
}

void ScopedIPCSupportHelper::OnShutdownCompleteImpl() {
  run_loop_.Quit();
}

}  // namespace internal

ScopedIPCSupport::ScopedIPCSupport(
    scoped_refptr<base::TaskRunner> io_thread_task_runner) {
  helper_.Init(embedder::ProcessType::NONE, this,
               std::move(io_thread_task_runner),
               embedder::ScopedPlatformHandle());
}

ScopedIPCSupport::~ScopedIPCSupport() {
}

void ScopedIPCSupport::OnShutdownComplete() {
  helper_.OnShutdownCompleteImpl();
}

ScopedMasterIPCSupport::ScopedMasterIPCSupport(
    scoped_refptr<base::TaskRunner> io_thread_task_runner) {
  helper_.Init(embedder::ProcessType::MASTER, this,
               std::move(io_thread_task_runner),
               embedder::ScopedPlatformHandle());
}

ScopedMasterIPCSupport::ScopedMasterIPCSupport(
    scoped_refptr<base::TaskRunner> io_thread_task_runner,
    base::Callback<void(embedder::SlaveInfo slave_info)> on_slave_disconnect)
    : on_slave_disconnect_(on_slave_disconnect) {
  helper_.Init(embedder::ProcessType::MASTER, this,
               std::move(io_thread_task_runner),
               embedder::ScopedPlatformHandle());
}

ScopedMasterIPCSupport::~ScopedMasterIPCSupport() {
}

void ScopedMasterIPCSupport::OnShutdownComplete() {
  helper_.OnShutdownCompleteImpl();
}

void ScopedMasterIPCSupport::OnSlaveDisconnect(embedder::SlaveInfo slave_info) {
  if (!on_slave_disconnect_.is_null())
    on_slave_disconnect_.Run(slave_info);
}

ScopedSlaveIPCSupport::ScopedSlaveIPCSupport(
    scoped_refptr<base::TaskRunner> io_thread_task_runner,
    embedder::ScopedPlatformHandle platform_handle) {
  helper_.Init(embedder::ProcessType::SLAVE, this,
               std::move(io_thread_task_runner), std::move(platform_handle));
}

ScopedSlaveIPCSupport::ScopedSlaveIPCSupport(
    scoped_refptr<base::TaskRunner> io_thread_task_runner,
    embedder::ScopedPlatformHandle platform_handle,
    base::Closure on_master_disconnect)
    : on_master_disconnect_(on_master_disconnect) {
  helper_.Init(embedder::ProcessType::SLAVE, this,
               std::move(io_thread_task_runner), std::move(platform_handle));
}

ScopedSlaveIPCSupport::~ScopedSlaveIPCSupport() {
}

void ScopedSlaveIPCSupport::OnShutdownComplete() {
  helper_.OnShutdownCompleteImpl();
}

void ScopedSlaveIPCSupport::OnMasterDisconnect() {
  if (!on_master_disconnect_.is_null())
    on_master_disconnect_.Run();
}

}  // namespace test
}  // namespace mojo
