// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: google_streaming_api.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "google_streaming_api.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
// @@protoc_insertion_point(includes)

namespace content {
namespace proto {

void protobuf_ShutdownFile_google_5fstreaming_5fapi_2eproto() {
  delete SpeechRecognitionEvent::default_instance_;
  delete SpeechRecognitionResult::default_instance_;
  delete SpeechRecognitionAlternative::default_instance_;
}

#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
void protobuf_AddDesc_google_5fstreaming_5fapi_2eproto_impl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#else
void protobuf_AddDesc_google_5fstreaming_5fapi_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#endif
  SpeechRecognitionEvent::default_instance_ = new SpeechRecognitionEvent();
  SpeechRecognitionResult::default_instance_ = new SpeechRecognitionResult();
  SpeechRecognitionAlternative::default_instance_ = new SpeechRecognitionAlternative();
  SpeechRecognitionEvent::default_instance_->InitAsDefaultInstance();
  SpeechRecognitionResult::default_instance_->InitAsDefaultInstance();
  SpeechRecognitionAlternative::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_google_5fstreaming_5fapi_2eproto);
}

#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AddDesc_google_5fstreaming_5fapi_2eproto_once_);
void protobuf_AddDesc_google_5fstreaming_5fapi_2eproto() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AddDesc_google_5fstreaming_5fapi_2eproto_once_,
                 &protobuf_AddDesc_google_5fstreaming_5fapi_2eproto_impl);
}
#else
// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_google_5fstreaming_5fapi_2eproto {
  StaticDescriptorInitializer_google_5fstreaming_5fapi_2eproto() {
    protobuf_AddDesc_google_5fstreaming_5fapi_2eproto();
  }
} static_descriptor_initializer_google_5fstreaming_5fapi_2eproto_;
#endif

// ===================================================================

bool SpeechRecognitionEvent_StatusCode_IsValid(int value) {
  switch(value) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
      return true;
    default:
      return false;
  }
}

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const SpeechRecognitionEvent_StatusCode SpeechRecognitionEvent::STATUS_SUCCESS;
const SpeechRecognitionEvent_StatusCode SpeechRecognitionEvent::STATUS_NO_SPEECH;
const SpeechRecognitionEvent_StatusCode SpeechRecognitionEvent::STATUS_ABORTED;
const SpeechRecognitionEvent_StatusCode SpeechRecognitionEvent::STATUS_AUDIO_CAPTURE;
const SpeechRecognitionEvent_StatusCode SpeechRecognitionEvent::STATUS_NETWORK;
const SpeechRecognitionEvent_StatusCode SpeechRecognitionEvent::STATUS_NOT_ALLOWED;
const SpeechRecognitionEvent_StatusCode SpeechRecognitionEvent::STATUS_SERVICE_NOT_ALLOWED;
const SpeechRecognitionEvent_StatusCode SpeechRecognitionEvent::STATUS_BAD_GRAMMAR;
const SpeechRecognitionEvent_StatusCode SpeechRecognitionEvent::STATUS_LANGUAGE_NOT_SUPPORTED;
const SpeechRecognitionEvent_StatusCode SpeechRecognitionEvent::StatusCode_MIN;
const SpeechRecognitionEvent_StatusCode SpeechRecognitionEvent::StatusCode_MAX;
const int SpeechRecognitionEvent::StatusCode_ARRAYSIZE;
#endif  // _MSC_VER
bool SpeechRecognitionEvent_EndpointerEventType_IsValid(int value) {
  switch(value) {
    case 0:
    case 1:
    case 2:
    case 3:
      return true;
    default:
      return false;
  }
}

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const SpeechRecognitionEvent_EndpointerEventType SpeechRecognitionEvent::START_OF_SPEECH;
const SpeechRecognitionEvent_EndpointerEventType SpeechRecognitionEvent::END_OF_SPEECH;
const SpeechRecognitionEvent_EndpointerEventType SpeechRecognitionEvent::END_OF_AUDIO;
const SpeechRecognitionEvent_EndpointerEventType SpeechRecognitionEvent::END_OF_UTTERANCE;
const SpeechRecognitionEvent_EndpointerEventType SpeechRecognitionEvent::EndpointerEventType_MIN;
const SpeechRecognitionEvent_EndpointerEventType SpeechRecognitionEvent::EndpointerEventType_MAX;
const int SpeechRecognitionEvent::EndpointerEventType_ARRAYSIZE;
#endif  // _MSC_VER
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int SpeechRecognitionEvent::kStatusFieldNumber;
const int SpeechRecognitionEvent::kResultFieldNumber;
const int SpeechRecognitionEvent::kEndpointFieldNumber;
#endif  // !_MSC_VER

SpeechRecognitionEvent::SpeechRecognitionEvent()
  : ::google::protobuf::MessageLite() {
  SharedCtor();
}

void SpeechRecognitionEvent::InitAsDefaultInstance() {
}

SpeechRecognitionEvent::SpeechRecognitionEvent(const SpeechRecognitionEvent& from)
  : ::google::protobuf::MessageLite() {
  SharedCtor();
  MergeFrom(from);
}

void SpeechRecognitionEvent::SharedCtor() {
  _cached_size_ = 0;
  status_ = 0;
  endpoint_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

SpeechRecognitionEvent::~SpeechRecognitionEvent() {
  SharedDtor();
}

void SpeechRecognitionEvent::SharedDtor() {
  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  if (this != &default_instance()) {
  #else
  if (this != default_instance_) {
  #endif
  }
}

void SpeechRecognitionEvent::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const SpeechRecognitionEvent& SpeechRecognitionEvent::default_instance() {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  protobuf_AddDesc_google_5fstreaming_5fapi_2eproto();
#else
  if (default_instance_ == NULL) protobuf_AddDesc_google_5fstreaming_5fapi_2eproto();
#endif
  return *default_instance_;
}

SpeechRecognitionEvent* SpeechRecognitionEvent::default_instance_ = NULL;

SpeechRecognitionEvent* SpeechRecognitionEvent::New() const {
  return new SpeechRecognitionEvent;
}

void SpeechRecognitionEvent::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    status_ = 0;
    endpoint_ = 0;
  }
  result_.Clear();
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

bool SpeechRecognitionEvent::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional .content.proto.SpeechRecognitionEvent.StatusCode status = 1 [default = STATUS_SUCCESS];
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          if (::content::proto::SpeechRecognitionEvent_StatusCode_IsValid(value)) {
            set_status(static_cast< ::content::proto::SpeechRecognitionEvent_StatusCode >(value));
          }
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(18)) goto parse_result;
        break;
      }

      // repeated .content.proto.SpeechRecognitionResult result = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_result:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
                input, add_result()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(18)) goto parse_result;
        if (input->ExpectTag(32)) goto parse_endpoint;
        break;
      }

      // optional .content.proto.SpeechRecognitionEvent.EndpointerEventType endpoint = 4;
      case 4: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_endpoint:
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          if (::content::proto::SpeechRecognitionEvent_EndpointerEventType_IsValid(value)) {
            set_endpoint(static_cast< ::content::proto::SpeechRecognitionEvent_EndpointerEventType >(value));
          }
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
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag, NULL));
        break;
      }
    }
  }
  return true;
#undef DO_
}

void SpeechRecognitionEvent::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // optional .content.proto.SpeechRecognitionEvent.StatusCode status = 1 [default = STATUS_SUCCESS];
  if (has_status()) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      1, this->status(), output);
  }

  // repeated .content.proto.SpeechRecognitionResult result = 2;
  for (int i = 0; i < this->result_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessage(
      2, this->result(i), output);
  }

  // optional .content.proto.SpeechRecognitionEvent.EndpointerEventType endpoint = 4;
  if (has_endpoint()) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      4, this->endpoint(), output);
  }

}

int SpeechRecognitionEvent::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // optional .content.proto.SpeechRecognitionEvent.StatusCode status = 1 [default = STATUS_SUCCESS];
    if (has_status()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::EnumSize(this->status());
    }

    // optional .content.proto.SpeechRecognitionEvent.EndpointerEventType endpoint = 4;
    if (has_endpoint()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::EnumSize(this->endpoint());
    }

  }
  // repeated .content.proto.SpeechRecognitionResult result = 2;
  total_size += 1 * this->result_size();
  for (int i = 0; i < this->result_size(); i++) {
    total_size +=
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        this->result(i));
  }

  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void SpeechRecognitionEvent::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const SpeechRecognitionEvent*>(&from));
}

void SpeechRecognitionEvent::MergeFrom(const SpeechRecognitionEvent& from) {
  GOOGLE_CHECK_NE(&from, this);
  result_.MergeFrom(from.result_);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_status()) {
      set_status(from.status());
    }
    if (from.has_endpoint()) {
      set_endpoint(from.endpoint());
    }
  }
}

void SpeechRecognitionEvent::CopyFrom(const SpeechRecognitionEvent& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool SpeechRecognitionEvent::IsInitialized() const {

  return true;
}

void SpeechRecognitionEvent::Swap(SpeechRecognitionEvent* other) {
  if (other != this) {
    std::swap(status_, other->status_);
    result_.Swap(&other->result_);
    std::swap(endpoint_, other->endpoint_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::std::string SpeechRecognitionEvent::GetTypeName() const {
  return "content.proto.SpeechRecognitionEvent";
}


// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int SpeechRecognitionResult::kAlternativeFieldNumber;
const int SpeechRecognitionResult::kFinalFieldNumber;
const int SpeechRecognitionResult::kStabilityFieldNumber;
#endif  // !_MSC_VER

SpeechRecognitionResult::SpeechRecognitionResult()
  : ::google::protobuf::MessageLite() {
  SharedCtor();
}

void SpeechRecognitionResult::InitAsDefaultInstance() {
}

SpeechRecognitionResult::SpeechRecognitionResult(const SpeechRecognitionResult& from)
  : ::google::protobuf::MessageLite() {
  SharedCtor();
  MergeFrom(from);
}

void SpeechRecognitionResult::SharedCtor() {
  _cached_size_ = 0;
  final_ = false;
  stability_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

SpeechRecognitionResult::~SpeechRecognitionResult() {
  SharedDtor();
}

void SpeechRecognitionResult::SharedDtor() {
  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  if (this != &default_instance()) {
  #else
  if (this != default_instance_) {
  #endif
  }
}

void SpeechRecognitionResult::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const SpeechRecognitionResult& SpeechRecognitionResult::default_instance() {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  protobuf_AddDesc_google_5fstreaming_5fapi_2eproto();
#else
  if (default_instance_ == NULL) protobuf_AddDesc_google_5fstreaming_5fapi_2eproto();
#endif
  return *default_instance_;
}

SpeechRecognitionResult* SpeechRecognitionResult::default_instance_ = NULL;

SpeechRecognitionResult* SpeechRecognitionResult::New() const {
  return new SpeechRecognitionResult;
}

void SpeechRecognitionResult::Clear() {
  if (_has_bits_[1 / 32] & (0xffu << (1 % 32))) {
    final_ = false;
    stability_ = 0;
  }
  alternative_.Clear();
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

bool SpeechRecognitionResult::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // repeated .content.proto.SpeechRecognitionAlternative alternative = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_alternative:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
                input, add_alternative()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(10)) goto parse_alternative;
        if (input->ExpectTag(16)) goto parse_final;
        break;
      }

      // optional bool final = 2 [default = false];
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_final:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &final_)));
          set_has_final();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(29)) goto parse_stability;
        break;
      }

      // optional float stability = 3;
      case 3: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_FIXED32) {
         parse_stability:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   float, ::google::protobuf::internal::WireFormatLite::TYPE_FLOAT>(
                 input, &stability_)));
          set_has_stability();
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
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag, NULL));
        break;
      }
    }
  }
  return true;
#undef DO_
}

void SpeechRecognitionResult::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // repeated .content.proto.SpeechRecognitionAlternative alternative = 1;
  for (int i = 0; i < this->alternative_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessage(
      1, this->alternative(i), output);
  }

  // optional bool final = 2 [default = false];
  if (has_final()) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(2, this->final(), output);
  }

  // optional float stability = 3;
  if (has_stability()) {
    ::google::protobuf::internal::WireFormatLite::WriteFloat(3, this->stability(), output);
  }

}

int SpeechRecognitionResult::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[1 / 32] & (0xffu << (1 % 32))) {
    // optional bool final = 2 [default = false];
    if (has_final()) {
      total_size += 1 + 1;
    }

    // optional float stability = 3;
    if (has_stability()) {
      total_size += 1 + 4;
    }

  }
  // repeated .content.proto.SpeechRecognitionAlternative alternative = 1;
  total_size += 1 * this->alternative_size();
  for (int i = 0; i < this->alternative_size(); i++) {
    total_size +=
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        this->alternative(i));
  }

  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void SpeechRecognitionResult::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const SpeechRecognitionResult*>(&from));
}

void SpeechRecognitionResult::MergeFrom(const SpeechRecognitionResult& from) {
  GOOGLE_CHECK_NE(&from, this);
  alternative_.MergeFrom(from.alternative_);
  if (from._has_bits_[1 / 32] & (0xffu << (1 % 32))) {
    if (from.has_final()) {
      set_final(from.final());
    }
    if (from.has_stability()) {
      set_stability(from.stability());
    }
  }
}

void SpeechRecognitionResult::CopyFrom(const SpeechRecognitionResult& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool SpeechRecognitionResult::IsInitialized() const {

  return true;
}

void SpeechRecognitionResult::Swap(SpeechRecognitionResult* other) {
  if (other != this) {
    alternative_.Swap(&other->alternative_);
    std::swap(final_, other->final_);
    std::swap(stability_, other->stability_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::std::string SpeechRecognitionResult::GetTypeName() const {
  return "content.proto.SpeechRecognitionResult";
}


// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int SpeechRecognitionAlternative::kTranscriptFieldNumber;
const int SpeechRecognitionAlternative::kConfidenceFieldNumber;
#endif  // !_MSC_VER

SpeechRecognitionAlternative::SpeechRecognitionAlternative()
  : ::google::protobuf::MessageLite() {
  SharedCtor();
}

void SpeechRecognitionAlternative::InitAsDefaultInstance() {
}

SpeechRecognitionAlternative::SpeechRecognitionAlternative(const SpeechRecognitionAlternative& from)
  : ::google::protobuf::MessageLite() {
  SharedCtor();
  MergeFrom(from);
}

void SpeechRecognitionAlternative::SharedCtor() {
  _cached_size_ = 0;
  transcript_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyString());
  confidence_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

SpeechRecognitionAlternative::~SpeechRecognitionAlternative() {
  SharedDtor();
}

void SpeechRecognitionAlternative::SharedDtor() {
  if (transcript_ != &::google::protobuf::internal::GetEmptyString()) {
    delete transcript_;
  }
  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  if (this != &default_instance()) {
  #else
  if (this != default_instance_) {
  #endif
  }
}

void SpeechRecognitionAlternative::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const SpeechRecognitionAlternative& SpeechRecognitionAlternative::default_instance() {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  protobuf_AddDesc_google_5fstreaming_5fapi_2eproto();
#else
  if (default_instance_ == NULL) protobuf_AddDesc_google_5fstreaming_5fapi_2eproto();
#endif
  return *default_instance_;
}

SpeechRecognitionAlternative* SpeechRecognitionAlternative::default_instance_ = NULL;

SpeechRecognitionAlternative* SpeechRecognitionAlternative::New() const {
  return new SpeechRecognitionAlternative;
}

void SpeechRecognitionAlternative::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (has_transcript()) {
      if (transcript_ != &::google::protobuf::internal::GetEmptyString()) {
        transcript_->clear();
      }
    }
    confidence_ = 0;
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

bool SpeechRecognitionAlternative::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional string transcript = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_transcript()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(21)) goto parse_confidence;
        break;
      }

      // optional float confidence = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_FIXED32) {
         parse_confidence:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   float, ::google::protobuf::internal::WireFormatLite::TYPE_FLOAT>(
                 input, &confidence_)));
          set_has_confidence();
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
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag, NULL));
        break;
      }
    }
  }
  return true;
#undef DO_
}

void SpeechRecognitionAlternative::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // optional string transcript = 1;
  if (has_transcript()) {
    ::google::protobuf::internal::WireFormatLite::WriteString(
      1, this->transcript(), output);
  }

  // optional float confidence = 2;
  if (has_confidence()) {
    ::google::protobuf::internal::WireFormatLite::WriteFloat(2, this->confidence(), output);
  }

}

int SpeechRecognitionAlternative::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // optional string transcript = 1;
    if (has_transcript()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->transcript());
    }

    // optional float confidence = 2;
    if (has_confidence()) {
      total_size += 1 + 4;
    }

  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void SpeechRecognitionAlternative::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const SpeechRecognitionAlternative*>(&from));
}

void SpeechRecognitionAlternative::MergeFrom(const SpeechRecognitionAlternative& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_transcript()) {
      set_transcript(from.transcript());
    }
    if (from.has_confidence()) {
      set_confidence(from.confidence());
    }
  }
}

void SpeechRecognitionAlternative::CopyFrom(const SpeechRecognitionAlternative& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool SpeechRecognitionAlternative::IsInitialized() const {

  return true;
}

void SpeechRecognitionAlternative::Swap(SpeechRecognitionAlternative* other) {
  if (other != this) {
    std::swap(transcript_, other->transcript_);
    std::swap(confidence_, other->confidence_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::std::string SpeechRecognitionAlternative::GetTypeName() const {
  return "content.proto.SpeechRecognitionAlternative";
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace proto
}  // namespace content

// @@protoc_insertion_point(global_scope)
