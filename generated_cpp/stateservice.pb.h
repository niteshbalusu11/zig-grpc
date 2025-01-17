// Generated by the protocol buffer compiler.  DO NOT EDIT!
// NO CHECKED-IN PROTOBUF GENCODE
// source: stateservice.proto
// Protobuf C++ Version: 5.28.2

#ifndef GOOGLE_PROTOBUF_INCLUDED_stateservice_2eproto_2epb_2eh
#define GOOGLE_PROTOBUF_INCLUDED_stateservice_2eproto_2epb_2eh

#include <limits>
#include <string>
#include <type_traits>
#include <utility>

#include "google/protobuf/runtime_version.h"
#if PROTOBUF_VERSION != 5028002
#error "Protobuf C++ gencode is built with an incompatible version of"
#error "Protobuf C++ headers/runtime. See"
#error "https://protobuf.dev/support/cross-version-runtime-guarantee/#cpp"
#endif
#include "google/protobuf/io/coded_stream.h"
#include "google/protobuf/arena.h"
#include "google/protobuf/arenastring.h"
#include "google/protobuf/generated_message_bases.h"
#include "google/protobuf/generated_message_tctable_decl.h"
#include "google/protobuf/generated_message_util.h"
#include "google/protobuf/metadata_lite.h"
#include "google/protobuf/generated_message_reflection.h"
#include "google/protobuf/message.h"
#include "google/protobuf/repeated_field.h"  // IWYU pragma: export
#include "google/protobuf/extension_set.h"  // IWYU pragma: export
#include "google/protobuf/generated_enum_reflection.h"
#include "google/protobuf/unknown_field_set.h"
// @@protoc_insertion_point(includes)

// Must be included last.
#include "google/protobuf/port_def.inc"

#define PROTOBUF_INTERNAL_EXPORT_stateservice_2eproto

namespace google {
namespace protobuf {
namespace internal {
class AnyMetadata;
}  // namespace internal
}  // namespace protobuf
}  // namespace google

// Internal implementation detail -- do not use these members.
struct TableStruct_stateservice_2eproto {
  static const ::uint32_t offsets[];
};
extern const ::google::protobuf::internal::DescriptorTable
    descriptor_table_stateservice_2eproto;
namespace lnrpc {
class GetStateRequest;
struct GetStateRequestDefaultTypeInternal;
extern GetStateRequestDefaultTypeInternal _GetStateRequest_default_instance_;
class GetStateResponse;
struct GetStateResponseDefaultTypeInternal;
extern GetStateResponseDefaultTypeInternal _GetStateResponse_default_instance_;
class SubscribeStateRequest;
struct SubscribeStateRequestDefaultTypeInternal;
extern SubscribeStateRequestDefaultTypeInternal _SubscribeStateRequest_default_instance_;
class SubscribeStateResponse;
struct SubscribeStateResponseDefaultTypeInternal;
extern SubscribeStateResponseDefaultTypeInternal _SubscribeStateResponse_default_instance_;
}  // namespace lnrpc
namespace google {
namespace protobuf {
}  // namespace protobuf
}  // namespace google

namespace lnrpc {
enum WalletState : int {
  NON_EXISTING = 0,
  LOCKED = 1,
  UNLOCKED = 2,
  RPC_ACTIVE = 3,
  SERVER_ACTIVE = 4,
  WAITING_TO_START = 255,
  WalletState_INT_MIN_SENTINEL_DO_NOT_USE_ =
      std::numeric_limits<::int32_t>::min(),
  WalletState_INT_MAX_SENTINEL_DO_NOT_USE_ =
      std::numeric_limits<::int32_t>::max(),
};

bool WalletState_IsValid(int value);
extern const uint32_t WalletState_internal_data_[];
constexpr WalletState WalletState_MIN = static_cast<WalletState>(0);
constexpr WalletState WalletState_MAX = static_cast<WalletState>(255);
constexpr int WalletState_ARRAYSIZE = 255 + 1;
const ::google::protobuf::EnumDescriptor*
WalletState_descriptor();
template <typename T>
const std::string& WalletState_Name(T value) {
  static_assert(std::is_same<T, WalletState>::value ||
                    std::is_integral<T>::value,
                "Incorrect type passed to WalletState_Name().");
  return ::google::protobuf::internal::NameOfEnum(WalletState_descriptor(), value);
}
inline bool WalletState_Parse(absl::string_view name, WalletState* value) {
  return ::google::protobuf::internal::ParseNamedEnum<WalletState>(
      WalletState_descriptor(), name, value);
}

// ===================================================================


// -------------------------------------------------------------------

class SubscribeStateResponse final : public ::google::protobuf::Message
/* @@protoc_insertion_point(class_definition:lnrpc.SubscribeStateResponse) */ {
 public:
  inline SubscribeStateResponse() : SubscribeStateResponse(nullptr) {}
  ~SubscribeStateResponse() PROTOBUF_FINAL;
  template <typename = void>
  explicit PROTOBUF_CONSTEXPR SubscribeStateResponse(
      ::google::protobuf::internal::ConstantInitialized);

  inline SubscribeStateResponse(const SubscribeStateResponse& from) : SubscribeStateResponse(nullptr, from) {}
  inline SubscribeStateResponse(SubscribeStateResponse&& from) noexcept
      : SubscribeStateResponse(nullptr, std::move(from)) {}
  inline SubscribeStateResponse& operator=(const SubscribeStateResponse& from) {
    CopyFrom(from);
    return *this;
  }
  inline SubscribeStateResponse& operator=(SubscribeStateResponse&& from) noexcept {
    if (this == &from) return *this;
    if (GetArena() == from.GetArena()
#ifdef PROTOBUF_FORCE_COPY_IN_MOVE
        && GetArena() != nullptr
#endif  // !PROTOBUF_FORCE_COPY_IN_MOVE
    ) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const
      ABSL_ATTRIBUTE_LIFETIME_BOUND {
    return _internal_metadata_.unknown_fields<::google::protobuf::UnknownFieldSet>(::google::protobuf::UnknownFieldSet::default_instance);
  }
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields()
      ABSL_ATTRIBUTE_LIFETIME_BOUND {
    return _internal_metadata_.mutable_unknown_fields<::google::protobuf::UnknownFieldSet>();
  }

  static const ::google::protobuf::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::google::protobuf::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::google::protobuf::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const SubscribeStateResponse& default_instance() {
    return *internal_default_instance();
  }
  static inline const SubscribeStateResponse* internal_default_instance() {
    return reinterpret_cast<const SubscribeStateResponse*>(
        &_SubscribeStateResponse_default_instance_);
  }
  static constexpr int kIndexInFileMessages = 1;
  friend void swap(SubscribeStateResponse& a, SubscribeStateResponse& b) { a.Swap(&b); }
  inline void Swap(SubscribeStateResponse* other) {
    if (other == this) return;
#ifdef PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetArena() != nullptr && GetArena() == other->GetArena()) {
#else   // PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetArena() == other->GetArena()) {
#endif  // !PROTOBUF_FORCE_COPY_IN_SWAP
      InternalSwap(other);
    } else {
      ::google::protobuf::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(SubscribeStateResponse* other) {
    if (other == this) return;
    ABSL_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  SubscribeStateResponse* New(::google::protobuf::Arena* arena = nullptr) const PROTOBUF_FINAL {
    return ::google::protobuf::Message::DefaultConstruct<SubscribeStateResponse>(arena);
  }
  using ::google::protobuf::Message::CopyFrom;
  void CopyFrom(const SubscribeStateResponse& from);
  using ::google::protobuf::Message::MergeFrom;
  void MergeFrom(const SubscribeStateResponse& from) { SubscribeStateResponse::MergeImpl(*this, from); }

  private:
  static void MergeImpl(
      ::google::protobuf::MessageLite& to_msg,
      const ::google::protobuf::MessageLite& from_msg);

  public:
  bool IsInitialized() const {
    return true;
  }
  ABSL_ATTRIBUTE_REINITIALIZES void Clear() PROTOBUF_FINAL;
  #if defined(PROTOBUF_CUSTOM_VTABLE)
  private:
  static ::size_t ByteSizeLong(const ::google::protobuf::MessageLite& msg);
  static ::uint8_t* _InternalSerialize(
      const MessageLite& msg, ::uint8_t* target,
      ::google::protobuf::io::EpsCopyOutputStream* stream);

  public:
  ::size_t ByteSizeLong() const { return ByteSizeLong(*this); }
  ::uint8_t* _InternalSerialize(
      ::uint8_t* target,
      ::google::protobuf::io::EpsCopyOutputStream* stream) const {
    return _InternalSerialize(*this, target, stream);
  }
  #else   // PROTOBUF_CUSTOM_VTABLE
  ::size_t ByteSizeLong() const final;
  ::uint8_t* _InternalSerialize(
      ::uint8_t* target,
      ::google::protobuf::io::EpsCopyOutputStream* stream) const final;
  #endif  // PROTOBUF_CUSTOM_VTABLE
  int GetCachedSize() const { return _impl_._cached_size_.Get(); }

  private:
  void SharedCtor(::google::protobuf::Arena* arena);
  void SharedDtor();
  void InternalSwap(SubscribeStateResponse* other);
 private:
  friend class ::google::protobuf::internal::AnyMetadata;
  static ::absl::string_view FullMessageName() { return "lnrpc.SubscribeStateResponse"; }

 protected:
  explicit SubscribeStateResponse(::google::protobuf::Arena* arena);
  SubscribeStateResponse(::google::protobuf::Arena* arena, const SubscribeStateResponse& from);
  SubscribeStateResponse(::google::protobuf::Arena* arena, SubscribeStateResponse&& from) noexcept
      : SubscribeStateResponse(arena) {
    *this = ::std::move(from);
  }
  const ::google::protobuf::Message::ClassData* GetClassData() const PROTOBUF_FINAL;
  static const ::google::protobuf::Message::ClassDataFull _class_data_;

 public:
  ::google::protobuf::Metadata GetMetadata() const;
  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------
  enum : int {
    kStateFieldNumber = 1,
  };
  // .lnrpc.WalletState state = 1;
  void clear_state() ;
  ::lnrpc::WalletState state() const;
  void set_state(::lnrpc::WalletState value);

  private:
  ::lnrpc::WalletState _internal_state() const;
  void _internal_set_state(::lnrpc::WalletState value);

  public:
  // @@protoc_insertion_point(class_scope:lnrpc.SubscribeStateResponse)
 private:
  class _Internal;
  friend class ::google::protobuf::internal::TcParser;
  static const ::google::protobuf::internal::TcParseTable<
      0, 1, 0,
      0, 2>
      _table_;

  static constexpr const void* _raw_default_instance_ =
      &_SubscribeStateResponse_default_instance_;

  friend class ::google::protobuf::MessageLite;
  friend class ::google::protobuf::Arena;
  template <typename T>
  friend class ::google::protobuf::Arena::InternalHelper;
  using InternalArenaConstructable_ = void;
  using DestructorSkippable_ = void;
  struct Impl_ {
    inline explicit constexpr Impl_(
        ::google::protobuf::internal::ConstantInitialized) noexcept;
    inline explicit Impl_(::google::protobuf::internal::InternalVisibility visibility,
                          ::google::protobuf::Arena* arena);
    inline explicit Impl_(::google::protobuf::internal::InternalVisibility visibility,
                          ::google::protobuf::Arena* arena, const Impl_& from,
                          const SubscribeStateResponse& from_msg);
    int state_;
    mutable ::google::protobuf::internal::CachedSize _cached_size_;
    PROTOBUF_TSAN_DECLARE_MEMBER
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_stateservice_2eproto;
};
// -------------------------------------------------------------------

class SubscribeStateRequest final : public ::google::protobuf::internal::ZeroFieldsBase
/* @@protoc_insertion_point(class_definition:lnrpc.SubscribeStateRequest) */ {
 public:
  inline SubscribeStateRequest() : SubscribeStateRequest(nullptr) {}
  template <typename = void>
  explicit PROTOBUF_CONSTEXPR SubscribeStateRequest(
      ::google::protobuf::internal::ConstantInitialized);

  inline SubscribeStateRequest(const SubscribeStateRequest& from) : SubscribeStateRequest(nullptr, from) {}
  inline SubscribeStateRequest(SubscribeStateRequest&& from) noexcept
      : SubscribeStateRequest(nullptr, std::move(from)) {}
  inline SubscribeStateRequest& operator=(const SubscribeStateRequest& from) {
    CopyFrom(from);
    return *this;
  }
  inline SubscribeStateRequest& operator=(SubscribeStateRequest&& from) noexcept {
    if (this == &from) return *this;
    if (GetArena() == from.GetArena()
#ifdef PROTOBUF_FORCE_COPY_IN_MOVE
        && GetArena() != nullptr
#endif  // !PROTOBUF_FORCE_COPY_IN_MOVE
    ) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const
      ABSL_ATTRIBUTE_LIFETIME_BOUND {
    return _internal_metadata_.unknown_fields<::google::protobuf::UnknownFieldSet>(::google::protobuf::UnknownFieldSet::default_instance);
  }
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields()
      ABSL_ATTRIBUTE_LIFETIME_BOUND {
    return _internal_metadata_.mutable_unknown_fields<::google::protobuf::UnknownFieldSet>();
  }

  static const ::google::protobuf::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::google::protobuf::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::google::protobuf::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const SubscribeStateRequest& default_instance() {
    return *internal_default_instance();
  }
  static inline const SubscribeStateRequest* internal_default_instance() {
    return reinterpret_cast<const SubscribeStateRequest*>(
        &_SubscribeStateRequest_default_instance_);
  }
  static constexpr int kIndexInFileMessages = 0;
  friend void swap(SubscribeStateRequest& a, SubscribeStateRequest& b) { a.Swap(&b); }
  inline void Swap(SubscribeStateRequest* other) {
    if (other == this) return;
#ifdef PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetArena() != nullptr && GetArena() == other->GetArena()) {
#else   // PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetArena() == other->GetArena()) {
#endif  // !PROTOBUF_FORCE_COPY_IN_SWAP
      InternalSwap(other);
    } else {
      ::google::protobuf::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(SubscribeStateRequest* other) {
    if (other == this) return;
    ABSL_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  SubscribeStateRequest* New(::google::protobuf::Arena* arena = nullptr) const PROTOBUF_FINAL {
    return ::google::protobuf::internal::ZeroFieldsBase::DefaultConstruct<SubscribeStateRequest>(arena);
  }
  using ::google::protobuf::internal::ZeroFieldsBase::CopyFrom;
  inline void CopyFrom(const SubscribeStateRequest& from) {
    ::google::protobuf::internal::ZeroFieldsBase::CopyImpl(*this, from);
  }
  using ::google::protobuf::internal::ZeroFieldsBase::MergeFrom;
  void MergeFrom(const SubscribeStateRequest& from) {
    ::google::protobuf::internal::ZeroFieldsBase::MergeImpl(*this, from);
  }

  public:
  bool IsInitialized() const {
    return true;
  }
 private:
  friend class ::google::protobuf::internal::AnyMetadata;
  static ::absl::string_view FullMessageName() { return "lnrpc.SubscribeStateRequest"; }

 protected:
  explicit SubscribeStateRequest(::google::protobuf::Arena* arena);
  SubscribeStateRequest(::google::protobuf::Arena* arena, const SubscribeStateRequest& from);
  SubscribeStateRequest(::google::protobuf::Arena* arena, SubscribeStateRequest&& from) noexcept
      : SubscribeStateRequest(arena) {
    *this = ::std::move(from);
  }
  const ::google::protobuf::internal::ZeroFieldsBase::ClassData* GetClassData() const PROTOBUF_FINAL;
  static const ::google::protobuf::internal::ZeroFieldsBase::ClassDataFull _class_data_;

 public:
  ::google::protobuf::Metadata GetMetadata() const;
  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------
  // @@protoc_insertion_point(class_scope:lnrpc.SubscribeStateRequest)
 private:
  class _Internal;
  friend class ::google::protobuf::internal::TcParser;
  static const ::google::protobuf::internal::TcParseTable<
      0, 0, 0,
      0, 2>
      _table_;

  static constexpr const void* _raw_default_instance_ =
      &_SubscribeStateRequest_default_instance_;

  friend class ::google::protobuf::MessageLite;
  friend class ::google::protobuf::Arena;
  template <typename T>
  friend class ::google::protobuf::Arena::InternalHelper;
  using InternalArenaConstructable_ = void;
  using DestructorSkippable_ = void;
  struct Impl_ {
    inline explicit constexpr Impl_(
        ::google::protobuf::internal::ConstantInitialized) noexcept;
    inline explicit Impl_(::google::protobuf::internal::InternalVisibility visibility,
                          ::google::protobuf::Arena* arena);
    inline explicit Impl_(::google::protobuf::internal::InternalVisibility visibility,
                          ::google::protobuf::Arena* arena, const Impl_& from,
                          const SubscribeStateRequest& from_msg);
    PROTOBUF_TSAN_DECLARE_MEMBER
  };
  friend struct ::TableStruct_stateservice_2eproto;
};
// -------------------------------------------------------------------

class GetStateResponse final : public ::google::protobuf::Message
/* @@protoc_insertion_point(class_definition:lnrpc.GetStateResponse) */ {
 public:
  inline GetStateResponse() : GetStateResponse(nullptr) {}
  ~GetStateResponse() PROTOBUF_FINAL;
  template <typename = void>
  explicit PROTOBUF_CONSTEXPR GetStateResponse(
      ::google::protobuf::internal::ConstantInitialized);

  inline GetStateResponse(const GetStateResponse& from) : GetStateResponse(nullptr, from) {}
  inline GetStateResponse(GetStateResponse&& from) noexcept
      : GetStateResponse(nullptr, std::move(from)) {}
  inline GetStateResponse& operator=(const GetStateResponse& from) {
    CopyFrom(from);
    return *this;
  }
  inline GetStateResponse& operator=(GetStateResponse&& from) noexcept {
    if (this == &from) return *this;
    if (GetArena() == from.GetArena()
#ifdef PROTOBUF_FORCE_COPY_IN_MOVE
        && GetArena() != nullptr
#endif  // !PROTOBUF_FORCE_COPY_IN_MOVE
    ) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const
      ABSL_ATTRIBUTE_LIFETIME_BOUND {
    return _internal_metadata_.unknown_fields<::google::protobuf::UnknownFieldSet>(::google::protobuf::UnknownFieldSet::default_instance);
  }
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields()
      ABSL_ATTRIBUTE_LIFETIME_BOUND {
    return _internal_metadata_.mutable_unknown_fields<::google::protobuf::UnknownFieldSet>();
  }

  static const ::google::protobuf::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::google::protobuf::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::google::protobuf::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const GetStateResponse& default_instance() {
    return *internal_default_instance();
  }
  static inline const GetStateResponse* internal_default_instance() {
    return reinterpret_cast<const GetStateResponse*>(
        &_GetStateResponse_default_instance_);
  }
  static constexpr int kIndexInFileMessages = 3;
  friend void swap(GetStateResponse& a, GetStateResponse& b) { a.Swap(&b); }
  inline void Swap(GetStateResponse* other) {
    if (other == this) return;
#ifdef PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetArena() != nullptr && GetArena() == other->GetArena()) {
#else   // PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetArena() == other->GetArena()) {
#endif  // !PROTOBUF_FORCE_COPY_IN_SWAP
      InternalSwap(other);
    } else {
      ::google::protobuf::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(GetStateResponse* other) {
    if (other == this) return;
    ABSL_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  GetStateResponse* New(::google::protobuf::Arena* arena = nullptr) const PROTOBUF_FINAL {
    return ::google::protobuf::Message::DefaultConstruct<GetStateResponse>(arena);
  }
  using ::google::protobuf::Message::CopyFrom;
  void CopyFrom(const GetStateResponse& from);
  using ::google::protobuf::Message::MergeFrom;
  void MergeFrom(const GetStateResponse& from) { GetStateResponse::MergeImpl(*this, from); }

  private:
  static void MergeImpl(
      ::google::protobuf::MessageLite& to_msg,
      const ::google::protobuf::MessageLite& from_msg);

  public:
  bool IsInitialized() const {
    return true;
  }
  ABSL_ATTRIBUTE_REINITIALIZES void Clear() PROTOBUF_FINAL;
  #if defined(PROTOBUF_CUSTOM_VTABLE)
  private:
  static ::size_t ByteSizeLong(const ::google::protobuf::MessageLite& msg);
  static ::uint8_t* _InternalSerialize(
      const MessageLite& msg, ::uint8_t* target,
      ::google::protobuf::io::EpsCopyOutputStream* stream);

  public:
  ::size_t ByteSizeLong() const { return ByteSizeLong(*this); }
  ::uint8_t* _InternalSerialize(
      ::uint8_t* target,
      ::google::protobuf::io::EpsCopyOutputStream* stream) const {
    return _InternalSerialize(*this, target, stream);
  }
  #else   // PROTOBUF_CUSTOM_VTABLE
  ::size_t ByteSizeLong() const final;
  ::uint8_t* _InternalSerialize(
      ::uint8_t* target,
      ::google::protobuf::io::EpsCopyOutputStream* stream) const final;
  #endif  // PROTOBUF_CUSTOM_VTABLE
  int GetCachedSize() const { return _impl_._cached_size_.Get(); }

  private:
  void SharedCtor(::google::protobuf::Arena* arena);
  void SharedDtor();
  void InternalSwap(GetStateResponse* other);
 private:
  friend class ::google::protobuf::internal::AnyMetadata;
  static ::absl::string_view FullMessageName() { return "lnrpc.GetStateResponse"; }

 protected:
  explicit GetStateResponse(::google::protobuf::Arena* arena);
  GetStateResponse(::google::protobuf::Arena* arena, const GetStateResponse& from);
  GetStateResponse(::google::protobuf::Arena* arena, GetStateResponse&& from) noexcept
      : GetStateResponse(arena) {
    *this = ::std::move(from);
  }
  const ::google::protobuf::Message::ClassData* GetClassData() const PROTOBUF_FINAL;
  static const ::google::protobuf::Message::ClassDataFull _class_data_;

 public:
  ::google::protobuf::Metadata GetMetadata() const;
  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------
  enum : int {
    kStateFieldNumber = 1,
  };
  // .lnrpc.WalletState state = 1;
  void clear_state() ;
  ::lnrpc::WalletState state() const;
  void set_state(::lnrpc::WalletState value);

  private:
  ::lnrpc::WalletState _internal_state() const;
  void _internal_set_state(::lnrpc::WalletState value);

  public:
  // @@protoc_insertion_point(class_scope:lnrpc.GetStateResponse)
 private:
  class _Internal;
  friend class ::google::protobuf::internal::TcParser;
  static const ::google::protobuf::internal::TcParseTable<
      0, 1, 0,
      0, 2>
      _table_;

  static constexpr const void* _raw_default_instance_ =
      &_GetStateResponse_default_instance_;

  friend class ::google::protobuf::MessageLite;
  friend class ::google::protobuf::Arena;
  template <typename T>
  friend class ::google::protobuf::Arena::InternalHelper;
  using InternalArenaConstructable_ = void;
  using DestructorSkippable_ = void;
  struct Impl_ {
    inline explicit constexpr Impl_(
        ::google::protobuf::internal::ConstantInitialized) noexcept;
    inline explicit Impl_(::google::protobuf::internal::InternalVisibility visibility,
                          ::google::protobuf::Arena* arena);
    inline explicit Impl_(::google::protobuf::internal::InternalVisibility visibility,
                          ::google::protobuf::Arena* arena, const Impl_& from,
                          const GetStateResponse& from_msg);
    int state_;
    mutable ::google::protobuf::internal::CachedSize _cached_size_;
    PROTOBUF_TSAN_DECLARE_MEMBER
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_stateservice_2eproto;
};
// -------------------------------------------------------------------

class GetStateRequest final : public ::google::protobuf::internal::ZeroFieldsBase
/* @@protoc_insertion_point(class_definition:lnrpc.GetStateRequest) */ {
 public:
  inline GetStateRequest() : GetStateRequest(nullptr) {}
  template <typename = void>
  explicit PROTOBUF_CONSTEXPR GetStateRequest(
      ::google::protobuf::internal::ConstantInitialized);

  inline GetStateRequest(const GetStateRequest& from) : GetStateRequest(nullptr, from) {}
  inline GetStateRequest(GetStateRequest&& from) noexcept
      : GetStateRequest(nullptr, std::move(from)) {}
  inline GetStateRequest& operator=(const GetStateRequest& from) {
    CopyFrom(from);
    return *this;
  }
  inline GetStateRequest& operator=(GetStateRequest&& from) noexcept {
    if (this == &from) return *this;
    if (GetArena() == from.GetArena()
#ifdef PROTOBUF_FORCE_COPY_IN_MOVE
        && GetArena() != nullptr
#endif  // !PROTOBUF_FORCE_COPY_IN_MOVE
    ) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const
      ABSL_ATTRIBUTE_LIFETIME_BOUND {
    return _internal_metadata_.unknown_fields<::google::protobuf::UnknownFieldSet>(::google::protobuf::UnknownFieldSet::default_instance);
  }
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields()
      ABSL_ATTRIBUTE_LIFETIME_BOUND {
    return _internal_metadata_.mutable_unknown_fields<::google::protobuf::UnknownFieldSet>();
  }

  static const ::google::protobuf::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::google::protobuf::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::google::protobuf::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const GetStateRequest& default_instance() {
    return *internal_default_instance();
  }
  static inline const GetStateRequest* internal_default_instance() {
    return reinterpret_cast<const GetStateRequest*>(
        &_GetStateRequest_default_instance_);
  }
  static constexpr int kIndexInFileMessages = 2;
  friend void swap(GetStateRequest& a, GetStateRequest& b) { a.Swap(&b); }
  inline void Swap(GetStateRequest* other) {
    if (other == this) return;
#ifdef PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetArena() != nullptr && GetArena() == other->GetArena()) {
#else   // PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetArena() == other->GetArena()) {
#endif  // !PROTOBUF_FORCE_COPY_IN_SWAP
      InternalSwap(other);
    } else {
      ::google::protobuf::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(GetStateRequest* other) {
    if (other == this) return;
    ABSL_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  GetStateRequest* New(::google::protobuf::Arena* arena = nullptr) const PROTOBUF_FINAL {
    return ::google::protobuf::internal::ZeroFieldsBase::DefaultConstruct<GetStateRequest>(arena);
  }
  using ::google::protobuf::internal::ZeroFieldsBase::CopyFrom;
  inline void CopyFrom(const GetStateRequest& from) {
    ::google::protobuf::internal::ZeroFieldsBase::CopyImpl(*this, from);
  }
  using ::google::protobuf::internal::ZeroFieldsBase::MergeFrom;
  void MergeFrom(const GetStateRequest& from) {
    ::google::protobuf::internal::ZeroFieldsBase::MergeImpl(*this, from);
  }

  public:
  bool IsInitialized() const {
    return true;
  }
 private:
  friend class ::google::protobuf::internal::AnyMetadata;
  static ::absl::string_view FullMessageName() { return "lnrpc.GetStateRequest"; }

 protected:
  explicit GetStateRequest(::google::protobuf::Arena* arena);
  GetStateRequest(::google::protobuf::Arena* arena, const GetStateRequest& from);
  GetStateRequest(::google::protobuf::Arena* arena, GetStateRequest&& from) noexcept
      : GetStateRequest(arena) {
    *this = ::std::move(from);
  }
  const ::google::protobuf::internal::ZeroFieldsBase::ClassData* GetClassData() const PROTOBUF_FINAL;
  static const ::google::protobuf::internal::ZeroFieldsBase::ClassDataFull _class_data_;

 public:
  ::google::protobuf::Metadata GetMetadata() const;
  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------
  // @@protoc_insertion_point(class_scope:lnrpc.GetStateRequest)
 private:
  class _Internal;
  friend class ::google::protobuf::internal::TcParser;
  static const ::google::protobuf::internal::TcParseTable<
      0, 0, 0,
      0, 2>
      _table_;

  static constexpr const void* _raw_default_instance_ =
      &_GetStateRequest_default_instance_;

  friend class ::google::protobuf::MessageLite;
  friend class ::google::protobuf::Arena;
  template <typename T>
  friend class ::google::protobuf::Arena::InternalHelper;
  using InternalArenaConstructable_ = void;
  using DestructorSkippable_ = void;
  struct Impl_ {
    inline explicit constexpr Impl_(
        ::google::protobuf::internal::ConstantInitialized) noexcept;
    inline explicit Impl_(::google::protobuf::internal::InternalVisibility visibility,
                          ::google::protobuf::Arena* arena);
    inline explicit Impl_(::google::protobuf::internal::InternalVisibility visibility,
                          ::google::protobuf::Arena* arena, const Impl_& from,
                          const GetStateRequest& from_msg);
    PROTOBUF_TSAN_DECLARE_MEMBER
  };
  friend struct ::TableStruct_stateservice_2eproto;
};

// ===================================================================




// ===================================================================


#ifdef __GNUC__
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// -------------------------------------------------------------------

// SubscribeStateRequest

// -------------------------------------------------------------------

// SubscribeStateResponse

// .lnrpc.WalletState state = 1;
inline void SubscribeStateResponse::clear_state() {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.state_ = 0;
}
inline ::lnrpc::WalletState SubscribeStateResponse::state() const {
  // @@protoc_insertion_point(field_get:lnrpc.SubscribeStateResponse.state)
  return _internal_state();
}
inline void SubscribeStateResponse::set_state(::lnrpc::WalletState value) {
  _internal_set_state(value);
  // @@protoc_insertion_point(field_set:lnrpc.SubscribeStateResponse.state)
}
inline ::lnrpc::WalletState SubscribeStateResponse::_internal_state() const {
  ::google::protobuf::internal::TSanRead(&_impl_);
  return static_cast<::lnrpc::WalletState>(_impl_.state_);
}
inline void SubscribeStateResponse::_internal_set_state(::lnrpc::WalletState value) {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.state_ = value;
}

// -------------------------------------------------------------------

// GetStateRequest

// -------------------------------------------------------------------

// GetStateResponse

// .lnrpc.WalletState state = 1;
inline void GetStateResponse::clear_state() {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.state_ = 0;
}
inline ::lnrpc::WalletState GetStateResponse::state() const {
  // @@protoc_insertion_point(field_get:lnrpc.GetStateResponse.state)
  return _internal_state();
}
inline void GetStateResponse::set_state(::lnrpc::WalletState value) {
  _internal_set_state(value);
  // @@protoc_insertion_point(field_set:lnrpc.GetStateResponse.state)
}
inline ::lnrpc::WalletState GetStateResponse::_internal_state() const {
  ::google::protobuf::internal::TSanRead(&_impl_);
  return static_cast<::lnrpc::WalletState>(_impl_.state_);
}
inline void GetStateResponse::_internal_set_state(::lnrpc::WalletState value) {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.state_ = value;
}

#ifdef __GNUC__
#pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)
}  // namespace lnrpc


namespace google {
namespace protobuf {

template <>
struct is_proto_enum<::lnrpc::WalletState> : std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor<::lnrpc::WalletState>() {
  return ::lnrpc::WalletState_descriptor();
}

}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)

#include "google/protobuf/port_undef.inc"

#endif  // GOOGLE_PROTOBUF_INCLUDED_stateservice_2eproto_2epb_2eh
