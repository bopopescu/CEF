// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: synced_notification_app_info_specifics.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "synced_notification_app_info_specifics.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
// @@protoc_insertion_point(includes)

namespace sync_pb {

void protobuf_ShutdownFile_synced_5fnotification_5fapp_5finfo_5fspecifics_2eproto() {
  delete SyncedNotificationAppInfoSpecifics::default_instance_;
}

#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
void protobuf_AddDesc_synced_5fnotification_5fapp_5finfo_5fspecifics_2eproto_impl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#else
void protobuf_AddDesc_synced_5fnotification_5fapp_5finfo_5fspecifics_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#endif
  SyncedNotificationAppInfoSpecifics::default_instance_ = new SyncedNotificationAppInfoSpecifics();
  SyncedNotificationAppInfoSpecifics::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_synced_5fnotification_5fapp_5finfo_5fspecifics_2eproto);
}

#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AddDesc_synced_5fnotification_5fapp_5finfo_5fspecifics_2eproto_once_);
void protobuf_AddDesc_synced_5fnotification_5fapp_5finfo_5fspecifics_2eproto() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AddDesc_synced_5fnotification_5fapp_5finfo_5fspecifics_2eproto_once_,
                 &protobuf_AddDesc_synced_5fnotification_5fapp_5finfo_5fspecifics_2eproto_impl);
}
#else
// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_synced_5fnotification_5fapp_5finfo_5fspecifics_2eproto {
  StaticDescriptorInitializer_synced_5fnotification_5fapp_5finfo_5fspecifics_2eproto() {
    protobuf_AddDesc_synced_5fnotification_5fapp_5finfo_5fspecifics_2eproto();
  }
} static_descriptor_initializer_synced_5fnotification_5fapp_5finfo_5fspecifics_2eproto_;
#endif

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
#endif  // !_MSC_VER

SyncedNotificationAppInfoSpecifics::SyncedNotificationAppInfoSpecifics()
  : ::google::protobuf::MessageLite() {
  SharedCtor();
}

void SyncedNotificationAppInfoSpecifics::InitAsDefaultInstance() {
}

SyncedNotificationAppInfoSpecifics::SyncedNotificationAppInfoSpecifics(const SyncedNotificationAppInfoSpecifics& from)
  : ::google::protobuf::MessageLite() {
  SharedCtor();
  MergeFrom(from);
}

void SyncedNotificationAppInfoSpecifics::SharedCtor() {
  _cached_size_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

SyncedNotificationAppInfoSpecifics::~SyncedNotificationAppInfoSpecifics() {
  SharedDtor();
}

void SyncedNotificationAppInfoSpecifics::SharedDtor() {
  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  if (this != &default_instance()) {
  #else
  if (this != default_instance_) {
  #endif
  }
}

void SyncedNotificationAppInfoSpecifics::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const SyncedNotificationAppInfoSpecifics& SyncedNotificationAppInfoSpecifics::default_instance() {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  protobuf_AddDesc_synced_5fnotification_5fapp_5finfo_5fspecifics_2eproto();
#else
  if (default_instance_ == NULL) protobuf_AddDesc_synced_5fnotification_5fapp_5finfo_5fspecifics_2eproto();
#endif
  return *default_instance_;
}

SyncedNotificationAppInfoSpecifics* SyncedNotificationAppInfoSpecifics::default_instance_ = NULL;

SyncedNotificationAppInfoSpecifics* SyncedNotificationAppInfoSpecifics::New() const {
  return new SyncedNotificationAppInfoSpecifics;
}

void SyncedNotificationAppInfoSpecifics::Clear() {
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool SyncedNotificationAppInfoSpecifics::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
        ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
      return true;
    }
    DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag, mutable_unknown_fields()));
  }
  return true;
#undef DO_
}

void SyncedNotificationAppInfoSpecifics::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormatLite::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

int SyncedNotificationAppInfoSpecifics::ByteSize() const {
  int total_size = 0;

  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormatLite::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void SyncedNotificationAppInfoSpecifics::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const SyncedNotificationAppInfoSpecifics*>(&from));
}

void SyncedNotificationAppInfoSpecifics::MergeFrom(const SyncedNotificationAppInfoSpecifics& from) {
  GOOGLE_CHECK_NE(&from, this);
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void SyncedNotificationAppInfoSpecifics::CopyFrom(const SyncedNotificationAppInfoSpecifics& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool SyncedNotificationAppInfoSpecifics::IsInitialized() const {

  return true;
}

void SyncedNotificationAppInfoSpecifics::Swap(SyncedNotificationAppInfoSpecifics* other) {
  if (other != this) {
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::std::string SyncedNotificationAppInfoSpecifics::GetTypeName() const {
  return "sync_pb.SyncedNotificationAppInfoSpecifics";
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace sync_pb

// @@protoc_insertion_point(global_scope)
