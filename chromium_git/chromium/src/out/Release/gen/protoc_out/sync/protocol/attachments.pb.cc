// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: attachments.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "attachments.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
// @@protoc_insertion_point(includes)

namespace sync_pb {

void protobuf_ShutdownFile_attachments_2eproto() {
  delete AttachmentIdProto::default_instance_;
  delete AttachmentMetadataRecord::default_instance_;
  delete AttachmentMetadata::default_instance_;
}

#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
void protobuf_AddDesc_attachments_2eproto_impl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#else
void protobuf_AddDesc_attachments_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#endif
  AttachmentIdProto::default_instance_ = new AttachmentIdProto();
  AttachmentMetadataRecord::default_instance_ = new AttachmentMetadataRecord();
  AttachmentMetadata::default_instance_ = new AttachmentMetadata();
  AttachmentIdProto::default_instance_->InitAsDefaultInstance();
  AttachmentMetadataRecord::default_instance_->InitAsDefaultInstance();
  AttachmentMetadata::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_attachments_2eproto);
}

#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AddDesc_attachments_2eproto_once_);
void protobuf_AddDesc_attachments_2eproto() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AddDesc_attachments_2eproto_once_,
                 &protobuf_AddDesc_attachments_2eproto_impl);
}
#else
// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_attachments_2eproto {
  StaticDescriptorInitializer_attachments_2eproto() {
    protobuf_AddDesc_attachments_2eproto();
  }
} static_descriptor_initializer_attachments_2eproto_;
#endif

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int AttachmentIdProto::kUniqueIdFieldNumber;
const int AttachmentIdProto::kSizeBytesFieldNumber;
const int AttachmentIdProto::kCrc32CFieldNumber;
#endif  // !_MSC_VER

AttachmentIdProto::AttachmentIdProto()
  : ::google::protobuf::MessageLite() {
  SharedCtor();
}

void AttachmentIdProto::InitAsDefaultInstance() {
}

AttachmentIdProto::AttachmentIdProto(const AttachmentIdProto& from)
  : ::google::protobuf::MessageLite() {
  SharedCtor();
  MergeFrom(from);
}

void AttachmentIdProto::SharedCtor() {
  _cached_size_ = 0;
  unique_id_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyString());
  size_bytes_ = GOOGLE_ULONGLONG(0);
  crc32c_ = 0u;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

AttachmentIdProto::~AttachmentIdProto() {
  SharedDtor();
}

void AttachmentIdProto::SharedDtor() {
  if (unique_id_ != &::google::protobuf::internal::GetEmptyString()) {
    delete unique_id_;
  }
  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  if (this != &default_instance()) {
  #else
  if (this != default_instance_) {
  #endif
  }
}

void AttachmentIdProto::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const AttachmentIdProto& AttachmentIdProto::default_instance() {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  protobuf_AddDesc_attachments_2eproto();
#else
  if (default_instance_ == NULL) protobuf_AddDesc_attachments_2eproto();
#endif
  return *default_instance_;
}

AttachmentIdProto* AttachmentIdProto::default_instance_ = NULL;

AttachmentIdProto* AttachmentIdProto::New() const {
  return new AttachmentIdProto;
}

void AttachmentIdProto::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (has_unique_id()) {
      if (unique_id_ != &::google::protobuf::internal::GetEmptyString()) {
        unique_id_->clear();
      }
    }
    size_bytes_ = GOOGLE_ULONGLONG(0);
    crc32c_ = 0u;
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool AttachmentIdProto::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional string unique_id = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_unique_id()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(16)) goto parse_size_bytes;
        break;
      }

      // optional uint64 size_bytes = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_size_bytes:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint64, ::google::protobuf::internal::WireFormatLite::TYPE_UINT64>(
                 input, &size_bytes_)));
          set_has_size_bytes();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(24)) goto parse_crc32c;
        break;
      }

      // optional uint32 crc32c = 3;
      case 3: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_crc32c:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &crc32c_)));
          set_has_crc32c();
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

void AttachmentIdProto::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // optional string unique_id = 1;
  if (has_unique_id()) {
    ::google::protobuf::internal::WireFormatLite::WriteString(
      1, this->unique_id(), output);
  }

  // optional uint64 size_bytes = 2;
  if (has_size_bytes()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt64(2, this->size_bytes(), output);
  }

  // optional uint32 crc32c = 3;
  if (has_crc32c()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(3, this->crc32c(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormatLite::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

int AttachmentIdProto::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // optional string unique_id = 1;
    if (has_unique_id()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->unique_id());
    }

    // optional uint64 size_bytes = 2;
    if (has_size_bytes()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt64Size(
          this->size_bytes());
    }

    // optional uint32 crc32c = 3;
    if (has_crc32c()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->crc32c());
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

void AttachmentIdProto::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const AttachmentIdProto*>(&from));
}

void AttachmentIdProto::MergeFrom(const AttachmentIdProto& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_unique_id()) {
      set_unique_id(from.unique_id());
    }
    if (from.has_size_bytes()) {
      set_size_bytes(from.size_bytes());
    }
    if (from.has_crc32c()) {
      set_crc32c(from.crc32c());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void AttachmentIdProto::CopyFrom(const AttachmentIdProto& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool AttachmentIdProto::IsInitialized() const {

  return true;
}

void AttachmentIdProto::Swap(AttachmentIdProto* other) {
  if (other != this) {
    std::swap(unique_id_, other->unique_id_);
    std::swap(size_bytes_, other->size_bytes_);
    std::swap(crc32c_, other->crc32c_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::std::string AttachmentIdProto::GetTypeName() const {
  return "sync_pb.AttachmentIdProto";
}


// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int AttachmentMetadataRecord::kIdFieldNumber;
const int AttachmentMetadataRecord::kIsOnServerFieldNumber;
#endif  // !_MSC_VER

AttachmentMetadataRecord::AttachmentMetadataRecord()
  : ::google::protobuf::MessageLite() {
  SharedCtor();
}

void AttachmentMetadataRecord::InitAsDefaultInstance() {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  id_ = const_cast< ::sync_pb::AttachmentIdProto*>(
      ::sync_pb::AttachmentIdProto::internal_default_instance());
#else
  id_ = const_cast< ::sync_pb::AttachmentIdProto*>(&::sync_pb::AttachmentIdProto::default_instance());
#endif
}

AttachmentMetadataRecord::AttachmentMetadataRecord(const AttachmentMetadataRecord& from)
  : ::google::protobuf::MessageLite() {
  SharedCtor();
  MergeFrom(from);
}

void AttachmentMetadataRecord::SharedCtor() {
  _cached_size_ = 0;
  id_ = NULL;
  is_on_server_ = false;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

AttachmentMetadataRecord::~AttachmentMetadataRecord() {
  SharedDtor();
}

void AttachmentMetadataRecord::SharedDtor() {
  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  if (this != &default_instance()) {
  #else
  if (this != default_instance_) {
  #endif
    delete id_;
  }
}

void AttachmentMetadataRecord::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const AttachmentMetadataRecord& AttachmentMetadataRecord::default_instance() {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  protobuf_AddDesc_attachments_2eproto();
#else
  if (default_instance_ == NULL) protobuf_AddDesc_attachments_2eproto();
#endif
  return *default_instance_;
}

AttachmentMetadataRecord* AttachmentMetadataRecord::default_instance_ = NULL;

AttachmentMetadataRecord* AttachmentMetadataRecord::New() const {
  return new AttachmentMetadataRecord;
}

void AttachmentMetadataRecord::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (has_id()) {
      if (id_ != NULL) id_->::sync_pb::AttachmentIdProto::Clear();
    }
    is_on_server_ = false;
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool AttachmentMetadataRecord::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional .sync_pb.AttachmentIdProto id = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_id()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(16)) goto parse_is_on_server;
        break;
      }

      // optional bool is_on_server = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_is_on_server:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &is_on_server_)));
          set_has_is_on_server();
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

void AttachmentMetadataRecord::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // optional .sync_pb.AttachmentIdProto id = 1;
  if (has_id()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessage(
      1, this->id(), output);
  }

  // optional bool is_on_server = 2;
  if (has_is_on_server()) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(2, this->is_on_server(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormatLite::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

int AttachmentMetadataRecord::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // optional .sync_pb.AttachmentIdProto id = 1;
    if (has_id()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->id());
    }

    // optional bool is_on_server = 2;
    if (has_is_on_server()) {
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

void AttachmentMetadataRecord::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const AttachmentMetadataRecord*>(&from));
}

void AttachmentMetadataRecord::MergeFrom(const AttachmentMetadataRecord& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_id()) {
      mutable_id()->::sync_pb::AttachmentIdProto::MergeFrom(from.id());
    }
    if (from.has_is_on_server()) {
      set_is_on_server(from.is_on_server());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void AttachmentMetadataRecord::CopyFrom(const AttachmentMetadataRecord& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool AttachmentMetadataRecord::IsInitialized() const {

  return true;
}

void AttachmentMetadataRecord::Swap(AttachmentMetadataRecord* other) {
  if (other != this) {
    std::swap(id_, other->id_);
    std::swap(is_on_server_, other->is_on_server_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::std::string AttachmentMetadataRecord::GetTypeName() const {
  return "sync_pb.AttachmentMetadataRecord";
}


// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int AttachmentMetadata::kRecordFieldNumber;
#endif  // !_MSC_VER

AttachmentMetadata::AttachmentMetadata()
  : ::google::protobuf::MessageLite() {
  SharedCtor();
}

void AttachmentMetadata::InitAsDefaultInstance() {
}

AttachmentMetadata::AttachmentMetadata(const AttachmentMetadata& from)
  : ::google::protobuf::MessageLite() {
  SharedCtor();
  MergeFrom(from);
}

void AttachmentMetadata::SharedCtor() {
  _cached_size_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

AttachmentMetadata::~AttachmentMetadata() {
  SharedDtor();
}

void AttachmentMetadata::SharedDtor() {
  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  if (this != &default_instance()) {
  #else
  if (this != default_instance_) {
  #endif
  }
}

void AttachmentMetadata::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const AttachmentMetadata& AttachmentMetadata::default_instance() {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  protobuf_AddDesc_attachments_2eproto();
#else
  if (default_instance_ == NULL) protobuf_AddDesc_attachments_2eproto();
#endif
  return *default_instance_;
}

AttachmentMetadata* AttachmentMetadata::default_instance_ = NULL;

AttachmentMetadata* AttachmentMetadata::New() const {
  return new AttachmentMetadata;
}

void AttachmentMetadata::Clear() {
  record_.Clear();
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool AttachmentMetadata::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // repeated .sync_pb.AttachmentMetadataRecord record = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_record:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
                input, add_record()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(10)) goto parse_record;
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

void AttachmentMetadata::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // repeated .sync_pb.AttachmentMetadataRecord record = 1;
  for (int i = 0; i < this->record_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessage(
      1, this->record(i), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormatLite::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

int AttachmentMetadata::ByteSize() const {
  int total_size = 0;

  // repeated .sync_pb.AttachmentMetadataRecord record = 1;
  total_size += 1 * this->record_size();
  for (int i = 0; i < this->record_size(); i++) {
    total_size +=
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        this->record(i));
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

void AttachmentMetadata::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const AttachmentMetadata*>(&from));
}

void AttachmentMetadata::MergeFrom(const AttachmentMetadata& from) {
  GOOGLE_CHECK_NE(&from, this);
  record_.MergeFrom(from.record_);
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void AttachmentMetadata::CopyFrom(const AttachmentMetadata& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool AttachmentMetadata::IsInitialized() const {

  return true;
}

void AttachmentMetadata::Swap(AttachmentMetadata* other) {
  if (other != this) {
    record_.Swap(&other->record_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::std::string AttachmentMetadata::GetTypeName() const {
  return "sync_pb.AttachmentMetadata";
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace sync_pb

// @@protoc_insertion_point(global_scope)
