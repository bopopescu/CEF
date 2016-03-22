// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: app_setting_specifics.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "app_setting_specifics.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
// @@protoc_insertion_point(includes)

namespace sync_pb {

void protobuf_ShutdownFile_app_5fsetting_5fspecifics_2eproto() {
  delete AppSettingSpecifics::default_instance_;
}

#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
void protobuf_AddDesc_app_5fsetting_5fspecifics_2eproto_impl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#else
void protobuf_AddDesc_app_5fsetting_5fspecifics_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#endif
  ::sync_pb::protobuf_AddDesc_extension_5fsetting_5fspecifics_2eproto();
  AppSettingSpecifics::default_instance_ = new AppSettingSpecifics();
  AppSettingSpecifics::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_app_5fsetting_5fspecifics_2eproto);
}

#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AddDesc_app_5fsetting_5fspecifics_2eproto_once_);
void protobuf_AddDesc_app_5fsetting_5fspecifics_2eproto() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AddDesc_app_5fsetting_5fspecifics_2eproto_once_,
                 &protobuf_AddDesc_app_5fsetting_5fspecifics_2eproto_impl);
}
#else
// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_app_5fsetting_5fspecifics_2eproto {
  StaticDescriptorInitializer_app_5fsetting_5fspecifics_2eproto() {
    protobuf_AddDesc_app_5fsetting_5fspecifics_2eproto();
  }
} static_descriptor_initializer_app_5fsetting_5fspecifics_2eproto_;
#endif

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int AppSettingSpecifics::kExtensionSettingFieldNumber;
#endif  // !_MSC_VER

AppSettingSpecifics::AppSettingSpecifics()
  : ::google::protobuf::MessageLite() {
  SharedCtor();
}

void AppSettingSpecifics::InitAsDefaultInstance() {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  extension_setting_ = const_cast< ::sync_pb::ExtensionSettingSpecifics*>(
      ::sync_pb::ExtensionSettingSpecifics::internal_default_instance());
#else
  extension_setting_ = const_cast< ::sync_pb::ExtensionSettingSpecifics*>(&::sync_pb::ExtensionSettingSpecifics::default_instance());
#endif
}

AppSettingSpecifics::AppSettingSpecifics(const AppSettingSpecifics& from)
  : ::google::protobuf::MessageLite() {
  SharedCtor();
  MergeFrom(from);
}

void AppSettingSpecifics::SharedCtor() {
  _cached_size_ = 0;
  extension_setting_ = NULL;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

AppSettingSpecifics::~AppSettingSpecifics() {
  SharedDtor();
}

void AppSettingSpecifics::SharedDtor() {
  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  if (this != &default_instance()) {
  #else
  if (this != default_instance_) {
  #endif
    delete extension_setting_;
  }
}

void AppSettingSpecifics::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const AppSettingSpecifics& AppSettingSpecifics::default_instance() {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  protobuf_AddDesc_app_5fsetting_5fspecifics_2eproto();
#else
  if (default_instance_ == NULL) protobuf_AddDesc_app_5fsetting_5fspecifics_2eproto();
#endif
  return *default_instance_;
}

AppSettingSpecifics* AppSettingSpecifics::default_instance_ = NULL;

AppSettingSpecifics* AppSettingSpecifics::New() const {
  return new AppSettingSpecifics;
}

void AppSettingSpecifics::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (has_extension_setting()) {
      if (extension_setting_ != NULL) extension_setting_->::sync_pb::ExtensionSettingSpecifics::Clear();
    }
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool AppSettingSpecifics::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional .sync_pb.ExtensionSettingSpecifics extension_setting = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_extension_setting()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectAtEnd()) return true;
        break;
      }

      default: {
      handle_uninterpreted:
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          return true;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
  return true;
#undef DO_
}

void AppSettingSpecifics::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // optional .sync_pb.ExtensionSettingSpecifics extension_setting = 1;
  if (has_extension_setting()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessage(
      1, this->extension_setting(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormatLite::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

int AppSettingSpecifics::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // optional .sync_pb.ExtensionSettingSpecifics extension_setting = 1;
    if (has_extension_setting()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->extension_setting());
    }

  }
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

void AppSettingSpecifics::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const AppSettingSpecifics*>(&from));
}

void AppSettingSpecifics::MergeFrom(const AppSettingSpecifics& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_extension_setting()) {
      mutable_extension_setting()->::sync_pb::ExtensionSettingSpecifics::MergeFrom(from.extension_setting());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void AppSettingSpecifics::CopyFrom(const AppSettingSpecifics& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool AppSettingSpecifics::IsInitialized() const {

  return true;
}

void AppSettingSpecifics::Swap(AppSettingSpecifics* other) {
  if (other != this) {
    std::swap(extension_setting_, other->extension_setting_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::std::string AppSettingSpecifics::GetTypeName() const {
  return "sync_pb.AppSettingSpecifics";
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace sync_pb

// @@protoc_insertion_point(global_scope)
