// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: rect.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "rect.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
// @@protoc_insertion_point(includes)

namespace cc {
namespace proto {

void protobuf_ShutdownFile_rect_2eproto() {
  delete Rect::default_instance_;
}

#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
void protobuf_AddDesc_rect_2eproto_impl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#else
void protobuf_AddDesc_rect_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#endif
  ::cc::proto::protobuf_AddDesc_point_2eproto();
  ::cc::proto::protobuf_AddDesc_size_2eproto();
  Rect::default_instance_ = new Rect();
  Rect::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_rect_2eproto);
}

#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AddDesc_rect_2eproto_once_);
void protobuf_AddDesc_rect_2eproto() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AddDesc_rect_2eproto_once_,
                 &protobuf_AddDesc_rect_2eproto_impl);
}
#else
// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_rect_2eproto {
  StaticDescriptorInitializer_rect_2eproto() {
    protobuf_AddDesc_rect_2eproto();
  }
} static_descriptor_initializer_rect_2eproto_;
#endif

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int Rect::kOriginFieldNumber;
const int Rect::kSizeFieldNumber;
#endif  // !_MSC_VER

Rect::Rect()
  : ::google::protobuf::MessageLite() {
  SharedCtor();
}

void Rect::InitAsDefaultInstance() {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  origin_ = const_cast< ::cc::proto::Point*>(
      ::cc::proto::Point::internal_default_instance());
#else
  origin_ = const_cast< ::cc::proto::Point*>(&::cc::proto::Point::default_instance());
#endif
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  size_ = const_cast< ::cc::proto::Size*>(
      ::cc::proto::Size::internal_default_instance());
#else
  size_ = const_cast< ::cc::proto::Size*>(&::cc::proto::Size::default_instance());
#endif
}

Rect::Rect(const Rect& from)
  : ::google::protobuf::MessageLite() {
  SharedCtor();
  MergeFrom(from);
}

void Rect::SharedCtor() {
  _cached_size_ = 0;
  origin_ = NULL;
  size_ = NULL;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

Rect::~Rect() {
  SharedDtor();
}

void Rect::SharedDtor() {
  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  if (this != &default_instance()) {
  #else
  if (this != default_instance_) {
  #endif
    delete origin_;
    delete size_;
  }
}

void Rect::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const Rect& Rect::default_instance() {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  protobuf_AddDesc_rect_2eproto();
#else
  if (default_instance_ == NULL) protobuf_AddDesc_rect_2eproto();
#endif
  return *default_instance_;
}

Rect* Rect::default_instance_ = NULL;

Rect* Rect::New() const {
  return new Rect;
}

void Rect::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (has_origin()) {
      if (origin_ != NULL) origin_->::cc::proto::Point::Clear();
    }
    if (has_size()) {
      if (size_ != NULL) size_->::cc::proto::Size::Clear();
    }
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

bool Rect::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional .cc.proto.Point origin = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_origin()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(18)) goto parse_size;
        break;
      }

      // optional .cc.proto.Size size = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_size:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_size()));
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

void Rect::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // optional .cc.proto.Point origin = 1;
  if (has_origin()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessage(
      1, this->origin(), output);
  }

  // optional .cc.proto.Size size = 2;
  if (has_size()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessage(
      2, this->size(), output);
  }

}

int Rect::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // optional .cc.proto.Point origin = 1;
    if (has_origin()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->origin());
    }

    // optional .cc.proto.Size size = 2;
    if (has_size()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->size());
    }

  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void Rect::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const Rect*>(&from));
}

void Rect::MergeFrom(const Rect& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_origin()) {
      mutable_origin()->::cc::proto::Point::MergeFrom(from.origin());
    }
    if (from.has_size()) {
      mutable_size()->::cc::proto::Size::MergeFrom(from.size());
    }
  }
}

void Rect::CopyFrom(const Rect& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Rect::IsInitialized() const {

  return true;
}

void Rect::Swap(Rect* other) {
  if (other != this) {
    std::swap(origin_, other->origin_);
    std::swap(size_, other->size_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::std::string Rect::GetTypeName() const {
  return "cc.proto.Rect";
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace proto
}  // namespace cc

// @@protoc_insertion_point(global_scope)
