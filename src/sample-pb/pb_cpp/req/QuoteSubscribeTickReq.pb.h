// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: req/QuoteSubscribeTickReq.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_req_2fQuoteSubscribeTickReq_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_req_2fQuoteSubscribeTickReq_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3021000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3021011 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
#include "common/Stock.pb.h"
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_req_2fQuoteSubscribeTickReq_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_req_2fQuoteSubscribeTickReq_2eproto {
  static const uint32_t offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_req_2fQuoteSubscribeTickReq_2eproto;
namespace Quote {
class SubscribeTickReq;
struct SubscribeTickReqDefaultTypeInternal;
extern SubscribeTickReqDefaultTypeInternal _SubscribeTickReq_default_instance_;
}  // namespace Quote
PROTOBUF_NAMESPACE_OPEN
template<> ::Quote::SubscribeTickReq* Arena::CreateMaybeMessage<::Quote::SubscribeTickReq>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace Quote {

// ===================================================================

class SubscribeTickReq final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:Quote.SubscribeTickReq) */ {
 public:
  inline SubscribeTickReq() : SubscribeTickReq(nullptr) {}
  ~SubscribeTickReq() override;
  explicit PROTOBUF_CONSTEXPR SubscribeTickReq(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  SubscribeTickReq(const SubscribeTickReq& from);
  SubscribeTickReq(SubscribeTickReq&& from) noexcept
    : SubscribeTickReq() {
    *this = ::std::move(from);
  }

  inline SubscribeTickReq& operator=(const SubscribeTickReq& from) {
    CopyFrom(from);
    return *this;
  }
  inline SubscribeTickReq& operator=(SubscribeTickReq&& from) noexcept {
    if (this == &from) return *this;
    if (GetOwningArena() == from.GetOwningArena()
  #ifdef PROTOBUF_FORCE_COPY_IN_MOVE
        && GetOwningArena() != nullptr
  #endif  // !PROTOBUF_FORCE_COPY_IN_MOVE
    ) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const SubscribeTickReq& default_instance() {
    return *internal_default_instance();
  }
  static inline const SubscribeTickReq* internal_default_instance() {
    return reinterpret_cast<const SubscribeTickReq*>(
               &_SubscribeTickReq_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(SubscribeTickReq& a, SubscribeTickReq& b) {
    a.Swap(&b);
  }
  inline void Swap(SubscribeTickReq* other) {
    if (other == this) return;
  #ifdef PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() != nullptr &&
        GetOwningArena() == other->GetOwningArena()) {
   #else  // PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() == other->GetOwningArena()) {
  #endif  // !PROTOBUF_FORCE_COPY_IN_SWAP
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(SubscribeTickReq* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  SubscribeTickReq* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<SubscribeTickReq>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const SubscribeTickReq& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const SubscribeTickReq& from) {
    SubscribeTickReq::MergeImpl(*this, from);
  }
  private:
  static void MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg);
  public:
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  uint8_t* _InternalSerialize(
      uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _impl_._cached_size_.Get(); }

  private:
  void SharedCtor(::PROTOBUF_NAMESPACE_ID::Arena* arena, bool is_message_owned);
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(SubscribeTickReq* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "Quote.SubscribeTickReq";
  }
  protected:
  explicit SubscribeTickReq(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kStockListFieldNumber = 1,
  };
  // repeated .Stock stockList = 1;
  int stocklist_size() const;
  private:
  int _internal_stocklist_size() const;
  public:
  void clear_stocklist();
  ::Stock* mutable_stocklist(int index);
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::Stock >*
      mutable_stocklist();
  private:
  const ::Stock& _internal_stocklist(int index) const;
  ::Stock* _internal_add_stocklist();
  public:
  const ::Stock& stocklist(int index) const;
  ::Stock* add_stocklist();
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::Stock >&
      stocklist() const;

  // @@protoc_insertion_point(class_scope:Quote.SubscribeTickReq)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::Stock > stocklist_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_req_2fQuoteSubscribeTickReq_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// SubscribeTickReq

// repeated .Stock stockList = 1;
inline int SubscribeTickReq::_internal_stocklist_size() const {
  return _impl_.stocklist_.size();
}
inline int SubscribeTickReq::stocklist_size() const {
  return _internal_stocklist_size();
}
inline ::Stock* SubscribeTickReq::mutable_stocklist(int index) {
  // @@protoc_insertion_point(field_mutable:Quote.SubscribeTickReq.stockList)
  return _impl_.stocklist_.Mutable(index);
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::Stock >*
SubscribeTickReq::mutable_stocklist() {
  // @@protoc_insertion_point(field_mutable_list:Quote.SubscribeTickReq.stockList)
  return &_impl_.stocklist_;
}
inline const ::Stock& SubscribeTickReq::_internal_stocklist(int index) const {
  return _impl_.stocklist_.Get(index);
}
inline const ::Stock& SubscribeTickReq::stocklist(int index) const {
  // @@protoc_insertion_point(field_get:Quote.SubscribeTickReq.stockList)
  return _internal_stocklist(index);
}
inline ::Stock* SubscribeTickReq::_internal_add_stocklist() {
  return _impl_.stocklist_.Add();
}
inline ::Stock* SubscribeTickReq::add_stocklist() {
  ::Stock* _add = _internal_add_stocklist();
  // @@protoc_insertion_point(field_add:Quote.SubscribeTickReq.stockList)
  return _add;
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::Stock >&
SubscribeTickReq::stocklist() const {
  // @@protoc_insertion_point(field_list:Quote.SubscribeTickReq.stockList)
  return _impl_.stocklist_;
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace Quote

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_req_2fQuoteSubscribeTickReq_2eproto