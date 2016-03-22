// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: client_model.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "client_model.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
// @@protoc_insertion_point(includes)

namespace safe_browsing {

void protobuf_ShutdownFile_client_5fmodel_2eproto() {
  delete ClientSideModel::default_instance_;
  delete ClientSideModel_Rule::default_instance_;
  delete ClientSideModel_IPSubnet::default_instance_;
}

#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
void protobuf_AddDesc_client_5fmodel_2eproto_impl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#else
void protobuf_AddDesc_client_5fmodel_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#endif
  ClientSideModel::default_instance_ = new ClientSideModel();
  ClientSideModel_Rule::default_instance_ = new ClientSideModel_Rule();
  ClientSideModel_IPSubnet::default_instance_ = new ClientSideModel_IPSubnet();
  ClientSideModel::default_instance_->InitAsDefaultInstance();
  ClientSideModel_Rule::default_instance_->InitAsDefaultInstance();
  ClientSideModel_IPSubnet::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_client_5fmodel_2eproto);
}

#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AddDesc_client_5fmodel_2eproto_once_);
void protobuf_AddDesc_client_5fmodel_2eproto() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AddDesc_client_5fmodel_2eproto_once_,
                 &protobuf_AddDesc_client_5fmodel_2eproto_impl);
}
#else
// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_client_5fmodel_2eproto {
  StaticDescriptorInitializer_client_5fmodel_2eproto() {
    protobuf_AddDesc_client_5fmodel_2eproto();
  }
} static_descriptor_initializer_client_5fmodel_2eproto_;
#endif

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int ClientSideModel_Rule::kFeatureFieldNumber;
const int ClientSideModel_Rule::kWeightFieldNumber;
#endif  // !_MSC_VER

ClientSideModel_Rule::ClientSideModel_Rule()
  : ::google::protobuf::MessageLite() {
  SharedCtor();
}

void ClientSideModel_Rule::InitAsDefaultInstance() {
}

ClientSideModel_Rule::ClientSideModel_Rule(const ClientSideModel_Rule& from)
  : ::google::protobuf::MessageLite() {
  SharedCtor();
  MergeFrom(from);
}

void ClientSideModel_Rule::SharedCtor() {
  _cached_size_ = 0;
  weight_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

ClientSideModel_Rule::~ClientSideModel_Rule() {
  SharedDtor();
}

void ClientSideModel_Rule::SharedDtor() {
  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  if (this != &default_instance()) {
  #else
  if (this != default_instance_) {
  #endif
  }
}

void ClientSideModel_Rule::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ClientSideModel_Rule& ClientSideModel_Rule::default_instance() {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  protobuf_AddDesc_client_5fmodel_2eproto();
#else
  if (default_instance_ == NULL) protobuf_AddDesc_client_5fmodel_2eproto();
#endif
  return *default_instance_;
}

ClientSideModel_Rule* ClientSideModel_Rule::default_instance_ = NULL;

ClientSideModel_Rule* ClientSideModel_Rule::New() const {
  return new ClientSideModel_Rule;
}

void ClientSideModel_Rule::Clear() {
  if (_has_bits_[1 / 32] & (0xffu << (1 % 32))) {
    weight_ = 0;
  }
  feature_.Clear();
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

bool ClientSideModel_Rule::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // repeated int32 feature = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_feature:
          DO_((::google::protobuf::internal::WireFormatLite::ReadRepeatedPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 1, 8, input, this->mutable_feature())));
        } else if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag)
                   == ::google::protobuf::internal::WireFormatLite::
                      WIRETYPE_LENGTH_DELIMITED) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPackedPrimitiveNoInline<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, this->mutable_feature())));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(8)) goto parse_feature;
        if (input->ExpectTag(21)) goto parse_weight;
        break;
      }

      // required float weight = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_FIXED32) {
         parse_weight:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   float, ::google::protobuf::internal::WireFormatLite::TYPE_FLOAT>(
                 input, &weight_)));
          set_has_weight();
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

void ClientSideModel_Rule::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // repeated int32 feature = 1;
  for (int i = 0; i < this->feature_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(
      1, this->feature(i), output);
  }

  // required float weight = 2;
  if (has_weight()) {
    ::google::protobuf::internal::WireFormatLite::WriteFloat(2, this->weight(), output);
  }

}

int ClientSideModel_Rule::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[1 / 32] & (0xffu << (1 % 32))) {
    // required float weight = 2;
    if (has_weight()) {
      total_size += 1 + 4;
    }

  }
  // repeated int32 feature = 1;
  {
    int data_size = 0;
    for (int i = 0; i < this->feature_size(); i++) {
      data_size += ::google::protobuf::internal::WireFormatLite::
        Int32Size(this->feature(i));
    }
    total_size += 1 * this->feature_size() + data_size;
  }

  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void ClientSideModel_Rule::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const ClientSideModel_Rule*>(&from));
}

void ClientSideModel_Rule::MergeFrom(const ClientSideModel_Rule& from) {
  GOOGLE_CHECK_NE(&from, this);
  feature_.MergeFrom(from.feature_);
  if (from._has_bits_[1 / 32] & (0xffu << (1 % 32))) {
    if (from.has_weight()) {
      set_weight(from.weight());
    }
  }
}

void ClientSideModel_Rule::CopyFrom(const ClientSideModel_Rule& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ClientSideModel_Rule::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000002) != 0x00000002) return false;

  return true;
}

void ClientSideModel_Rule::Swap(ClientSideModel_Rule* other) {
  if (other != this) {
    feature_.Swap(&other->feature_);
    std::swap(weight_, other->weight_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::std::string ClientSideModel_Rule::GetTypeName() const {
  return "safe_browsing.ClientSideModel.Rule";
}


// -------------------------------------------------------------------

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int ClientSideModel_IPSubnet::kPrefixFieldNumber;
const int ClientSideModel_IPSubnet::kSizeFieldNumber;
#endif  // !_MSC_VER

ClientSideModel_IPSubnet::ClientSideModel_IPSubnet()
  : ::google::protobuf::MessageLite() {
  SharedCtor();
}

void ClientSideModel_IPSubnet::InitAsDefaultInstance() {
}

ClientSideModel_IPSubnet::ClientSideModel_IPSubnet(const ClientSideModel_IPSubnet& from)
  : ::google::protobuf::MessageLite() {
  SharedCtor();
  MergeFrom(from);
}

void ClientSideModel_IPSubnet::SharedCtor() {
  _cached_size_ = 0;
  prefix_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyString());
  size_ = 128;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

ClientSideModel_IPSubnet::~ClientSideModel_IPSubnet() {
  SharedDtor();
}

void ClientSideModel_IPSubnet::SharedDtor() {
  if (prefix_ != &::google::protobuf::internal::GetEmptyString()) {
    delete prefix_;
  }
  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  if (this != &default_instance()) {
  #else
  if (this != default_instance_) {
  #endif
  }
}

void ClientSideModel_IPSubnet::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ClientSideModel_IPSubnet& ClientSideModel_IPSubnet::default_instance() {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  protobuf_AddDesc_client_5fmodel_2eproto();
#else
  if (default_instance_ == NULL) protobuf_AddDesc_client_5fmodel_2eproto();
#endif
  return *default_instance_;
}

ClientSideModel_IPSubnet* ClientSideModel_IPSubnet::default_instance_ = NULL;

ClientSideModel_IPSubnet* ClientSideModel_IPSubnet::New() const {
  return new ClientSideModel_IPSubnet;
}

void ClientSideModel_IPSubnet::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (has_prefix()) {
      if (prefix_ != &::google::protobuf::internal::GetEmptyString()) {
        prefix_->clear();
      }
    }
    size_ = 128;
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

bool ClientSideModel_IPSubnet::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required bytes prefix = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadBytes(
                input, this->mutable_prefix()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(16)) goto parse_size;
        break;
      }

      // optional int32 size = 2 [default = 128];
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_size:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &size_)));
          set_has_size();
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

void ClientSideModel_IPSubnet::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // required bytes prefix = 1;
  if (has_prefix()) {
    ::google::protobuf::internal::WireFormatLite::WriteBytes(
      1, this->prefix(), output);
  }

  // optional int32 size = 2 [default = 128];
  if (has_size()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(2, this->size(), output);
  }

}

int ClientSideModel_IPSubnet::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required bytes prefix = 1;
    if (has_prefix()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::BytesSize(
          this->prefix());
    }

    // optional int32 size = 2 [default = 128];
    if (has_size()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->size());
    }

  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void ClientSideModel_IPSubnet::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const ClientSideModel_IPSubnet*>(&from));
}

void ClientSideModel_IPSubnet::MergeFrom(const ClientSideModel_IPSubnet& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_prefix()) {
      set_prefix(from.prefix());
    }
    if (from.has_size()) {
      set_size(from.size());
    }
  }
}

void ClientSideModel_IPSubnet::CopyFrom(const ClientSideModel_IPSubnet& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ClientSideModel_IPSubnet::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000001) != 0x00000001) return false;

  return true;
}

void ClientSideModel_IPSubnet::Swap(ClientSideModel_IPSubnet* other) {
  if (other != this) {
    std::swap(prefix_, other->prefix_);
    std::swap(size_, other->size_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::std::string ClientSideModel_IPSubnet::GetTypeName() const {
  return "safe_browsing.ClientSideModel.IPSubnet";
}


// -------------------------------------------------------------------

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int ClientSideModel::kHashesFieldNumber;
const int ClientSideModel::kRuleFieldNumber;
const int ClientSideModel::kPageTermFieldNumber;
const int ClientSideModel::kPageWordFieldNumber;
const int ClientSideModel::kMaxWordsPerTermFieldNumber;
const int ClientSideModel::kVersionFieldNumber;
const int ClientSideModel::kBadSubnetFieldNumber;
const int ClientSideModel::kMurmurHashSeedFieldNumber;
const int ClientSideModel::kMaxShinglesPerPageFieldNumber;
const int ClientSideModel::kShingleSizeFieldNumber;
#endif  // !_MSC_VER

ClientSideModel::ClientSideModel()
  : ::google::protobuf::MessageLite() {
  SharedCtor();
}

void ClientSideModel::InitAsDefaultInstance() {
}

ClientSideModel::ClientSideModel(const ClientSideModel& from)
  : ::google::protobuf::MessageLite() {
  SharedCtor();
  MergeFrom(from);
}

void ClientSideModel::SharedCtor() {
  _cached_size_ = 0;
  max_words_per_term_ = 0;
  version_ = 0;
  murmur_hash_seed_ = 0u;
  max_shingles_per_page_ = 200;
  shingle_size_ = 4;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

ClientSideModel::~ClientSideModel() {
  SharedDtor();
}

void ClientSideModel::SharedDtor() {
  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  if (this != &default_instance()) {
  #else
  if (this != default_instance_) {
  #endif
  }
}

void ClientSideModel::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ClientSideModel& ClientSideModel::default_instance() {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  protobuf_AddDesc_client_5fmodel_2eproto();
#else
  if (default_instance_ == NULL) protobuf_AddDesc_client_5fmodel_2eproto();
#endif
  return *default_instance_;
}

ClientSideModel* ClientSideModel::default_instance_ = NULL;

ClientSideModel* ClientSideModel::New() const {
  return new ClientSideModel;
}

void ClientSideModel::Clear() {
  if (_has_bits_[4 / 32] & (0xffu << (4 % 32))) {
    max_words_per_term_ = 0;
    version_ = 0;
    murmur_hash_seed_ = 0u;
  }
  if (_has_bits_[8 / 32] & (0xffu << (8 % 32))) {
    max_shingles_per_page_ = 200;
    shingle_size_ = 4;
  }
  hashes_.Clear();
  rule_.Clear();
  page_term_.Clear();
  page_word_.Clear();
  bad_subnet_.Clear();
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

bool ClientSideModel::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // repeated bytes hashes = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_hashes:
          DO_(::google::protobuf::internal::WireFormatLite::ReadBytes(
                input, this->add_hashes()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(10)) goto parse_hashes;
        if (input->ExpectTag(18)) goto parse_rule;
        break;
      }

      // repeated .safe_browsing.ClientSideModel.Rule rule = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_rule:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
                input, add_rule()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(18)) goto parse_rule;
        if (input->ExpectTag(24)) goto parse_page_term;
        break;
      }

      // repeated int32 page_term = 3;
      case 3: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_page_term:
          DO_((::google::protobuf::internal::WireFormatLite::ReadRepeatedPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 1, 24, input, this->mutable_page_term())));
        } else if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag)
                   == ::google::protobuf::internal::WireFormatLite::
                      WIRETYPE_LENGTH_DELIMITED) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPackedPrimitiveNoInline<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, this->mutable_page_term())));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(24)) goto parse_page_term;
        if (input->ExpectTag(37)) goto parse_page_word;
        break;
      }

      // repeated fixed32 page_word = 4;
      case 4: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_FIXED32) {
         parse_page_word:
          DO_((::google::protobuf::internal::WireFormatLite::ReadRepeatedPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_FIXED32>(
                 1, 37, input, this->mutable_page_word())));
        } else if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag)
                   == ::google::protobuf::internal::WireFormatLite::
                      WIRETYPE_LENGTH_DELIMITED) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPackedPrimitiveNoInline<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_FIXED32>(
                 input, this->mutable_page_word())));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(37)) goto parse_page_word;
        if (input->ExpectTag(40)) goto parse_max_words_per_term;
        break;
      }

      // required int32 max_words_per_term = 5;
      case 5: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_max_words_per_term:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &max_words_per_term_)));
          set_has_max_words_per_term();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(48)) goto parse_version;
        break;
      }

      // optional int32 version = 6;
      case 6: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_version:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &version_)));
          set_has_version();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(58)) goto parse_bad_subnet;
        break;
      }

      // repeated .safe_browsing.ClientSideModel.IPSubnet bad_subnet = 7;
      case 7: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_bad_subnet:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
                input, add_bad_subnet()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(58)) goto parse_bad_subnet;
        if (input->ExpectTag(69)) goto parse_murmur_hash_seed;
        break;
      }

      // optional fixed32 murmur_hash_seed = 8;
      case 8: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_FIXED32) {
         parse_murmur_hash_seed:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_FIXED32>(
                 input, &murmur_hash_seed_)));
          set_has_murmur_hash_seed();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(72)) goto parse_max_shingles_per_page;
        break;
      }

      // optional int32 max_shingles_per_page = 9 [default = 200];
      case 9: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_max_shingles_per_page:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &max_shingles_per_page_)));
          set_has_max_shingles_per_page();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(80)) goto parse_shingle_size;
        break;
      }

      // optional int32 shingle_size = 10 [default = 4];
      case 10: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_shingle_size:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &shingle_size_)));
          set_has_shingle_size();
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

void ClientSideModel::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // repeated bytes hashes = 1;
  for (int i = 0; i < this->hashes_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::WriteBytes(
      1, this->hashes(i), output);
  }

  // repeated .safe_browsing.ClientSideModel.Rule rule = 2;
  for (int i = 0; i < this->rule_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessage(
      2, this->rule(i), output);
  }

  // repeated int32 page_term = 3;
  for (int i = 0; i < this->page_term_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(
      3, this->page_term(i), output);
  }

  // repeated fixed32 page_word = 4;
  for (int i = 0; i < this->page_word_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::WriteFixed32(
      4, this->page_word(i), output);
  }

  // required int32 max_words_per_term = 5;
  if (has_max_words_per_term()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(5, this->max_words_per_term(), output);
  }

  // optional int32 version = 6;
  if (has_version()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(6, this->version(), output);
  }

  // repeated .safe_browsing.ClientSideModel.IPSubnet bad_subnet = 7;
  for (int i = 0; i < this->bad_subnet_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessage(
      7, this->bad_subnet(i), output);
  }

  // optional fixed32 murmur_hash_seed = 8;
  if (has_murmur_hash_seed()) {
    ::google::protobuf::internal::WireFormatLite::WriteFixed32(8, this->murmur_hash_seed(), output);
  }

  // optional int32 max_shingles_per_page = 9 [default = 200];
  if (has_max_shingles_per_page()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(9, this->max_shingles_per_page(), output);
  }

  // optional int32 shingle_size = 10 [default = 4];
  if (has_shingle_size()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(10, this->shingle_size(), output);
  }

}

int ClientSideModel::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[4 / 32] & (0xffu << (4 % 32))) {
    // required int32 max_words_per_term = 5;
    if (has_max_words_per_term()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->max_words_per_term());
    }

    // optional int32 version = 6;
    if (has_version()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->version());
    }

    // optional fixed32 murmur_hash_seed = 8;
    if (has_murmur_hash_seed()) {
      total_size += 1 + 4;
    }

  }
  if (_has_bits_[8 / 32] & (0xffu << (8 % 32))) {
    // optional int32 max_shingles_per_page = 9 [default = 200];
    if (has_max_shingles_per_page()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->max_shingles_per_page());
    }

    // optional int32 shingle_size = 10 [default = 4];
    if (has_shingle_size()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->shingle_size());
    }

  }
  // repeated bytes hashes = 1;
  total_size += 1 * this->hashes_size();
  for (int i = 0; i < this->hashes_size(); i++) {
    total_size += ::google::protobuf::internal::WireFormatLite::BytesSize(
      this->hashes(i));
  }

  // repeated .safe_browsing.ClientSideModel.Rule rule = 2;
  total_size += 1 * this->rule_size();
  for (int i = 0; i < this->rule_size(); i++) {
    total_size +=
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        this->rule(i));
  }

  // repeated int32 page_term = 3;
  {
    int data_size = 0;
    for (int i = 0; i < this->page_term_size(); i++) {
      data_size += ::google::protobuf::internal::WireFormatLite::
        Int32Size(this->page_term(i));
    }
    total_size += 1 * this->page_term_size() + data_size;
  }

  // repeated fixed32 page_word = 4;
  {
    int data_size = 0;
    data_size = 4 * this->page_word_size();
    total_size += 1 * this->page_word_size() + data_size;
  }

  // repeated .safe_browsing.ClientSideModel.IPSubnet bad_subnet = 7;
  total_size += 1 * this->bad_subnet_size();
  for (int i = 0; i < this->bad_subnet_size(); i++) {
    total_size +=
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        this->bad_subnet(i));
  }

  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void ClientSideModel::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const ClientSideModel*>(&from));
}

void ClientSideModel::MergeFrom(const ClientSideModel& from) {
  GOOGLE_CHECK_NE(&from, this);
  hashes_.MergeFrom(from.hashes_);
  rule_.MergeFrom(from.rule_);
  page_term_.MergeFrom(from.page_term_);
  page_word_.MergeFrom(from.page_word_);
  bad_subnet_.MergeFrom(from.bad_subnet_);
  if (from._has_bits_[4 / 32] & (0xffu << (4 % 32))) {
    if (from.has_max_words_per_term()) {
      set_max_words_per_term(from.max_words_per_term());
    }
    if (from.has_version()) {
      set_version(from.version());
    }
    if (from.has_murmur_hash_seed()) {
      set_murmur_hash_seed(from.murmur_hash_seed());
    }
  }
  if (from._has_bits_[8 / 32] & (0xffu << (8 % 32))) {
    if (from.has_max_shingles_per_page()) {
      set_max_shingles_per_page(from.max_shingles_per_page());
    }
    if (from.has_shingle_size()) {
      set_shingle_size(from.shingle_size());
    }
  }
}

void ClientSideModel::CopyFrom(const ClientSideModel& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ClientSideModel::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000010) != 0x00000010) return false;

  for (int i = 0; i < rule_size(); i++) {
    if (!this->rule(i).IsInitialized()) return false;
  }
  for (int i = 0; i < bad_subnet_size(); i++) {
    if (!this->bad_subnet(i).IsInitialized()) return false;
  }
  return true;
}

void ClientSideModel::Swap(ClientSideModel* other) {
  if (other != this) {
    hashes_.Swap(&other->hashes_);
    rule_.Swap(&other->rule_);
    page_term_.Swap(&other->page_term_);
    page_word_.Swap(&other->page_word_);
    std::swap(max_words_per_term_, other->max_words_per_term_);
    std::swap(version_, other->version_);
    bad_subnet_.Swap(&other->bad_subnet_);
    std::swap(murmur_hash_seed_, other->murmur_hash_seed_);
    std::swap(max_shingles_per_page_, other->max_shingles_per_page_);
    std::swap(shingle_size_, other->shingle_size_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::std::string ClientSideModel::GetTypeName() const {
  return "safe_browsing.ClientSideModel";
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace safe_browsing

// @@protoc_insertion_point(global_scope)
