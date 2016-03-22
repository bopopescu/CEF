// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: display_list_recording_source.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "display_list_recording_source.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
// @@protoc_insertion_point(includes)

namespace cc {
namespace proto {

void protobuf_ShutdownFile_display_5flist_5frecording_5fsource_2eproto() {
  delete DisplayListRecordingSource::default_instance_;
}

#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
void protobuf_AddDesc_display_5flist_5frecording_5fsource_2eproto_impl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#else
void protobuf_AddDesc_display_5flist_5frecording_5fsource_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#endif
  ::cc::proto::protobuf_AddDesc_display_5fitem_2eproto();
  ::cc::proto::protobuf_AddDesc_rect_2eproto();
  ::cc::proto::protobuf_AddDesc_size_2eproto();
  DisplayListRecordingSource::default_instance_ = new DisplayListRecordingSource();
  DisplayListRecordingSource::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_display_5flist_5frecording_5fsource_2eproto);
}

#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AddDesc_display_5flist_5frecording_5fsource_2eproto_once_);
void protobuf_AddDesc_display_5flist_5frecording_5fsource_2eproto() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AddDesc_display_5flist_5frecording_5fsource_2eproto_once_,
                 &protobuf_AddDesc_display_5flist_5frecording_5fsource_2eproto_impl);
}
#else
// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_display_5flist_5frecording_5fsource_2eproto {
  StaticDescriptorInitializer_display_5flist_5frecording_5fsource_2eproto() {
    protobuf_AddDesc_display_5flist_5frecording_5fsource_2eproto();
  }
} static_descriptor_initializer_display_5flist_5frecording_5fsource_2eproto_;
#endif

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int DisplayListRecordingSource::kRecordedViewportFieldNumber;
const int DisplayListRecordingSource::kSizeFieldNumber;
const int DisplayListRecordingSource::kSlowDownRasterScaleFactorForDebugFieldNumber;
const int DisplayListRecordingSource::kGenerateDiscardableImagesMetadataFieldNumber;
const int DisplayListRecordingSource::kRequiresClearFieldNumber;
const int DisplayListRecordingSource::kIsSolidColorFieldNumber;
const int DisplayListRecordingSource::kClearCanvasWithDebugColorFieldNumber;
const int DisplayListRecordingSource::kSolidColorFieldNumber;
const int DisplayListRecordingSource::kBackgroundColorFieldNumber;
const int DisplayListRecordingSource::kDisplayListFieldNumber;
#endif  // !_MSC_VER

DisplayListRecordingSource::DisplayListRecordingSource()
  : ::google::protobuf::MessageLite() {
  SharedCtor();
}

void DisplayListRecordingSource::InitAsDefaultInstance() {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  recorded_viewport_ = const_cast< ::cc::proto::Rect*>(
      ::cc::proto::Rect::internal_default_instance());
#else
  recorded_viewport_ = const_cast< ::cc::proto::Rect*>(&::cc::proto::Rect::default_instance());
#endif
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  size_ = const_cast< ::cc::proto::Size*>(
      ::cc::proto::Size::internal_default_instance());
#else
  size_ = const_cast< ::cc::proto::Size*>(&::cc::proto::Size::default_instance());
#endif
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  display_list_ = const_cast< ::cc::proto::DisplayItemList*>(
      ::cc::proto::DisplayItemList::internal_default_instance());
#else
  display_list_ = const_cast< ::cc::proto::DisplayItemList*>(&::cc::proto::DisplayItemList::default_instance());
#endif
}

DisplayListRecordingSource::DisplayListRecordingSource(const DisplayListRecordingSource& from)
  : ::google::protobuf::MessageLite() {
  SharedCtor();
  MergeFrom(from);
}

void DisplayListRecordingSource::SharedCtor() {
  _cached_size_ = 0;
  recorded_viewport_ = NULL;
  size_ = NULL;
  slow_down_raster_scale_factor_for_debug_ = GOOGLE_LONGLONG(0);
  generate_discardable_images_metadata_ = false;
  requires_clear_ = false;
  is_solid_color_ = false;
  clear_canvas_with_debug_color_ = false;
  solid_color_ = GOOGLE_ULONGLONG(0);
  background_color_ = GOOGLE_ULONGLONG(0);
  display_list_ = NULL;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

DisplayListRecordingSource::~DisplayListRecordingSource() {
  SharedDtor();
}

void DisplayListRecordingSource::SharedDtor() {
  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  if (this != &default_instance()) {
  #else
  if (this != default_instance_) {
  #endif
    delete recorded_viewport_;
    delete size_;
    delete display_list_;
  }
}

void DisplayListRecordingSource::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const DisplayListRecordingSource& DisplayListRecordingSource::default_instance() {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  protobuf_AddDesc_display_5flist_5frecording_5fsource_2eproto();
#else
  if (default_instance_ == NULL) protobuf_AddDesc_display_5flist_5frecording_5fsource_2eproto();
#endif
  return *default_instance_;
}

DisplayListRecordingSource* DisplayListRecordingSource::default_instance_ = NULL;

DisplayListRecordingSource* DisplayListRecordingSource::New() const {
  return new DisplayListRecordingSource;
}

void DisplayListRecordingSource::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (has_recorded_viewport()) {
      if (recorded_viewport_ != NULL) recorded_viewport_->::cc::proto::Rect::Clear();
    }
    if (has_size()) {
      if (size_ != NULL) size_->::cc::proto::Size::Clear();
    }
    slow_down_raster_scale_factor_for_debug_ = GOOGLE_LONGLONG(0);
    generate_discardable_images_metadata_ = false;
    requires_clear_ = false;
    is_solid_color_ = false;
    clear_canvas_with_debug_color_ = false;
    solid_color_ = GOOGLE_ULONGLONG(0);
  }
  if (_has_bits_[8 / 32] & (0xffu << (8 % 32))) {
    background_color_ = GOOGLE_ULONGLONG(0);
    if (has_display_list()) {
      if (display_list_ != NULL) display_list_->::cc::proto::DisplayItemList::Clear();
    }
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

bool DisplayListRecordingSource::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional .cc.proto.Rect recorded_viewport = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_recorded_viewport()));
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
        if (input->ExpectTag(24)) goto parse_slow_down_raster_scale_factor_for_debug;
        break;
      }

      // optional int64 slow_down_raster_scale_factor_for_debug = 3;
      case 3: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_slow_down_raster_scale_factor_for_debug:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_INT64>(
                 input, &slow_down_raster_scale_factor_for_debug_)));
          set_has_slow_down_raster_scale_factor_for_debug();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(32)) goto parse_generate_discardable_images_metadata;
        break;
      }

      // optional bool generate_discardable_images_metadata = 4;
      case 4: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_generate_discardable_images_metadata:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &generate_discardable_images_metadata_)));
          set_has_generate_discardable_images_metadata();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(40)) goto parse_requires_clear;
        break;
      }

      // optional bool requires_clear = 5;
      case 5: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_requires_clear:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &requires_clear_)));
          set_has_requires_clear();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(48)) goto parse_is_solid_color;
        break;
      }

      // optional bool is_solid_color = 6;
      case 6: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_is_solid_color:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &is_solid_color_)));
          set_has_is_solid_color();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(56)) goto parse_clear_canvas_with_debug_color;
        break;
      }

      // optional bool clear_canvas_with_debug_color = 7;
      case 7: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_clear_canvas_with_debug_color:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &clear_canvas_with_debug_color_)));
          set_has_clear_canvas_with_debug_color();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(64)) goto parse_solid_color;
        break;
      }

      // optional uint64 solid_color = 8;
      case 8: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_solid_color:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint64, ::google::protobuf::internal::WireFormatLite::TYPE_UINT64>(
                 input, &solid_color_)));
          set_has_solid_color();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(72)) goto parse_background_color;
        break;
      }

      // optional uint64 background_color = 9;
      case 9: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_background_color:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint64, ::google::protobuf::internal::WireFormatLite::TYPE_UINT64>(
                 input, &background_color_)));
          set_has_background_color();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(82)) goto parse_display_list;
        break;
      }

      // optional .cc.proto.DisplayItemList display_list = 10;
      case 10: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_display_list:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_display_list()));
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

void DisplayListRecordingSource::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // optional .cc.proto.Rect recorded_viewport = 1;
  if (has_recorded_viewport()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessage(
      1, this->recorded_viewport(), output);
  }

  // optional .cc.proto.Size size = 2;
  if (has_size()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessage(
      2, this->size(), output);
  }

  // optional int64 slow_down_raster_scale_factor_for_debug = 3;
  if (has_slow_down_raster_scale_factor_for_debug()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(3, this->slow_down_raster_scale_factor_for_debug(), output);
  }

  // optional bool generate_discardable_images_metadata = 4;
  if (has_generate_discardable_images_metadata()) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(4, this->generate_discardable_images_metadata(), output);
  }

  // optional bool requires_clear = 5;
  if (has_requires_clear()) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(5, this->requires_clear(), output);
  }

  // optional bool is_solid_color = 6;
  if (has_is_solid_color()) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(6, this->is_solid_color(), output);
  }

  // optional bool clear_canvas_with_debug_color = 7;
  if (has_clear_canvas_with_debug_color()) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(7, this->clear_canvas_with_debug_color(), output);
  }

  // optional uint64 solid_color = 8;
  if (has_solid_color()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt64(8, this->solid_color(), output);
  }

  // optional uint64 background_color = 9;
  if (has_background_color()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt64(9, this->background_color(), output);
  }

  // optional .cc.proto.DisplayItemList display_list = 10;
  if (has_display_list()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessage(
      10, this->display_list(), output);
  }

}

int DisplayListRecordingSource::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // optional .cc.proto.Rect recorded_viewport = 1;
    if (has_recorded_viewport()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->recorded_viewport());
    }

    // optional .cc.proto.Size size = 2;
    if (has_size()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->size());
    }

    // optional int64 slow_down_raster_scale_factor_for_debug = 3;
    if (has_slow_down_raster_scale_factor_for_debug()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int64Size(
          this->slow_down_raster_scale_factor_for_debug());
    }

    // optional bool generate_discardable_images_metadata = 4;
    if (has_generate_discardable_images_metadata()) {
      total_size += 1 + 1;
    }

    // optional bool requires_clear = 5;
    if (has_requires_clear()) {
      total_size += 1 + 1;
    }

    // optional bool is_solid_color = 6;
    if (has_is_solid_color()) {
      total_size += 1 + 1;
    }

    // optional bool clear_canvas_with_debug_color = 7;
    if (has_clear_canvas_with_debug_color()) {
      total_size += 1 + 1;
    }

    // optional uint64 solid_color = 8;
    if (has_solid_color()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt64Size(
          this->solid_color());
    }

  }
  if (_has_bits_[8 / 32] & (0xffu << (8 % 32))) {
    // optional uint64 background_color = 9;
    if (has_background_color()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt64Size(
          this->background_color());
    }

    // optional .cc.proto.DisplayItemList display_list = 10;
    if (has_display_list()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->display_list());
    }

  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void DisplayListRecordingSource::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const DisplayListRecordingSource*>(&from));
}

void DisplayListRecordingSource::MergeFrom(const DisplayListRecordingSource& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_recorded_viewport()) {
      mutable_recorded_viewport()->::cc::proto::Rect::MergeFrom(from.recorded_viewport());
    }
    if (from.has_size()) {
      mutable_size()->::cc::proto::Size::MergeFrom(from.size());
    }
    if (from.has_slow_down_raster_scale_factor_for_debug()) {
      set_slow_down_raster_scale_factor_for_debug(from.slow_down_raster_scale_factor_for_debug());
    }
    if (from.has_generate_discardable_images_metadata()) {
      set_generate_discardable_images_metadata(from.generate_discardable_images_metadata());
    }
    if (from.has_requires_clear()) {
      set_requires_clear(from.requires_clear());
    }
    if (from.has_is_solid_color()) {
      set_is_solid_color(from.is_solid_color());
    }
    if (from.has_clear_canvas_with_debug_color()) {
      set_clear_canvas_with_debug_color(from.clear_canvas_with_debug_color());
    }
    if (from.has_solid_color()) {
      set_solid_color(from.solid_color());
    }
  }
  if (from._has_bits_[8 / 32] & (0xffu << (8 % 32))) {
    if (from.has_background_color()) {
      set_background_color(from.background_color());
    }
    if (from.has_display_list()) {
      mutable_display_list()->::cc::proto::DisplayItemList::MergeFrom(from.display_list());
    }
  }
}

void DisplayListRecordingSource::CopyFrom(const DisplayListRecordingSource& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool DisplayListRecordingSource::IsInitialized() const {

  return true;
}

void DisplayListRecordingSource::Swap(DisplayListRecordingSource* other) {
  if (other != this) {
    std::swap(recorded_viewport_, other->recorded_viewport_);
    std::swap(size_, other->size_);
    std::swap(slow_down_raster_scale_factor_for_debug_, other->slow_down_raster_scale_factor_for_debug_);
    std::swap(generate_discardable_images_metadata_, other->generate_discardable_images_metadata_);
    std::swap(requires_clear_, other->requires_clear_);
    std::swap(is_solid_color_, other->is_solid_color_);
    std::swap(clear_canvas_with_debug_color_, other->clear_canvas_with_debug_color_);
    std::swap(solid_color_, other->solid_color_);
    std::swap(background_color_, other->background_color_);
    std::swap(display_list_, other->display_list_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::std::string DisplayListRecordingSource::GetTypeName() const {
  return "cc.proto.DisplayListRecordingSource";
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace proto
}  // namespace cc

// @@protoc_insertion_point(global_scope)
