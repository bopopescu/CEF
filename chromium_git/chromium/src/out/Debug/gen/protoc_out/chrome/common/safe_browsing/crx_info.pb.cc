// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: crx_info.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "crx_info.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
// @@protoc_insertion_point(includes)

namespace extensions {

void protobuf_ShutdownFile_crx_5finfo_2eproto() {
  delete ClientCRXListInfoRequest::default_instance_;
  delete ClientCRXListInfoResponse::default_instance_;
  delete ClientCRXListInfoResponse_UserMessage::default_instance_;
}

#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
void protobuf_AddDesc_crx_5finfo_2eproto_impl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#else
void protobuf_AddDesc_crx_5finfo_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#endif
  ClientCRXListInfoRequest::default_instance_ = new ClientCRXListInfoRequest();
  ClientCRXListInfoResponse::default_instance_ = new ClientCRXListInfoResponse();
  ClientCRXListInfoResponse_UserMessage::default_instance_ = new ClientCRXListInfoResponse_UserMessage();
  ClientCRXListInfoRequest::default_instance_->InitAsDefaultInstance();
  ClientCRXListInfoResponse::default_instance_->InitAsDefaultInstance();
  ClientCRXListInfoResponse_UserMessage::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_crx_5finfo_2eproto);
}

#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AddDesc_crx_5finfo_2eproto_once_);
void protobuf_AddDesc_crx_5finfo_2eproto() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AddDesc_crx_5finfo_2eproto_once_,
                 &protobuf_AddDesc_crx_5finfo_2eproto_impl);
}
#else
// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_crx_5finfo_2eproto {
  StaticDescriptorInitializer_crx_5finfo_2eproto() {
    protobuf_AddDesc_crx_5finfo_2eproto();
  }
} static_descriptor_initializer_crx_5finfo_2eproto_;
#endif

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int ClientCRXListInfoRequest::kIdFieldNumber;
const int ClientCRXListInfoRequest::kLocaleFieldNumber;
#endif  // !_MSC_VER

ClientCRXListInfoRequest::ClientCRXListInfoRequest()
  : ::google::protobuf::MessageLite() {
  SharedCtor();
}

void ClientCRXListInfoRequest::InitAsDefaultInstance() {
}

ClientCRXListInfoRequest::ClientCRXListInfoRequest(const ClientCRXListInfoRequest& from)
  : ::google::protobuf::MessageLite() {
  SharedCtor();
  MergeFrom(from);
}

void ClientCRXListInfoRequest::SharedCtor() {
  _cached_size_ = 0;
  id_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyString());
  locale_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyString());
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

ClientCRXListInfoRequest::~ClientCRXListInfoRequest() {
  SharedDtor();
}

void ClientCRXListInfoRequest::SharedDtor() {
  if (id_ != &::google::protobuf::internal::GetEmptyString()) {
    delete id_;
  }
  if (locale_ != &::google::protobuf::internal::GetEmptyString()) {
    delete locale_;
  }
  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  if (this != &default_instance()) {
  #else
  if (this != default_instance_) {
  #endif
  }
}

void ClientCRXListInfoRequest::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ClientCRXListInfoRequest& ClientCRXListInfoRequest::default_instance() {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  protobuf_AddDesc_crx_5finfo_2eproto();
#else
  if (default_instance_ == NULL) protobuf_AddDesc_crx_5finfo_2eproto();
#endif
  return *default_instance_;
}

ClientCRXListInfoRequest* ClientCRXListInfoRequest::default_instance_ = NULL;

ClientCRXListInfoRequest* ClientCRXListInfoRequest::New() const {
  return new ClientCRXListInfoRequest;
}

void ClientCRXListInfoRequest::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (has_id()) {
      if (id_ != &::google::protobuf::internal::GetEmptyString()) {
        id_->clear();
      }
    }
    if (has_locale()) {
      if (locale_ != &::google::protobuf::internal::GetEmptyString()) {
        locale_->clear();
      }
    }
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

bool ClientCRXListInfoRequest::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required string id = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_id()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(18)) goto parse_locale;
        break;
      }

      // optional string locale = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_locale:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_locale()));
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

void ClientCRXListInfoRequest::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // required string id = 1;
  if (has_id()) {
    ::google::protobuf::internal::WireFormatLite::WriteString(
      1, this->id(), output);
  }

  // optional string locale = 2;
  if (has_locale()) {
    ::google::protobuf::internal::WireFormatLite::WriteString(
      2, this->locale(), output);
  }

}

int ClientCRXListInfoRequest::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required string id = 1;
    if (has_id()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->id());
    }

    // optional string locale = 2;
    if (has_locale()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->locale());
    }

  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void ClientCRXListInfoRequest::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const ClientCRXListInfoRequest*>(&from));
}

void ClientCRXListInfoRequest::MergeFrom(const ClientCRXListInfoRequest& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_id()) {
      set_id(from.id());
    }
    if (from.has_locale()) {
      set_locale(from.locale());
    }
  }
}

void ClientCRXListInfoRequest::CopyFrom(const ClientCRXListInfoRequest& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ClientCRXListInfoRequest::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000001) != 0x00000001) return false;

  return true;
}

void ClientCRXListInfoRequest::Swap(ClientCRXListInfoRequest* other) {
  if (other != this) {
    std::swap(id_, other->id_);
    std::swap(locale_, other->locale_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::std::string ClientCRXListInfoRequest::GetTypeName() const {
  return "extensions.ClientCRXListInfoRequest";
}


// ===================================================================

bool ClientCRXListInfoResponse_Verdict_IsValid(int value) {
  switch(value) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
      return true;
    default:
      return false;
  }
}

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const ClientCRXListInfoResponse_Verdict ClientCRXListInfoResponse::NOT_IN_BLACKLIST;
const ClientCRXListInfoResponse_Verdict ClientCRXListInfoResponse::MALWARE;
const ClientCRXListInfoResponse_Verdict ClientCRXListInfoResponse::SECURITY_VULNERABILITY;
const ClientCRXListInfoResponse_Verdict ClientCRXListInfoResponse::CWS_POLICY_VIOLATION;
const ClientCRXListInfoResponse_Verdict ClientCRXListInfoResponse::POTENTIALLY_UNWANTED;
const ClientCRXListInfoResponse_Verdict ClientCRXListInfoResponse::Verdict_MIN;
const ClientCRXListInfoResponse_Verdict ClientCRXListInfoResponse::Verdict_MAX;
const int ClientCRXListInfoResponse::Verdict_ARRAYSIZE;
#endif  // _MSC_VER
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int ClientCRXListInfoResponse_UserMessage::kDetailMessageFieldNumber;
#endif  // !_MSC_VER

ClientCRXListInfoResponse_UserMessage::ClientCRXListInfoResponse_UserMessage()
  : ::google::protobuf::MessageLite() {
  SharedCtor();
}

void ClientCRXListInfoResponse_UserMessage::InitAsDefaultInstance() {
}

ClientCRXListInfoResponse_UserMessage::ClientCRXListInfoResponse_UserMessage(const ClientCRXListInfoResponse_UserMessage& from)
  : ::google::protobuf::MessageLite() {
  SharedCtor();
  MergeFrom(from);
}

void ClientCRXListInfoResponse_UserMessage::SharedCtor() {
  _cached_size_ = 0;
  detail_message_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyString());
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

ClientCRXListInfoResponse_UserMessage::~ClientCRXListInfoResponse_UserMessage() {
  SharedDtor();
}

void ClientCRXListInfoResponse_UserMessage::SharedDtor() {
  if (detail_message_ != &::google::protobuf::internal::GetEmptyString()) {
    delete detail_message_;
  }
  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  if (this != &default_instance()) {
  #else
  if (this != default_instance_) {
  #endif
  }
}

void ClientCRXListInfoResponse_UserMessage::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ClientCRXListInfoResponse_UserMessage& ClientCRXListInfoResponse_UserMessage::default_instance() {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  protobuf_AddDesc_crx_5finfo_2eproto();
#else
  if (default_instance_ == NULL) protobuf_AddDesc_crx_5finfo_2eproto();
#endif
  return *default_instance_;
}

ClientCRXListInfoResponse_UserMessage* ClientCRXListInfoResponse_UserMessage::default_instance_ = NULL;

ClientCRXListInfoResponse_UserMessage* ClientCRXListInfoResponse_UserMessage::New() const {
  return new ClientCRXListInfoResponse_UserMessage;
}

void ClientCRXListInfoResponse_UserMessage::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (has_detail_message()) {
      if (detail_message_ != &::google::protobuf::internal::GetEmptyString()) {
        detail_message_->clear();
      }
    }
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

bool ClientCRXListInfoResponse_UserMessage::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional string detail_message = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_detail_message()));
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

void ClientCRXListInfoResponse_UserMessage::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // optional string detail_message = 1;
  if (has_detail_message()) {
    ::google::protobuf::internal::WireFormatLite::WriteString(
      1, this->detail_message(), output);
  }

}

int ClientCRXListInfoResponse_UserMessage::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // optional string detail_message = 1;
    if (has_detail_message()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->detail_message());
    }

  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void ClientCRXListInfoResponse_UserMessage::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const ClientCRXListInfoResponse_UserMessage*>(&from));
}

void ClientCRXListInfoResponse_UserMessage::MergeFrom(const ClientCRXListInfoResponse_UserMessage& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_detail_message()) {
      set_detail_message(from.detail_message());
    }
  }
}

void ClientCRXListInfoResponse_UserMessage::CopyFrom(const ClientCRXListInfoResponse_UserMessage& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ClientCRXListInfoResponse_UserMessage::IsInitialized() const {

  return true;
}

void ClientCRXListInfoResponse_UserMessage::Swap(ClientCRXListInfoResponse_UserMessage* other) {
  if (other != this) {
    std::swap(detail_message_, other->detail_message_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::std::string ClientCRXListInfoResponse_UserMessage::GetTypeName() const {
  return "extensions.ClientCRXListInfoResponse.UserMessage";
}


// -------------------------------------------------------------------

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int ClientCRXListInfoResponse::kVerdictFieldNumber;
const int ClientCRXListInfoResponse::kUserMessageFieldNumber;
#endif  // !_MSC_VER

ClientCRXListInfoResponse::ClientCRXListInfoResponse()
  : ::google::protobuf::MessageLite() {
  SharedCtor();
}

void ClientCRXListInfoResponse::InitAsDefaultInstance() {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  user_message_ = const_cast< ::extensions::ClientCRXListInfoResponse_UserMessage*>(
      ::extensions::ClientCRXListInfoResponse_UserMessage::internal_default_instance());
#else
  user_message_ = const_cast< ::extensions::ClientCRXListInfoResponse_UserMessage*>(&::extensions::ClientCRXListInfoResponse_UserMessage::default_instance());
#endif
}

ClientCRXListInfoResponse::ClientCRXListInfoResponse(const ClientCRXListInfoResponse& from)
  : ::google::protobuf::MessageLite() {
  SharedCtor();
  MergeFrom(from);
}

void ClientCRXListInfoResponse::SharedCtor() {
  _cached_size_ = 0;
  verdict_ = 0;
  user_message_ = NULL;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

ClientCRXListInfoResponse::~ClientCRXListInfoResponse() {
  SharedDtor();
}

void ClientCRXListInfoResponse::SharedDtor() {
  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  if (this != &default_instance()) {
  #else
  if (this != default_instance_) {
  #endif
    delete user_message_;
  }
}

void ClientCRXListInfoResponse::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ClientCRXListInfoResponse& ClientCRXListInfoResponse::default_instance() {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  protobuf_AddDesc_crx_5finfo_2eproto();
#else
  if (default_instance_ == NULL) protobuf_AddDesc_crx_5finfo_2eproto();
#endif
  return *default_instance_;
}

ClientCRXListInfoResponse* ClientCRXListInfoResponse::default_instance_ = NULL;

ClientCRXListInfoResponse* ClientCRXListInfoResponse::New() const {
  return new ClientCRXListInfoResponse;
}

void ClientCRXListInfoResponse::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    verdict_ = 0;
    if (has_user_message()) {
      if (user_message_ != NULL) user_message_->::extensions::ClientCRXListInfoResponse_UserMessage::Clear();
    }
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

bool ClientCRXListInfoResponse::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional .extensions.ClientCRXListInfoResponse.Verdict verdict = 1 [default = NOT_IN_BLACKLIST];
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          if (::extensions::ClientCRXListInfoResponse_Verdict_IsValid(value)) {
            set_verdict(static_cast< ::extensions::ClientCRXListInfoResponse_Verdict >(value));
          }
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(18)) goto parse_user_message;
        break;
      }

      // optional .extensions.ClientCRXListInfoResponse.UserMessage user_message = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_user_message:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_user_message()));
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

void ClientCRXListInfoResponse::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // optional .extensions.ClientCRXListInfoResponse.Verdict verdict = 1 [default = NOT_IN_BLACKLIST];
  if (has_verdict()) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      1, this->verdict(), output);
  }

  // optional .extensions.ClientCRXListInfoResponse.UserMessage user_message = 2;
  if (has_user_message()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessage(
      2, this->user_message(), output);
  }

}

int ClientCRXListInfoResponse::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // optional .extensions.ClientCRXListInfoResponse.Verdict verdict = 1 [default = NOT_IN_BLACKLIST];
    if (has_verdict()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::EnumSize(this->verdict());
    }

    // optional .extensions.ClientCRXListInfoResponse.UserMessage user_message = 2;
    if (has_user_message()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->user_message());
    }

  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void ClientCRXListInfoResponse::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const ClientCRXListInfoResponse*>(&from));
}

void ClientCRXListInfoResponse::MergeFrom(const ClientCRXListInfoResponse& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_verdict()) {
      set_verdict(from.verdict());
    }
    if (from.has_user_message()) {
      mutable_user_message()->::extensions::ClientCRXListInfoResponse_UserMessage::MergeFrom(from.user_message());
    }
  }
}

void ClientCRXListInfoResponse::CopyFrom(const ClientCRXListInfoResponse& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ClientCRXListInfoResponse::IsInitialized() const {

  return true;
}

void ClientCRXListInfoResponse::Swap(ClientCRXListInfoResponse* other) {
  if (other != this) {
    std::swap(verdict_, other->verdict_);
    std::swap(user_message_, other->user_message_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::std::string ClientCRXListInfoResponse::GetTypeName() const {
  return "extensions.ClientCRXListInfoResponse";
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace extensions

// @@protoc_insertion_point(global_scope)
