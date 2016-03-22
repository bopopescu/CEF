// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: experiment_status.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "experiment_status.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
// @@protoc_insertion_point(includes)

namespace sync_pb {

void protobuf_ShutdownFile_experiment_5fstatus_2eproto() {
  delete ExperimentStatusRequest::default_instance_;
  delete ExperimentStatusResponse::default_instance_;
}

#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
void protobuf_AddDesc_experiment_5fstatus_2eproto_impl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#else
void protobuf_AddDesc_experiment_5fstatus_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#endif
  ::sync_pb::protobuf_AddDesc_experiments_5fspecifics_2eproto();
  ExperimentStatusRequest::default_instance_ = new ExperimentStatusRequest();
  ExperimentStatusResponse::default_instance_ = new ExperimentStatusResponse();
  ExperimentStatusRequest::default_instance_->InitAsDefaultInstance();
  ExperimentStatusResponse::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_experiment_5fstatus_2eproto);
}

#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AddDesc_experiment_5fstatus_2eproto_once_);
void protobuf_AddDesc_experiment_5fstatus_2eproto() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AddDesc_experiment_5fstatus_2eproto_once_,
                 &protobuf_AddDesc_experiment_5fstatus_2eproto_impl);
}
#else
// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_experiment_5fstatus_2eproto {
  StaticDescriptorInitializer_experiment_5fstatus_2eproto() {
    protobuf_AddDesc_experiment_5fstatus_2eproto();
  }
} static_descriptor_initializer_experiment_5fstatus_2eproto_;
#endif

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int ExperimentStatusRequest::kExperimentNameFieldNumber;
#endif  // !_MSC_VER

ExperimentStatusRequest::ExperimentStatusRequest()
  : ::google::protobuf::MessageLite() {
  SharedCtor();
}

void ExperimentStatusRequest::InitAsDefaultInstance() {
}

ExperimentStatusRequest::ExperimentStatusRequest(const ExperimentStatusRequest& from)
  : ::google::protobuf::MessageLite() {
  SharedCtor();
  MergeFrom(from);
}

void ExperimentStatusRequest::SharedCtor() {
  _cached_size_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

ExperimentStatusRequest::~ExperimentStatusRequest() {
  SharedDtor();
}

void ExperimentStatusRequest::SharedDtor() {
  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  if (this != &default_instance()) {
  #else
  if (this != default_instance_) {
  #endif
  }
}

void ExperimentStatusRequest::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ExperimentStatusRequest& ExperimentStatusRequest::default_instance() {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  protobuf_AddDesc_experiment_5fstatus_2eproto();
#else
  if (default_instance_ == NULL) protobuf_AddDesc_experiment_5fstatus_2eproto();
#endif
  return *default_instance_;
}

ExperimentStatusRequest* ExperimentStatusRequest::default_instance_ = NULL;

ExperimentStatusRequest* ExperimentStatusRequest::New() const {
  return new ExperimentStatusRequest;
}

void ExperimentStatusRequest::Clear() {
  experiment_name_.Clear();
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

bool ExperimentStatusRequest::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // repeated string experiment_name = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_experiment_name:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->add_experiment_name()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(10)) goto parse_experiment_name;
        if (input->ExpectAtEnd()) return true;
        break;
      }

      default: {
      handle_uninterpreted:
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          return true;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag, NULL));
        break;
      }
    }
  }
  return true;
#undef DO_
}

void ExperimentStatusRequest::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // repeated string experiment_name = 1;
  for (int i = 0; i < this->experiment_name_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::WriteString(
      1, this->experiment_name(i), output);
  }

}

int ExperimentStatusRequest::ByteSize() const {
  int total_size = 0;

  // repeated string experiment_name = 1;
  total_size += 1 * this->experiment_name_size();
  for (int i = 0; i < this->experiment_name_size(); i++) {
    total_size += ::google::protobuf::internal::WireFormatLite::StringSize(
      this->experiment_name(i));
  }

  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void ExperimentStatusRequest::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const ExperimentStatusRequest*>(&from));
}

void ExperimentStatusRequest::MergeFrom(const ExperimentStatusRequest& from) {
  GOOGLE_CHECK_NE(&from, this);
  experiment_name_.MergeFrom(from.experiment_name_);
}

void ExperimentStatusRequest::CopyFrom(const ExperimentStatusRequest& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ExperimentStatusRequest::IsInitialized() const {

  return true;
}

void ExperimentStatusRequest::Swap(ExperimentStatusRequest* other) {
  if (other != this) {
    experiment_name_.Swap(&other->experiment_name_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::std::string ExperimentStatusRequest::GetTypeName() const {
  return "sync_pb.ExperimentStatusRequest";
}


// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int ExperimentStatusResponse::kPollIntervalSecondsFieldNumber;
const int ExperimentStatusResponse::kExperimentFieldNumber;
#endif  // !_MSC_VER

ExperimentStatusResponse::ExperimentStatusResponse()
  : ::google::protobuf::MessageLite() {
  SharedCtor();
}

void ExperimentStatusResponse::InitAsDefaultInstance() {
}

ExperimentStatusResponse::ExperimentStatusResponse(const ExperimentStatusResponse& from)
  : ::google::protobuf::MessageLite() {
  SharedCtor();
  MergeFrom(from);
}

void ExperimentStatusResponse::SharedCtor() {
  _cached_size_ = 0;
  poll_interval_seconds_ = 3600;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

ExperimentStatusResponse::~ExperimentStatusResponse() {
  SharedDtor();
}

void ExperimentStatusResponse::SharedDtor() {
  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  if (this != &default_instance()) {
  #else
  if (this != default_instance_) {
  #endif
  }
}

void ExperimentStatusResponse::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ExperimentStatusResponse& ExperimentStatusResponse::default_instance() {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  protobuf_AddDesc_experiment_5fstatus_2eproto();
#else
  if (default_instance_ == NULL) protobuf_AddDesc_experiment_5fstatus_2eproto();
#endif
  return *default_instance_;
}

ExperimentStatusResponse* ExperimentStatusResponse::default_instance_ = NULL;

ExperimentStatusResponse* ExperimentStatusResponse::New() const {
  return new ExperimentStatusResponse;
}

void ExperimentStatusResponse::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    poll_interval_seconds_ = 3600;
  }
  experiment_.Clear();
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

bool ExperimentStatusResponse::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional int32 poll_interval_seconds = 1 [default = 3600];
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &poll_interval_seconds_)));
          set_has_poll_interval_seconds();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(18)) goto parse_experiment;
        break;
      }

      // repeated .sync_pb.ExperimentsSpecifics experiment = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_experiment:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
                input, add_experiment()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(18)) goto parse_experiment;
        if (input->ExpectAtEnd()) return true;
        break;
      }

      default: {
      handle_uninterpreted:
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          return true;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag, NULL));
        break;
      }
    }
  }
  return true;
#undef DO_
}

void ExperimentStatusResponse::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // optional int32 poll_interval_seconds = 1 [default = 3600];
  if (has_poll_interval_seconds()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(1, this->poll_interval_seconds(), output);
  }

  // repeated .sync_pb.ExperimentsSpecifics experiment = 2;
  for (int i = 0; i < this->experiment_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessage(
      2, this->experiment(i), output);
  }

}

int ExperimentStatusResponse::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // optional int32 poll_interval_seconds = 1 [default = 3600];
    if (has_poll_interval_seconds()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->poll_interval_seconds());
    }

  }
  // repeated .sync_pb.ExperimentsSpecifics experiment = 2;
  total_size += 1 * this->experiment_size();
  for (int i = 0; i < this->experiment_size(); i++) {
    total_size +=
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        this->experiment(i));
  }

  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void ExperimentStatusResponse::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const ExperimentStatusResponse*>(&from));
}

void ExperimentStatusResponse::MergeFrom(const ExperimentStatusResponse& from) {
  GOOGLE_CHECK_NE(&from, this);
  experiment_.MergeFrom(from.experiment_);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_poll_interval_seconds()) {
      set_poll_interval_seconds(from.poll_interval_seconds());
    }
  }
}

void ExperimentStatusResponse::CopyFrom(const ExperimentStatusResponse& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ExperimentStatusResponse::IsInitialized() const {

  return true;
}

void ExperimentStatusResponse::Swap(ExperimentStatusResponse* other) {
  if (other != this) {
    std::swap(poll_interval_seconds_, other->poll_interval_seconds_);
    experiment_.Swap(&other->experiment_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::std::string ExperimentStatusResponse::GetTypeName() const {
  return "sync_pb.ExperimentStatusResponse";
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace sync_pb

// @@protoc_insertion_point(global_scope)
