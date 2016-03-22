// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: article_specifics.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "article_specifics.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
// @@protoc_insertion_point(includes)

namespace sync_pb {

void protobuf_ShutdownFile_article_5fspecifics_2eproto() {
  delete ArticleSpecifics::default_instance_;
  delete ArticlePage::default_instance_;
  delete ArticleAttachments::default_instance_;
}

#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
void protobuf_AddDesc_article_5fspecifics_2eproto_impl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#else
void protobuf_AddDesc_article_5fspecifics_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#endif
  ::sync_pb::protobuf_AddDesc_attachments_2eproto();
  ArticleSpecifics::default_instance_ = new ArticleSpecifics();
  ArticlePage::default_instance_ = new ArticlePage();
  ArticleAttachments::default_instance_ = new ArticleAttachments();
  ArticleSpecifics::default_instance_->InitAsDefaultInstance();
  ArticlePage::default_instance_->InitAsDefaultInstance();
  ArticleAttachments::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_article_5fspecifics_2eproto);
}

#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AddDesc_article_5fspecifics_2eproto_once_);
void protobuf_AddDesc_article_5fspecifics_2eproto() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AddDesc_article_5fspecifics_2eproto_once_,
                 &protobuf_AddDesc_article_5fspecifics_2eproto_impl);
}
#else
// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_article_5fspecifics_2eproto {
  StaticDescriptorInitializer_article_5fspecifics_2eproto() {
    protobuf_AddDesc_article_5fspecifics_2eproto();
  }
} static_descriptor_initializer_article_5fspecifics_2eproto_;
#endif

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int ArticleSpecifics::kEntryIdFieldNumber;
const int ArticleSpecifics::kTitleFieldNumber;
const int ArticleSpecifics::kPagesFieldNumber;
const int ArticleSpecifics::kAttachmentsFieldNumber;
#endif  // !_MSC_VER

ArticleSpecifics::ArticleSpecifics()
  : ::google::protobuf::MessageLite() {
  SharedCtor();
}

void ArticleSpecifics::InitAsDefaultInstance() {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  attachments_ = const_cast< ::sync_pb::ArticleAttachments*>(
      ::sync_pb::ArticleAttachments::internal_default_instance());
#else
  attachments_ = const_cast< ::sync_pb::ArticleAttachments*>(&::sync_pb::ArticleAttachments::default_instance());
#endif
}

ArticleSpecifics::ArticleSpecifics(const ArticleSpecifics& from)
  : ::google::protobuf::MessageLite() {
  SharedCtor();
  MergeFrom(from);
}

void ArticleSpecifics::SharedCtor() {
  _cached_size_ = 0;
  entry_id_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyString());
  title_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyString());
  attachments_ = NULL;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

ArticleSpecifics::~ArticleSpecifics() {
  SharedDtor();
}

void ArticleSpecifics::SharedDtor() {
  if (entry_id_ != &::google::protobuf::internal::GetEmptyString()) {
    delete entry_id_;
  }
  if (title_ != &::google::protobuf::internal::GetEmptyString()) {
    delete title_;
  }
  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  if (this != &default_instance()) {
  #else
  if (this != default_instance_) {
  #endif
    delete attachments_;
  }
}

void ArticleSpecifics::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ArticleSpecifics& ArticleSpecifics::default_instance() {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  protobuf_AddDesc_article_5fspecifics_2eproto();
#else
  if (default_instance_ == NULL) protobuf_AddDesc_article_5fspecifics_2eproto();
#endif
  return *default_instance_;
}

ArticleSpecifics* ArticleSpecifics::default_instance_ = NULL;

ArticleSpecifics* ArticleSpecifics::New() const {
  return new ArticleSpecifics;
}

void ArticleSpecifics::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (has_entry_id()) {
      if (entry_id_ != &::google::protobuf::internal::GetEmptyString()) {
        entry_id_->clear();
      }
    }
    if (has_title()) {
      if (title_ != &::google::protobuf::internal::GetEmptyString()) {
        title_->clear();
      }
    }
    if (has_attachments()) {
      if (attachments_ != NULL) attachments_->::sync_pb::ArticleAttachments::Clear();
    }
  }
  pages_.Clear();
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool ArticleSpecifics::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional string entry_id = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_entry_id()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(18)) goto parse_title;
        break;
      }

      // optional string title = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_title:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_title()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(26)) goto parse_pages;
        break;
      }

      // repeated .sync_pb.ArticlePage pages = 3;
      case 3: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_pages:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
                input, add_pages()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(26)) goto parse_pages;
        if (input->ExpectTag(34)) goto parse_attachments;
        break;
      }

      // optional .sync_pb.ArticleAttachments attachments = 4;
      case 4: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_attachments:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_attachments()));
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

void ArticleSpecifics::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // optional string entry_id = 1;
  if (has_entry_id()) {
    ::google::protobuf::internal::WireFormatLite::WriteString(
      1, this->entry_id(), output);
  }

  // optional string title = 2;
  if (has_title()) {
    ::google::protobuf::internal::WireFormatLite::WriteString(
      2, this->title(), output);
  }

  // repeated .sync_pb.ArticlePage pages = 3;
  for (int i = 0; i < this->pages_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessage(
      3, this->pages(i), output);
  }

  // optional .sync_pb.ArticleAttachments attachments = 4;
  if (has_attachments()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessage(
      4, this->attachments(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormatLite::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

int ArticleSpecifics::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // optional string entry_id = 1;
    if (has_entry_id()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->entry_id());
    }

    // optional string title = 2;
    if (has_title()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->title());
    }

    // optional .sync_pb.ArticleAttachments attachments = 4;
    if (has_attachments()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->attachments());
    }

  }
  // repeated .sync_pb.ArticlePage pages = 3;
  total_size += 1 * this->pages_size();
  for (int i = 0; i < this->pages_size(); i++) {
    total_size +=
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        this->pages(i));
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

void ArticleSpecifics::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const ArticleSpecifics*>(&from));
}

void ArticleSpecifics::MergeFrom(const ArticleSpecifics& from) {
  GOOGLE_CHECK_NE(&from, this);
  pages_.MergeFrom(from.pages_);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_entry_id()) {
      set_entry_id(from.entry_id());
    }
    if (from.has_title()) {
      set_title(from.title());
    }
    if (from.has_attachments()) {
      mutable_attachments()->::sync_pb::ArticleAttachments::MergeFrom(from.attachments());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void ArticleSpecifics::CopyFrom(const ArticleSpecifics& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ArticleSpecifics::IsInitialized() const {

  return true;
}

void ArticleSpecifics::Swap(ArticleSpecifics* other) {
  if (other != this) {
    std::swap(entry_id_, other->entry_id_);
    std::swap(title_, other->title_);
    pages_.Swap(&other->pages_);
    std::swap(attachments_, other->attachments_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::std::string ArticleSpecifics::GetTypeName() const {
  return "sync_pb.ArticleSpecifics";
}


// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int ArticlePage::kUrlFieldNumber;
#endif  // !_MSC_VER

ArticlePage::ArticlePage()
  : ::google::protobuf::MessageLite() {
  SharedCtor();
}

void ArticlePage::InitAsDefaultInstance() {
}

ArticlePage::ArticlePage(const ArticlePage& from)
  : ::google::protobuf::MessageLite() {
  SharedCtor();
  MergeFrom(from);
}

void ArticlePage::SharedCtor() {
  _cached_size_ = 0;
  url_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyString());
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

ArticlePage::~ArticlePage() {
  SharedDtor();
}

void ArticlePage::SharedDtor() {
  if (url_ != &::google::protobuf::internal::GetEmptyString()) {
    delete url_;
  }
  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  if (this != &default_instance()) {
  #else
  if (this != default_instance_) {
  #endif
  }
}

void ArticlePage::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ArticlePage& ArticlePage::default_instance() {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  protobuf_AddDesc_article_5fspecifics_2eproto();
#else
  if (default_instance_ == NULL) protobuf_AddDesc_article_5fspecifics_2eproto();
#endif
  return *default_instance_;
}

ArticlePage* ArticlePage::default_instance_ = NULL;

ArticlePage* ArticlePage::New() const {
  return new ArticlePage;
}

void ArticlePage::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (has_url()) {
      if (url_ != &::google::protobuf::internal::GetEmptyString()) {
        url_->clear();
      }
    }
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool ArticlePage::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional string url = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_url()));
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

void ArticlePage::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // optional string url = 1;
  if (has_url()) {
    ::google::protobuf::internal::WireFormatLite::WriteString(
      1, this->url(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormatLite::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

int ArticlePage::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // optional string url = 1;
    if (has_url()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->url());
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

void ArticlePage::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const ArticlePage*>(&from));
}

void ArticlePage::MergeFrom(const ArticlePage& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_url()) {
      set_url(from.url());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void ArticlePage::CopyFrom(const ArticlePage& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ArticlePage::IsInitialized() const {

  return true;
}

void ArticlePage::Swap(ArticlePage* other) {
  if (other != this) {
    std::swap(url_, other->url_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::std::string ArticlePage::GetTypeName() const {
  return "sync_pb.ArticlePage";
}


// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int ArticleAttachments::kDistilledArticleFieldNumber;
#endif  // !_MSC_VER

ArticleAttachments::ArticleAttachments()
  : ::google::protobuf::MessageLite() {
  SharedCtor();
}

void ArticleAttachments::InitAsDefaultInstance() {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  distilled_article_ = const_cast< ::sync_pb::AttachmentIdProto*>(
      ::sync_pb::AttachmentIdProto::internal_default_instance());
#else
  distilled_article_ = const_cast< ::sync_pb::AttachmentIdProto*>(&::sync_pb::AttachmentIdProto::default_instance());
#endif
}

ArticleAttachments::ArticleAttachments(const ArticleAttachments& from)
  : ::google::protobuf::MessageLite() {
  SharedCtor();
  MergeFrom(from);
}

void ArticleAttachments::SharedCtor() {
  _cached_size_ = 0;
  distilled_article_ = NULL;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

ArticleAttachments::~ArticleAttachments() {
  SharedDtor();
}

void ArticleAttachments::SharedDtor() {
  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  if (this != &default_instance()) {
  #else
  if (this != default_instance_) {
  #endif
    delete distilled_article_;
  }
}

void ArticleAttachments::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ArticleAttachments& ArticleAttachments::default_instance() {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  protobuf_AddDesc_article_5fspecifics_2eproto();
#else
  if (default_instance_ == NULL) protobuf_AddDesc_article_5fspecifics_2eproto();
#endif
  return *default_instance_;
}

ArticleAttachments* ArticleAttachments::default_instance_ = NULL;

ArticleAttachments* ArticleAttachments::New() const {
  return new ArticleAttachments;
}

void ArticleAttachments::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (has_distilled_article()) {
      if (distilled_article_ != NULL) distilled_article_->::sync_pb::AttachmentIdProto::Clear();
    }
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool ArticleAttachments::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional .sync_pb.AttachmentIdProto distilled_article = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_distilled_article()));
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

void ArticleAttachments::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // optional .sync_pb.AttachmentIdProto distilled_article = 1;
  if (has_distilled_article()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessage(
      1, this->distilled_article(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormatLite::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

int ArticleAttachments::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // optional .sync_pb.AttachmentIdProto distilled_article = 1;
    if (has_distilled_article()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->distilled_article());
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

void ArticleAttachments::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const ArticleAttachments*>(&from));
}

void ArticleAttachments::MergeFrom(const ArticleAttachments& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_distilled_article()) {
      mutable_distilled_article()->::sync_pb::AttachmentIdProto::MergeFrom(from.distilled_article());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void ArticleAttachments::CopyFrom(const ArticleAttachments& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ArticleAttachments::IsInitialized() const {

  return true;
}

void ArticleAttachments::Swap(ArticleAttachments* other) {
  if (other != this) {
    std::swap(distilled_article_, other->distilled_article_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::std::string ArticleAttachments::GetTypeName() const {
  return "sync_pb.ArticleAttachments";
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace sync_pb

// @@protoc_insertion_point(global_scope)
