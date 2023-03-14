// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: stanley_controller_conf.proto

#include "stanley_controller_conf.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>

extern PROTOBUF_INTERNAL_EXPORT_pid_5fconf_2eproto ::google::protobuf::internal::SCCInfo<0> scc_info_PidConf_pid_5fconf_2eproto;
namespace controller {
class StanleyControllerConfDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<StanleyControllerConf> _instance;
} _StanleyControllerConf_default_instance_;
}  // namespace controller
static void InitDefaultsStanleyControllerConf_stanley_5fcontroller_5fconf_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::controller::_StanleyControllerConf_default_instance_;
    new (ptr) ::controller::StanleyControllerConf();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::controller::StanleyControllerConf::InitAsDefaultInstance();
}

::google::protobuf::internal::SCCInfo<1> scc_info_StanleyControllerConf_stanley_5fcontroller_5fconf_2eproto =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 1, InitDefaultsStanleyControllerConf_stanley_5fcontroller_5fconf_2eproto}, {
      &scc_info_PidConf_pid_5fconf_2eproto.base,}};

void InitDefaults_stanley_5fcontroller_5fconf_2eproto() {
  ::google::protobuf::internal::InitSCC(&scc_info_StanleyControllerConf_stanley_5fcontroller_5fconf_2eproto.base);
}

::google::protobuf::Metadata file_level_metadata_stanley_5fcontroller_5fconf_2eproto[1];
constexpr ::google::protobuf::EnumDescriptor const** file_level_enum_descriptors_stanley_5fcontroller_5fconf_2eproto = nullptr;
constexpr ::google::protobuf::ServiceDescriptor const** file_level_service_descriptors_stanley_5fcontroller_5fconf_2eproto = nullptr;

const ::google::protobuf::uint32 TableStruct_stanley_5fcontroller_5fconf_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  PROTOBUF_FIELD_OFFSET(::controller::StanleyControllerConf, _has_bits_),
  PROTOBUF_FIELD_OFFSET(::controller::StanleyControllerConf, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::controller::StanleyControllerConf, station_pid_conf_),
  PROTOBUF_FIELD_OFFSET(::controller::StanleyControllerConf, dt_),
  PROTOBUF_FIELD_OFFSET(::controller::StanleyControllerConf, speed_controller_input_limit_),
  PROTOBUF_FIELD_OFFSET(::controller::StanleyControllerConf, cutoff_freq_),
  PROTOBUF_FIELD_OFFSET(::controller::StanleyControllerConf, mean_filter_window_size_),
  PROTOBUF_FIELD_OFFSET(::controller::StanleyControllerConf, k_),
  0,
  4,
  1,
  2,
  3,
  5,
};
static const ::google::protobuf::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, 11, sizeof(::controller::StanleyControllerConf)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&::controller::_StanleyControllerConf_default_instance_),
};

::google::protobuf::internal::AssignDescriptorsTable assign_descriptors_table_stanley_5fcontroller_5fconf_2eproto = {
  {}, AddDescriptors_stanley_5fcontroller_5fconf_2eproto, "stanley_controller_conf.proto", schemas,
  file_default_instances, TableStruct_stanley_5fcontroller_5fconf_2eproto::offsets,
  file_level_metadata_stanley_5fcontroller_5fconf_2eproto, 1, file_level_enum_descriptors_stanley_5fcontroller_5fconf_2eproto, file_level_service_descriptors_stanley_5fcontroller_5fconf_2eproto,
};

const char descriptor_table_protodef_stanley_5fcontroller_5fconf_2eproto[] =
  "\n\035stanley_controller_conf.proto\022\ncontrol"
  "ler\032\016pid_conf.proto\"\302\001\n\025StanleyControlle"
  "rConf\022-\n\020station_pid_conf\030\001 \001(\0132\023.contro"
  "ller.PidConf\022\020\n\002dt\030\002 \001(\001:\0040.01\022$\n\034speed_"
  "controller_input_limit\030\003 \001(\001\022\023\n\013cutoff_f"
  "req\030\004 \001(\001\022\037\n\027mean_filter_window_size\030\005 \001"
  "(\001\022\014\n\001k\030\006 \001(\001:\0011"
  ;
::google::protobuf::internal::DescriptorTable descriptor_table_stanley_5fcontroller_5fconf_2eproto = {
  false, InitDefaults_stanley_5fcontroller_5fconf_2eproto, 
  descriptor_table_protodef_stanley_5fcontroller_5fconf_2eproto,
  "stanley_controller_conf.proto", &assign_descriptors_table_stanley_5fcontroller_5fconf_2eproto, 256,
};

void AddDescriptors_stanley_5fcontroller_5fconf_2eproto() {
  static constexpr ::google::protobuf::internal::InitFunc deps[1] =
  {
    ::AddDescriptors_pid_5fconf_2eproto,
  };
 ::google::protobuf::internal::AddDescriptors(&descriptor_table_stanley_5fcontroller_5fconf_2eproto, deps, 1);
}

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_stanley_5fcontroller_5fconf_2eproto = []() { AddDescriptors_stanley_5fcontroller_5fconf_2eproto(); return true; }();
namespace controller {

// ===================================================================

void StanleyControllerConf::InitAsDefaultInstance() {
  ::controller::_StanleyControllerConf_default_instance_._instance.get_mutable()->station_pid_conf_ = const_cast< ::controller::PidConf*>(
      ::controller::PidConf::internal_default_instance());
}
class StanleyControllerConf::HasBitSetters {
 public:
  static const ::controller::PidConf& station_pid_conf(const StanleyControllerConf* msg);
  static void set_has_station_pid_conf(StanleyControllerConf* msg) {
    msg->_has_bits_[0] |= 0x00000001u;
  }
  static void set_has_dt(StanleyControllerConf* msg) {
    msg->_has_bits_[0] |= 0x00000010u;
  }
  static void set_has_speed_controller_input_limit(StanleyControllerConf* msg) {
    msg->_has_bits_[0] |= 0x00000002u;
  }
  static void set_has_cutoff_freq(StanleyControllerConf* msg) {
    msg->_has_bits_[0] |= 0x00000004u;
  }
  static void set_has_mean_filter_window_size(StanleyControllerConf* msg) {
    msg->_has_bits_[0] |= 0x00000008u;
  }
  static void set_has_k(StanleyControllerConf* msg) {
    msg->_has_bits_[0] |= 0x00000020u;
  }
};

const ::controller::PidConf&
StanleyControllerConf::HasBitSetters::station_pid_conf(const StanleyControllerConf* msg) {
  return *msg->station_pid_conf_;
}
void StanleyControllerConf::clear_station_pid_conf() {
  if (station_pid_conf_ != nullptr) station_pid_conf_->Clear();
  _has_bits_[0] &= ~0x00000001u;
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int StanleyControllerConf::kStationPidConfFieldNumber;
const int StanleyControllerConf::kDtFieldNumber;
const int StanleyControllerConf::kSpeedControllerInputLimitFieldNumber;
const int StanleyControllerConf::kCutoffFreqFieldNumber;
const int StanleyControllerConf::kMeanFilterWindowSizeFieldNumber;
const int StanleyControllerConf::kKFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

StanleyControllerConf::StanleyControllerConf()
  : ::google::protobuf::Message(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:controller.StanleyControllerConf)
}
StanleyControllerConf::StanleyControllerConf(const StanleyControllerConf& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(nullptr),
      _has_bits_(from._has_bits_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  if (from.has_station_pid_conf()) {
    station_pid_conf_ = new ::controller::PidConf(*from.station_pid_conf_);
  } else {
    station_pid_conf_ = nullptr;
  }
  ::memcpy(&speed_controller_input_limit_, &from.speed_controller_input_limit_,
    static_cast<size_t>(reinterpret_cast<char*>(&k_) -
    reinterpret_cast<char*>(&speed_controller_input_limit_)) + sizeof(k_));
  // @@protoc_insertion_point(copy_constructor:controller.StanleyControllerConf)
}

void StanleyControllerConf::SharedCtor() {
  ::google::protobuf::internal::InitSCC(
      &scc_info_StanleyControllerConf_stanley_5fcontroller_5fconf_2eproto.base);
  ::memset(&station_pid_conf_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&mean_filter_window_size_) -
      reinterpret_cast<char*>(&station_pid_conf_)) + sizeof(mean_filter_window_size_));
  dt_ = 0.01;
  k_ = 1;
}

StanleyControllerConf::~StanleyControllerConf() {
  // @@protoc_insertion_point(destructor:controller.StanleyControllerConf)
  SharedDtor();
}

void StanleyControllerConf::SharedDtor() {
  if (this != internal_default_instance()) delete station_pid_conf_;
}

void StanleyControllerConf::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const StanleyControllerConf& StanleyControllerConf::default_instance() {
  ::google::protobuf::internal::InitSCC(&::scc_info_StanleyControllerConf_stanley_5fcontroller_5fconf_2eproto.base);
  return *internal_default_instance();
}


void StanleyControllerConf::Clear() {
// @@protoc_insertion_point(message_clear_start:controller.StanleyControllerConf)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x00000001u) {
    GOOGLE_DCHECK(station_pid_conf_ != nullptr);
    station_pid_conf_->Clear();
  }
  if (cached_has_bits & 0x0000003eu) {
    ::memset(&speed_controller_input_limit_, 0, static_cast<size_t>(
        reinterpret_cast<char*>(&mean_filter_window_size_) -
        reinterpret_cast<char*>(&speed_controller_input_limit_)) + sizeof(mean_filter_window_size_));
    dt_ = 0.01;
    k_ = 1;
  }
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

#if GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
const char* StanleyControllerConf::_InternalParse(const char* begin, const char* end, void* object,
                  ::google::protobuf::internal::ParseContext* ctx) {
  auto msg = static_cast<StanleyControllerConf*>(object);
  ::google::protobuf::int32 size; (void)size;
  int depth; (void)depth;
  ::google::protobuf::uint32 tag;
  ::google::protobuf::internal::ParseFunc parser_till_end; (void)parser_till_end;
  auto ptr = begin;
  while (ptr < end) {
    ptr = ::google::protobuf::io::Parse32(ptr, &tag);
    GOOGLE_PROTOBUF_PARSER_ASSERT(ptr);
    switch (tag >> 3) {
      // optional .controller.PidConf station_pid_conf = 1;
      case 1: {
        if (static_cast<::google::protobuf::uint8>(tag) != 10) goto handle_unusual;
        ptr = ::google::protobuf::io::ReadSize(ptr, &size);
        GOOGLE_PROTOBUF_PARSER_ASSERT(ptr);
        parser_till_end = ::controller::PidConf::_InternalParse;
        object = msg->mutable_station_pid_conf();
        if (size > end - ptr) goto len_delim_till_end;
        ptr += size;
        GOOGLE_PROTOBUF_PARSER_ASSERT(ctx->ParseExactRange(
            {parser_till_end, object}, ptr - size, ptr));
        break;
      }
      // optional double dt = 2 [default = 0.01];
      case 2: {
        if (static_cast<::google::protobuf::uint8>(tag) != 17) goto handle_unusual;
        msg->set_dt(::google::protobuf::io::UnalignedLoad<double>(ptr));
        ptr += sizeof(double);
        break;
      }
      // optional double speed_controller_input_limit = 3;
      case 3: {
        if (static_cast<::google::protobuf::uint8>(tag) != 25) goto handle_unusual;
        msg->set_speed_controller_input_limit(::google::protobuf::io::UnalignedLoad<double>(ptr));
        ptr += sizeof(double);
        break;
      }
      // optional double cutoff_freq = 4;
      case 4: {
        if (static_cast<::google::protobuf::uint8>(tag) != 33) goto handle_unusual;
        msg->set_cutoff_freq(::google::protobuf::io::UnalignedLoad<double>(ptr));
        ptr += sizeof(double);
        break;
      }
      // optional double mean_filter_window_size = 5;
      case 5: {
        if (static_cast<::google::protobuf::uint8>(tag) != 41) goto handle_unusual;
        msg->set_mean_filter_window_size(::google::protobuf::io::UnalignedLoad<double>(ptr));
        ptr += sizeof(double);
        break;
      }
      // optional double k = 6 [default = 1];
      case 6: {
        if (static_cast<::google::protobuf::uint8>(tag) != 49) goto handle_unusual;
        msg->set_k(::google::protobuf::io::UnalignedLoad<double>(ptr));
        ptr += sizeof(double);
        break;
      }
      default: {
      handle_unusual:
        if ((tag & 7) == 4 || tag == 0) {
          ctx->EndGroup(tag);
          return ptr;
        }
        auto res = UnknownFieldParse(tag, {_InternalParse, msg},
          ptr, end, msg->_internal_metadata_.mutable_unknown_fields(), ctx);
        ptr = res.first;
        GOOGLE_PROTOBUF_PARSER_ASSERT(ptr != nullptr);
        if (res.second) return ptr;
      }
    }  // switch
  }  // while
  return ptr;
len_delim_till_end:
  return ctx->StoreAndTailCall(ptr, end, {_InternalParse, msg},
                               {parser_till_end, object}, size);
}
#else  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
bool StanleyControllerConf::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!PROTOBUF_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:controller.StanleyControllerConf)
  for (;;) {
    ::std::pair<::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional .controller.PidConf station_pid_conf = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) == (10 & 0xFF)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(
               input, mutable_station_pid_conf()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional double dt = 2 [default = 0.01];
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) == (17 & 0xFF)) {
          HasBitSetters::set_has_dt(this);
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &dt_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional double speed_controller_input_limit = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) == (25 & 0xFF)) {
          HasBitSetters::set_has_speed_controller_input_limit(this);
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &speed_controller_input_limit_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional double cutoff_freq = 4;
      case 4: {
        if (static_cast< ::google::protobuf::uint8>(tag) == (33 & 0xFF)) {
          HasBitSetters::set_has_cutoff_freq(this);
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &cutoff_freq_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional double mean_filter_window_size = 5;
      case 5: {
        if (static_cast< ::google::protobuf::uint8>(tag) == (41 & 0xFF)) {
          HasBitSetters::set_has_mean_filter_window_size(this);
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &mean_filter_window_size_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional double k = 6 [default = 1];
      case 6: {
        if (static_cast< ::google::protobuf::uint8>(tag) == (49 & 0xFF)) {
          HasBitSetters::set_has_k(this);
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &k_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, _internal_metadata_.mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:controller.StanleyControllerConf)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:controller.StanleyControllerConf)
  return false;
#undef DO_
}
#endif  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER

void StanleyControllerConf::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:controller.StanleyControllerConf)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional .controller.PidConf station_pid_conf = 1;
  if (cached_has_bits & 0x00000001u) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      1, HasBitSetters::station_pid_conf(this), output);
  }

  // optional double dt = 2 [default = 0.01];
  if (cached_has_bits & 0x00000010u) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(2, this->dt(), output);
  }

  // optional double speed_controller_input_limit = 3;
  if (cached_has_bits & 0x00000002u) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(3, this->speed_controller_input_limit(), output);
  }

  // optional double cutoff_freq = 4;
  if (cached_has_bits & 0x00000004u) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(4, this->cutoff_freq(), output);
  }

  // optional double mean_filter_window_size = 5;
  if (cached_has_bits & 0x00000008u) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(5, this->mean_filter_window_size(), output);
  }

  // optional double k = 6 [default = 1];
  if (cached_has_bits & 0x00000020u) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(6, this->k(), output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        _internal_metadata_.unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:controller.StanleyControllerConf)
}

::google::protobuf::uint8* StanleyControllerConf::InternalSerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:controller.StanleyControllerConf)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional .controller.PidConf station_pid_conf = 1;
  if (cached_has_bits & 0x00000001u) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageToArray(
        1, HasBitSetters::station_pid_conf(this), target);
  }

  // optional double dt = 2 [default = 0.01];
  if (cached_has_bits & 0x00000010u) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(2, this->dt(), target);
  }

  // optional double speed_controller_input_limit = 3;
  if (cached_has_bits & 0x00000002u) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(3, this->speed_controller_input_limit(), target);
  }

  // optional double cutoff_freq = 4;
  if (cached_has_bits & 0x00000004u) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(4, this->cutoff_freq(), target);
  }

  // optional double mean_filter_window_size = 5;
  if (cached_has_bits & 0x00000008u) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(5, this->mean_filter_window_size(), target);
  }

  // optional double k = 6 [default = 1];
  if (cached_has_bits & 0x00000020u) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(6, this->k(), target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:controller.StanleyControllerConf)
  return target;
}

size_t StanleyControllerConf::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:controller.StanleyControllerConf)
  size_t total_size = 0;

  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        _internal_metadata_.unknown_fields());
  }
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x0000003fu) {
    // optional .controller.PidConf station_pid_conf = 1;
    if (cached_has_bits & 0x00000001u) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSize(
          *station_pid_conf_);
    }

    // optional double speed_controller_input_limit = 3;
    if (cached_has_bits & 0x00000002u) {
      total_size += 1 + 8;
    }

    // optional double cutoff_freq = 4;
    if (cached_has_bits & 0x00000004u) {
      total_size += 1 + 8;
    }

    // optional double mean_filter_window_size = 5;
    if (cached_has_bits & 0x00000008u) {
      total_size += 1 + 8;
    }

    // optional double dt = 2 [default = 0.01];
    if (cached_has_bits & 0x00000010u) {
      total_size += 1 + 8;
    }

    // optional double k = 6 [default = 1];
    if (cached_has_bits & 0x00000020u) {
      total_size += 1 + 8;
    }

  }
  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void StanleyControllerConf::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:controller.StanleyControllerConf)
  GOOGLE_DCHECK_NE(&from, this);
  const StanleyControllerConf* source =
      ::google::protobuf::DynamicCastToGenerated<StanleyControllerConf>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:controller.StanleyControllerConf)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:controller.StanleyControllerConf)
    MergeFrom(*source);
  }
}

void StanleyControllerConf::MergeFrom(const StanleyControllerConf& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:controller.StanleyControllerConf)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 0x0000003fu) {
    if (cached_has_bits & 0x00000001u) {
      mutable_station_pid_conf()->::controller::PidConf::MergeFrom(from.station_pid_conf());
    }
    if (cached_has_bits & 0x00000002u) {
      speed_controller_input_limit_ = from.speed_controller_input_limit_;
    }
    if (cached_has_bits & 0x00000004u) {
      cutoff_freq_ = from.cutoff_freq_;
    }
    if (cached_has_bits & 0x00000008u) {
      mean_filter_window_size_ = from.mean_filter_window_size_;
    }
    if (cached_has_bits & 0x00000010u) {
      dt_ = from.dt_;
    }
    if (cached_has_bits & 0x00000020u) {
      k_ = from.k_;
    }
    _has_bits_[0] |= cached_has_bits;
  }
}

void StanleyControllerConf::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:controller.StanleyControllerConf)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void StanleyControllerConf::CopyFrom(const StanleyControllerConf& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:controller.StanleyControllerConf)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool StanleyControllerConf::IsInitialized() const {
  return true;
}

void StanleyControllerConf::Swap(StanleyControllerConf* other) {
  if (other == this) return;
  InternalSwap(other);
}
void StanleyControllerConf::InternalSwap(StanleyControllerConf* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  swap(station_pid_conf_, other->station_pid_conf_);
  swap(speed_controller_input_limit_, other->speed_controller_input_limit_);
  swap(cutoff_freq_, other->cutoff_freq_);
  swap(mean_filter_window_size_, other->mean_filter_window_size_);
  swap(dt_, other->dt_);
  swap(k_, other->k_);
}

::google::protobuf::Metadata StanleyControllerConf::GetMetadata() const {
  ::google::protobuf::internal::AssignDescriptors(&::assign_descriptors_table_stanley_5fcontroller_5fconf_2eproto);
  return ::file_level_metadata_stanley_5fcontroller_5fconf_2eproto[kIndexInFileMessages];
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace controller
namespace google {
namespace protobuf {
template<> PROTOBUF_NOINLINE ::controller::StanleyControllerConf* Arena::CreateMaybeMessage< ::controller::StanleyControllerConf >(Arena* arena) {
  return Arena::CreateInternal< ::controller::StanleyControllerConf >(arena);
}
}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
