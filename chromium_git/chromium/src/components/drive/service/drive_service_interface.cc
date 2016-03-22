// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "components/drive/service/drive_service_interface.h"

namespace drive {

AddNewDirectoryOptions::AddNewDirectoryOptions()
    : visibility(google_apis::drive::FILE_VISIBILITY_DEFAULT) {
}

AddNewDirectoryOptions::~AddNewDirectoryOptions() {
}

UploadNewFileOptions::UploadNewFileOptions() {
}

UploadNewFileOptions::~UploadNewFileOptions() {
}

UploadExistingFileOptions::UploadExistingFileOptions() {
}

UploadExistingFileOptions::~UploadExistingFileOptions() {
}

}  // namespace drive
