// Copyright (c) 2011 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "storage/browser/blob/blob_url_request_job_factory.h"

#include <utility>

#include "base/strings/string_util.h"
#include "net/base/request_priority.h"
#include "net/url_request/url_request_context.h"
#include "storage/browser/blob/blob_data_handle.h"
#include "storage/browser/blob/blob_storage_context.h"
#include "storage/browser/blob/blob_url_request_job.h"
#include "storage/browser/fileapi/file_system_context.h"

namespace storage {

namespace {

int kUserDataKey;  // The value is not important, the addr is a key.

}  // namespace

// static
scoped_ptr<net::URLRequest> BlobProtocolHandler::CreateBlobRequest(
    scoped_ptr<BlobDataHandle> blob_data_handle,
    const net::URLRequestContext* request_context,
    net::URLRequest::Delegate* request_delegate) {
  const GURL kBlobUrl("blob://see_user_data/");
  scoped_ptr<net::URLRequest> request = request_context->CreateRequest(
      kBlobUrl, net::DEFAULT_PRIORITY, request_delegate);
  SetRequestedBlobDataHandle(request.get(), std::move(blob_data_handle));
  return request;
}

// static
void BlobProtocolHandler::SetRequestedBlobDataHandle(
    net::URLRequest* request,
    scoped_ptr<BlobDataHandle> blob_data_handle) {
  request->SetUserData(&kUserDataKey, blob_data_handle.release());
}

// static
BlobDataHandle* BlobProtocolHandler::GetRequestBlobDataHandle(
    net::URLRequest* request) {
  return static_cast<BlobDataHandle*>(request->GetUserData(&kUserDataKey));
}

BlobProtocolHandler::BlobProtocolHandler(
    BlobStorageContext* context,
    storage::FileSystemContext* file_system_context,
    const scoped_refptr<base::SingleThreadTaskRunner>& task_runner)
    : file_system_context_(file_system_context),
      file_task_runner_(task_runner) {
  if (context)
    context_ = context->AsWeakPtr();
}

BlobProtocolHandler::~BlobProtocolHandler() {
}

net::URLRequestJob* BlobProtocolHandler::MaybeCreateJob(
    net::URLRequest* request, net::NetworkDelegate* network_delegate) const {
  return new storage::BlobURLRequestJob(
      request, network_delegate, LookupBlobHandle(request),
      file_system_context_.get(), file_task_runner_.get());
}

BlobDataHandle* BlobProtocolHandler::LookupBlobHandle(
    net::URLRequest* request) const {
  BlobDataHandle* blob_data_handle = GetRequestBlobDataHandle(request);
  if (blob_data_handle)
    return blob_data_handle;
  if (!context_.get())
    return NULL;

  // Support looking up based on uuid, the FeedbackExtensionAPI relies on this.
  // TODO(michaeln): Replace this use case and others like it with a BlobReader
  // impl that does not depend on urlfetching to perform this function.
  const std::string kPrefix("blob:uuid/");
  if (!base::StartsWith(request->url().spec(), kPrefix,
                        base::CompareCase::SENSITIVE))
    return NULL;
  std::string uuid = request->url().spec().substr(kPrefix.length());
  scoped_ptr<BlobDataHandle> handle = context_->GetBlobDataFromUUID(uuid);
  BlobDataHandle* handle_ptr = handle.get();
  if (handle) {
    SetRequestedBlobDataHandle(request, std::move(handle));
  }
  return handle_ptr;
}

}  // namespace storage
