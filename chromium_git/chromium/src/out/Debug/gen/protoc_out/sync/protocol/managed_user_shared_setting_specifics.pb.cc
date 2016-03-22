// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: managed_user_shared_setting_specifics.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "managed_user_shared_setting_specifics.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
// @@protoc_insertion_point(includes)

namespace sync_pb {

void protobuf_ShutdownFile_managed_5fuser_5fshared_5fsetting_5fspecifics_2eproto() {
  delete ManagedUserSharedSettingSpecifics::default_instance_;
}

#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
void protobuf_AddDesc_managed_5fuser_5fshared_5fsetting_5fspecifics_2eproto_impl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#else
void protobuf_AddDesc_managed_5fuser_5fshared_5fsetting_5fspecifics_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#endif
  ManagedUserSharedSettingSpecifics::default_instance_ = new ManagedUserSharedSettingSpecifics();
  ManagedUserSharedSettingSpecifics::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_managed_5fuser_5fshared_5fsetting_5fspecifics_2eproto);
}

#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AddDesc_managed_5fuser_5fshared_5fsetting_5fspecifics_2eproto_once_);
void protobuf_AddDesc_managed_5fuser_5fshared_5fsetting_5fspecifics_2eproto() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AddDesc_managed_5fuser_5fshared_5fsetting_5fspecifics_2eproto_once_,
                 &protobuf_AddDesc_managed_5fuser_5fshared_5fsetting_5fspecifics_2eproto_impl);
}
#else
// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_managed_5fuser_5fshared_5fsetting_5fspecifics_2eproto {
  StaticDescriptorInitializer_managed_5fuser_5fshared_5fsetting_5fspecifics_2eproto() {
    protobuf_AddDesc_managed_5fuser_5fshared_5fsetting_5fspecifics_2eproto();
  }
} static_descriptor_initializer_managed_5fuser_5fshared_5fsetting_5fspecifics_2eproto_;
#endif

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int ManagedUserSharedSettingSpecifics::kMuIdFieldNumber;
const int ManagedUserSharedSettingSpecifics::kKeyFieldNumber;
const int ManagedUserSharedSettingSpecifics::kValueFieldNumber;
const int ManagedUserSharedSettingSpecifics::kAcknowledgedFieldNumber;
#endif  // !_MSC_VER

ManagedUserSharedSettingSpecifics::ManagedUserSharedSettingSpecifics()
  : ::google::protobuf::MessageLite() {
  SharedCtor();
}

void ManagedUserSharedSettingSpecifics::InitAsDefaultInstance() {
}

ManagedUserSharedSettingSpecifics::ManagedUserSharedSettingSpecifics(const ManagedUserSharedSettingSpecifics& from)
  : ::google::protobuf::MessageLite() {
  SharedCtor();
  MergeFrom(from);
}

void ManagedUserSharedSettingSpecifics::SharedCtor() {
  _cached_size_ = 0;
  mu_id_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyString());
  key_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyString());
  value_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyString());
  acknowledged_ = false;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

ManagedUserSharedSettingSpecifics::~ManagedUserSharedSettingSpecifics() {
  SharedDtor();
}

void ManagedUserSharedSettingSpecifics::SharedDtor() {
  if (mu_id_ != &::google::protobuf::internal::GetEmptyString()) {
    delete mu_id_;
  }
  if (key_ != &::google::protobuf::internal::GetEmptyString()) {
    delete key_;
  }
  if (value_ != &::google::protobuf::internal::GetEmptyString()) {
    delete value_;
  }
  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  if (this != &default_instance()) {
  #else
  if (this != default_instance_) {
  #endif
  }
}

void ManagedUserSharedSettingSpecifics::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ManagedUserSharedSettingSpecifics& ManagedUserSharedSettingSpecifics::default_instance() {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  protobuf_AddDesc_managed_5fuser_5fshared_5fsetting_5fspecifics_2eproto();
#else
  if (default_instance_ == NULL) protobuf_AddDesc_managed_5fuser_5fshared_5fsetting_5fspecifics_2eproto();
#endif
  return *default_instance_;
}

ManagedUserSharedSettingSpecifics* ManagedUserSharedSettingSpecifics::default_instance_ = NULL;

ManagedUserSharedSettingSpecifics* ManagedUserSharedSettingSpecifics::New() const {
  return new ManagedUserSharedSettingSpecifics;
}

void ManagedUserSharedSettingSpecifics::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (has_mu_id()) {
      if (mu_id_ != &::google::protobuf::internal::GetEmptyString()) {
        mu_id_->clear();
      }
    }
    if (has_key()) {
      if (key_ != &::google::protobuf::internal::GetEmptyString()) {
        key_->clear();
      }
    }
    if (has_value()) {
      if (value_ != &::google::protobuf::internal::GetEmptyString()) {
        value_->clear();
      }
    }
    acknowledged_ = false;
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool ManagedUserSharedSettingSpecifics::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional string mu_id = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_mu_id()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(18)) goto parse_key;
        break;
      }

      // optional string key = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_key:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_key()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(26)) goto parse_value;
        break;
      }

      // optional string value = 3;
      case 3: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_value:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_value()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(32)) goto parse_acknowledged;
        break;
      }

      // optional bool acknowledged = 4 [default = false];
      case 4: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_acknowledged:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &acknowledged_)));
          set_has_acknowledged();
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

void ManagedUserSharedSettingSpecifics::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // optional string mu_id = 1;
  if (has_mu_id()) {
    ::google::protobuf::internal::WireFormatLite::WriteString(
      1, this->mu_id(), output);
  }

  // optional string key = 2;
  if (has_key()) {
    ::google::protobuf::internal::WireFormatLite::WriteString(
      2, this->key(), output);
  }

  // optional string value = 3;
  if (has_value()) {
    ::google::protobuf::internal::WireFormatLite::WriteString(
      3, this->value(), output);
  }

  // optional bool acknowledged = 4 [default = false];
  if (has_acknowledged()) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(4, this->acknowledged(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormatLite::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

int ManagedUserSharedSettingSpecifics::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // optional string mu_id = 1;
    if (has_mu_id()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->mu_id());
    }

    // optional string key = 2;
    if (has_key()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->key());
    }

    // optional string value = 3;
    if (has_value()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->value());
    }

    // optional bool acknowledged = 4 [default = false];
    if (has_acknowledged()) {
      total_size += 1 + 1;
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

void ManagedUserSharedSettingSpecifics::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const ManagedUserSharedSettingSpecifics*>(&from));
}

void ManagedUserSharedSettingSpecifics::MergeFrom(const ManagedUserSharedSettingSpecifics& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_mu_id()) {
      set_mu_id(from.mu_id());
    }
    if (from.has_key()) {
      set_key(from.key());
    }
    if (from.has_value()) {
      set_value(from.value());
    }
    if (from.has_acknowledged()) {
      set_acknowledged(from.acknowledged());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void ManagedUserSharedSettingSpecifics::CopyFrom(const ManagedUserSharedSettingSpecifics& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ManagedUserSharedSettingSpecifics::IsInitialized() const {

  return true;
}

void ManagedUserSharedSettingSpecifics::Swap(ManagedUserSharedSettingSpecifics* other) {
  if (other != this) {
    std::swap(mu_id_, other->mu_id_);
    std::swap(key_, other->key_);
    std::swap(value_, other->value_);
    std::swap(acknowledged_, other->acknowledged_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::std::string ManagedUserSharedSettingSpecifics::GetTypeName() const {
  return "sync_pb.ManagedUserSharedSettingSpecifics";
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace sync_pb

// @@protoc_insertion_point(global_scope)
