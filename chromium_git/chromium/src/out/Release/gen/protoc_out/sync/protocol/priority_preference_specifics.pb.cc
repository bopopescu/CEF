// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: priority_preference_specifics.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "priority_preference_specifics.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
// @@protoc_insertion_point(includes)

namespace sync_pb {

void protobuf_ShutdownFile_priority_5fpreference_5fspecifics_2eproto() {
  delete PriorityPreferenceSpecifics::default_instance_;
}

#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
void protobuf_AddDesc_priority_5fpreference_5fspecifics_2eproto_impl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#else
void protobuf_AddDesc_priority_5fpreference_5fspecifics_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#endif
  ::sync_pb::protobuf_AddDesc_preference_5fspecifics_2eproto();
  PriorityPreferenceSpecifics::default_instance_ = new PriorityPreferenceSpecifics();
  PriorityPreferenceSpecifics::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_priority_5fpreference_5fspecifics_2eproto);
}

#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AddDesc_priority_5fpreference_5fspecifics_2eproto_once_);
void protobuf_AddDesc_priority_5fpreference_5fspecifics_2eproto() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AddDesc_priority_5fpreference_5fspecifics_2eproto_once_,
                 &protobuf_AddDesc_priority_5fpreference_5fspecifics_2eproto_impl);
}
#else
// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_priority_5fpreference_5fspecifics_2eproto {
  StaticDescriptorInitializer_priority_5fpreference_5fspecifics_2eproto() {
    protobuf_AddDesc_priority_5fpreference_5fspecifics_2eproto();
  }
} static_descriptor_initializer_priority_5fpreference_5fspecifics_2eproto_;
#endif

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int PriorityPreferenceSpecifics::kPreferenceFieldNumber;
#endif  // !_MSC_VER

PriorityPreferenceSpecifics::PriorityPreferenceSpecifics()
  : ::google::protobuf::MessageLite() {
  SharedCtor();
}

void PriorityPreferenceSpecifics::InitAsDefaultInstance() {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  preference_ = const_cast< ::sync_pb::PreferenceSpecifics*>(
      ::sync_pb::PreferenceSpecifics::internal_default_instance());
#else
  preference_ = const_cast< ::sync_pb::PreferenceSpecifics*>(&::sync_pb::PreferenceSpecifics::default_instance());
#endif
}

PriorityPreferenceSpecifics::PriorityPreferenceSpecifics(const PriorityPreferenceSpecifics& from)
  : ::google::protobuf::MessageLite() {
  SharedCtor();
  MergeFrom(from);
}

void PriorityPreferenceSpecifics::SharedCtor() {
  _cached_size_ = 0;
  preference_ = NULL;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

PriorityPreferenceSpecifics::~PriorityPreferenceSpecifics() {
  SharedDtor();
}

void PriorityPreferenceSpecifics::SharedDtor() {
  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  if (this != &default_instance()) {
  #else
  if (this != default_instance_) {
  #endif
    delete preference_;
  }
}

void PriorityPreferenceSpecifics::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const PriorityPreferenceSpecifics& PriorityPreferenceSpecifics::default_instance() {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  protobuf_AddDesc_priority_5fpreference_5fspecifics_2eproto();
#else
  if (default_instance_ == NULL) protobuf_AddDesc_priority_5fpreference_5fspecifics_2eproto();
#endif
  return *default_instance_;
}

PriorityPreferenceSpecifics* PriorityPreferenceSpecifics::default_instance_ = NULL;

PriorityPreferenceSpecifics* PriorityPreferenceSpecifics::New() const {
  return new PriorityPreferenceSpecifics;
}

void PriorityPreferenceSpecifics::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (has_preference()) {
      if (preference_ != NULL) preference_->::sync_pb::PreferenceSpecifics::Clear();
    }
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool PriorityPreferenceSpecifics::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional .sync_pb.PreferenceSpecifics preference = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_preference()));
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

void PriorityPreferenceSpecifics::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // optional .sync_pb.PreferenceSpecifics preference = 1;
  if (has_preference()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessage(
      1, this->preference(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormatLite::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

int PriorityPreferenceSpecifics::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // optional .sync_pb.PreferenceSpecifics preference = 1;
    if (has_preference()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->preference());
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

void PriorityPreferenceSpecifics::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const PriorityPreferenceSpecifics*>(&from));
}

void PriorityPreferenceSpecifics::MergeFrom(const PriorityPreferenceSpecifics& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_preference()) {
      mutable_preference()->::sync_pb::PreferenceSpecifics::MergeFrom(from.preference());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void PriorityPreferenceSpecifics::CopyFrom(const PriorityPreferenceSpecifics& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool PriorityPreferenceSpecifics::IsInitialized() const {

  return true;
}

void PriorityPreferenceSpecifics::Swap(PriorityPreferenceSpecifics* other) {
  if (other != this) {
    std::swap(preference_, other->preference_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::std::string PriorityPreferenceSpecifics::GetTypeName() const {
  return "sync_pb.PriorityPreferenceSpecifics";
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace sync_pb

// @@protoc_insertion_point(global_scope)
