// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: memory_allocation.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "memory_allocation.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
// @@protoc_insertion_point(includes)

namespace cc {
namespace proto {

void protobuf_ShutdownFile_memory_5fallocation_2eproto() {
  delete MemoryAllocation::default_instance_;
}

#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
void protobuf_AddDesc_memory_5fallocation_2eproto_impl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#else
void protobuf_AddDesc_memory_5fallocation_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#endif
  MemoryAllocation::default_instance_ = new MemoryAllocation();
  MemoryAllocation::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_memory_5fallocation_2eproto);
}

#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AddDesc_memory_5fallocation_2eproto_once_);
void protobuf_AddDesc_memory_5fallocation_2eproto() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AddDesc_memory_5fallocation_2eproto_once_,
                 &protobuf_AddDesc_memory_5fallocation_2eproto_impl);
}
#else
// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_memory_5fallocation_2eproto {
  StaticDescriptorInitializer_memory_5fallocation_2eproto() {
    protobuf_AddDesc_memory_5fallocation_2eproto();
  }
} static_descriptor_initializer_memory_5fallocation_2eproto_;
#endif

// ===================================================================

bool MemoryAllocation_PriorityCutoff_IsValid(int value) {
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
const MemoryAllocation_PriorityCutoff MemoryAllocation::UNKNOWN;
const MemoryAllocation_PriorityCutoff MemoryAllocation::ALLOW_NOTHING;
const MemoryAllocation_PriorityCutoff MemoryAllocation::ALLOW_REQUIRED_ONLY;
const MemoryAllocation_PriorityCutoff MemoryAllocation::ALLOW_NICE_TO_HAVE;
const MemoryAllocation_PriorityCutoff MemoryAllocation::ALLOW_EVERYTHING;
const MemoryAllocation_PriorityCutoff MemoryAllocation::PriorityCutoff_MIN;
const MemoryAllocation_PriorityCutoff MemoryAllocation::PriorityCutoff_MAX;
const int MemoryAllocation::PriorityCutoff_ARRAYSIZE;
#endif  // _MSC_VER
#if !defined(_MSC_VER) || _MSC_VER >= 1900
#endif  // !_MSC_VER

MemoryAllocation::MemoryAllocation()
  : ::google::protobuf::MessageLite() {
  SharedCtor();
}

void MemoryAllocation::InitAsDefaultInstance() {
}

MemoryAllocation::MemoryAllocation(const MemoryAllocation& from)
  : ::google::protobuf::MessageLite() {
  SharedCtor();
  MergeFrom(from);
}

void MemoryAllocation::SharedCtor() {
  _cached_size_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

MemoryAllocation::~MemoryAllocation() {
  SharedDtor();
}

void MemoryAllocation::SharedDtor() {
  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  if (this != &default_instance()) {
  #else
  if (this != default_instance_) {
  #endif
  }
}

void MemoryAllocation::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const MemoryAllocation& MemoryAllocation::default_instance() {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  protobuf_AddDesc_memory_5fallocation_2eproto();
#else
  if (default_instance_ == NULL) protobuf_AddDesc_memory_5fallocation_2eproto();
#endif
  return *default_instance_;
}

MemoryAllocation* MemoryAllocation::default_instance_ = NULL;

MemoryAllocation* MemoryAllocation::New() const {
  return new MemoryAllocation;
}

void MemoryAllocation::Clear() {
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

bool MemoryAllocation::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
        ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
      return true;
    }
    DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag, NULL));
  }
  return true;
#undef DO_
}

void MemoryAllocation::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
}

int MemoryAllocation::ByteSize() const {
  int total_size = 0;

  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void MemoryAllocation::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const MemoryAllocation*>(&from));
}

void MemoryAllocation::MergeFrom(const MemoryAllocation& from) {
  GOOGLE_CHECK_NE(&from, this);
}

void MemoryAllocation::CopyFrom(const MemoryAllocation& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool MemoryAllocation::IsInitialized() const {

  return true;
}

void MemoryAllocation::Swap(MemoryAllocation* other) {
  if (other != this) {
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::std::string MemoryAllocation::GetTypeName() const {
  return "cc.proto.MemoryAllocation";
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace proto
}  // namespace cc

// @@protoc_insertion_point(global_scope)
