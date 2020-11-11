// generated from rosidl_typesupport_opensplice_cpp/resource/idl__dds_opensplice_type_support.cpp.em
// generated code does not contain a copyright notice

#include <codecvt>
#include <cstring>
#include <iostream>
#include <limits>
#include <locale>
#include <sstream>
#include <stdexcept>
#include <string>

#include <u_instanceHandle.h>
#include <CdrTypeSupport.h>

// generated from rosidl_typesupport_opensplice_cpp/resource/msg__type_support.cpp.em
// generated code does not contain a copyright notice

#include "ros2_serial_msgs/msg/serial_mapping__rosidl_typesupport_opensplice_cpp.hpp"
// already included above
// #include "ros2_serial_msgs/msg/serial_mapping__rosidl_typesupport_opensplice_cpp.hpp"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "ros2_serial_msgs/msg/serial_mapping__struct.hpp"
#include "ros2_serial_msgs/msg/dds_opensplice/ccpp_SerialMapping_.h"
#include "rosidl_typesupport_opensplice_cpp/identifier.hpp"
#include "rosidl_typesupport_opensplice_cpp/message_type_support.h"
#include "rosidl_typesupport_opensplice_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_opensplice_cpp/u__instanceHandle.h"
#include "rmw/rmw.h"


// forward declaration of message dependencies and their conversion functions

namespace ros2_serial_msgs
{
namespace msg
{

namespace typesupport_opensplice_cpp
{

using __dds_msg_type_SerialMapping = ros2_serial_msgs::msg::dds_::SerialMapping_;
using __ros_msg_type_SerialMapping = ros2_serial_msgs::msg::SerialMapping;

static ros2_serial_msgs::msg::dds_::SerialMapping_TypeSupport __type_support_SerialMapping;

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_EXPORT_ros2_serial_msgs
const char *
register_type__SerialMapping(
  void * untyped_participant,
  const char * type_name)
{
  if (!untyped_participant) {
    return "untyped participant handle is null";
  }
  if (!type_name) {
    return "type name handle is null";
  }
  DDS::DomainParticipant * participant =
    static_cast<DDS::DomainParticipant *>(untyped_participant);

  DDS::ReturnCode_t status = __type_support_SerialMapping.register_type(participant, type_name);
  switch (status) {
    case DDS::RETCODE_ERROR:
      return "ros2_serial_msgs::msg::dds_::SerialMapping_TypeSupport.register_type: "
             "an internal error has occurred";
    case DDS::RETCODE_BAD_PARAMETER:
      return "ros2_serial_msgs::msg::dds_::SerialMapping_TypeSupport.register_type: "
             "bad domain participant or type name parameter";
    case DDS::RETCODE_OUT_OF_RESOURCES:
      return "ros2_serial_msgs::msg::dds_::SerialMapping_TypeSupport.register_type: "
             "out of resources";
    case DDS::RETCODE_PRECONDITION_NOT_MET:
      return "ros2_serial_msgs::msg::dds_::SerialMapping_TypeSupport.register_type: "
             "already registered with a different TypeSupport class";
    case DDS::RETCODE_OK:
      return nullptr;
    default:
      return "ros2_serial_msgs::msg::dds_::SerialMapping_TypeSupport.register_type: unknown return code";
  }
}

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_EXPORT_ros2_serial_msgs
void
convert_ros_message_to_dds(
  const __ros_msg_type_SerialMapping & ros_message,
  __dds_msg_type_SerialMapping & dds_message)
{
  // member.name topic_names
  {
    size_t size = ros_message.topic_names.size();
    if (size > static_cast<size_t>((std::numeric_limits<DDS::Long>::max)())) {
      throw std::runtime_error("array size exceeds maximum DDS sequence size");
    }
    DDS::Long length = static_cast<DDS::Long>(size);
    dds_message.topic_names_.length(length);
    for (DDS::ULong i = 0; i < size; i++) {
      dds_message.topic_names_[i] = ros_message.topic_names[i].c_str();
    }
  }
  // member.name serial_mappings
  {
    size_t size = ros_message.serial_mappings.size();
    if (size > static_cast<size_t>((std::numeric_limits<DDS::Long>::max)())) {
      throw std::runtime_error("array size exceeds maximum DDS sequence size");
    }
    DDS::Long length = static_cast<DDS::Long>(size);
    dds_message.serial_mappings_.length(length);
    for (DDS::ULong i = 0; i < size; i++) {
      dds_message.serial_mappings_[i] = ros_message.serial_mappings[i];
    }
  }
  // member.name types
  {
    size_t size = ros_message.types.size();
    if (size > static_cast<size_t>((std::numeric_limits<DDS::Long>::max)())) {
      throw std::runtime_error("array size exceeds maximum DDS sequence size");
    }
    DDS::Long length = static_cast<DDS::Long>(size);
    dds_message.types_.length(length);
    for (DDS::ULong i = 0; i < size; i++) {
      dds_message.types_[i] = ros_message.types[i].c_str();
    }
  }
  // member.name direction
  {
    size_t size = ros_message.direction.size();
    if (size > static_cast<size_t>((std::numeric_limits<DDS::Long>::max)())) {
      throw std::runtime_error("array size exceeds maximum DDS sequence size");
    }
    DDS::Long length = static_cast<DDS::Long>(size);
    dds_message.direction_.length(length);
    for (DDS::ULong i = 0; i < size; i++) {
      dds_message.direction_[i] = ros_message.direction[i];
    }
  }
}

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_EXPORT_ros2_serial_msgs
const char *
publish__SerialMapping(
  void * untyped_topic_writer,
  const void * untyped_ros_message)
{
  DDS::DataWriter * topic_writer = static_cast<DDS::DataWriter *>(untyped_topic_writer);

  const __ros_msg_type_SerialMapping & ros_message = *static_cast<const __ros_msg_type_SerialMapping *>(untyped_ros_message);
  __dds_msg_type_SerialMapping dds_message;
  convert_ros_message_to_dds(ros_message, dds_message);

  ros2_serial_msgs::msg::dds_::SerialMapping_DataWriter * data_writer =
    ros2_serial_msgs::msg::dds_::SerialMapping_DataWriter::_narrow(topic_writer);
  DDS::ReturnCode_t status = data_writer->write(dds_message, DDS::HANDLE_NIL);
  switch (status) {
    case DDS::RETCODE_ERROR:
      return "ros2_serial_msgs::msg::dds_::SerialMapping_DataWriter.write: "
             "an internal error has occurred";
    case DDS::RETCODE_BAD_PARAMETER:
      return "ros2_serial_msgs::msg::dds_::SerialMapping_DataWriter.write: "
             "bad handle or instance_data parameter";
    case DDS::RETCODE_ALREADY_DELETED:
      return "ros2_serial_msgs::msg::dds_::SerialMapping_DataWriter.write: "
             "this ros2_serial_msgs::msg::dds_::SerialMapping_DataWriter has already been deleted";
    case DDS::RETCODE_OUT_OF_RESOURCES:
      return "ros2_serial_msgs::msg::dds_::SerialMapping_DataWriter.write: "
             "out of resources";
    case DDS::RETCODE_NOT_ENABLED:
      return "ros2_serial_msgs::msg::dds_::SerialMapping_DataWriter.write: "
             "this ros2_serial_msgs::msg::dds_::SerialMapping_DataWriter is not enabled";
    case DDS::RETCODE_PRECONDITION_NOT_MET:
      return "ros2_serial_msgs::msg::dds_::SerialMapping_DataWriter.write: "
             "the handle has not been registered with this ros2_serial_msgs::msg::dds_::SerialMapping_DataWriter";
    case DDS::RETCODE_TIMEOUT:
      return "ros2_serial_msgs::msg::dds_::SerialMapping_DataWriter.write: "
             "writing resulted in blocking and then exceeded the timeout set by the "
             "max_blocking_time of the ReliabilityQosPolicy";
    case DDS::RETCODE_OK:
      return nullptr;
    default:
      return "ros2_serial_msgs::msg::dds_::SerialMapping_DataWriter.write: unknown return code";
  }
}

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_EXPORT_ros2_serial_msgs
void
convert_dds_message_to_ros(
  const __dds_msg_type_SerialMapping & dds_message,
  __ros_msg_type_SerialMapping & ros_message)
{
  // member.name topic_names
  {
    size_t size = dds_message.topic_names_.length();
    ros_message.topic_names.resize(size);
    for (DDS::ULong i = 0; i < size; i++) {
      ros_message.topic_names[i] = dds_message.topic_names_[i];
    }
  }
  // member.name serial_mappings
  {
    size_t size = dds_message.serial_mappings_.length();
    ros_message.serial_mappings.resize(size);
    for (DDS::ULong i = 0; i < size; i++) {
      ros_message.serial_mappings[i] = dds_message.serial_mappings_[i];
    }
  }
  // member.name types
  {
    size_t size = dds_message.types_.length();
    ros_message.types.resize(size);
    for (DDS::ULong i = 0; i < size; i++) {
      ros_message.types[i] = dds_message.types_[i];
    }
  }
  // member.name direction
  {
    size_t size = dds_message.direction_.length();
    ros_message.direction.resize(size);
    for (DDS::ULong i = 0; i < size; i++) {
      ros_message.direction[i] = dds_message.direction_[i];
    }
  }
}

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_EXPORT_ros2_serial_msgs
const char *
take__SerialMapping(
  void * untyped_topic_reader,
  bool ignore_local_publications,
  void * untyped_ros_message,
  bool * taken,
  void * sending_publication_handle)
{
  if (untyped_ros_message == 0) {
    return "invalid ros message pointer";
  }

  DDS::DataReader * topic_reader = static_cast<DDS::DataReader *>(untyped_topic_reader);

  ros2_serial_msgs::msg::dds_::SerialMapping_DataReader * data_reader =
    ros2_serial_msgs::msg::dds_::SerialMapping_DataReader::_narrow(topic_reader);

  ros2_serial_msgs::msg::dds_::SerialMapping_Seq dds_messages;
  DDS::SampleInfoSeq sample_infos;
  DDS::ReturnCode_t status = data_reader->take(
    dds_messages,
    sample_infos,
    1,
    DDS::ANY_SAMPLE_STATE,
    DDS::ANY_VIEW_STATE,
    DDS::ANY_INSTANCE_STATE);

  const char * errs = nullptr;
  bool ignore_sample = false;

  switch (status) {
    case DDS::RETCODE_ERROR:
      errs = "ros2_serial_msgs::msg::dds_::SerialMapping_DataReader.take: "
        "an internal error has occurred";
      goto finally;
    case DDS::RETCODE_ALREADY_DELETED:
      errs = "ros2_serial_msgs::msg::dds_::SerialMapping_DataReader.take: "
        "this ros2_serial_msgs::msg::dds_::SerialMapping_DataReader has already been deleted";
      goto finally;
    case DDS::RETCODE_OUT_OF_RESOURCES:
      errs = "ros2_serial_msgs::msg::dds_::SerialMapping_DataReader.take: "
        "out of resources";
      goto finally;
    case DDS::RETCODE_NOT_ENABLED:
      errs = "ros2_serial_msgs::msg::dds_::SerialMapping_DataReader.take: "
        "this ros2_serial_msgs::msg::dds_::SerialMapping_DataReader is not enabled";
      goto finally;
    case DDS::RETCODE_PRECONDITION_NOT_MET:
      errs = "ros2_serial_msgs::msg::dds_::SerialMapping_DataReader.take: "
        "a precondition is not met, one of: "
        "max_samples > maximum and max_samples != LENGTH_UNLIMITED, or "
        "the two sequences do not have matching parameters (length, maximum, release), or "
        "maximum > 0 and release is false.";
      goto finally;
    case DDS::RETCODE_NO_DATA:
      *taken = false;
      errs = nullptr;
      goto finally;
    case DDS::RETCODE_OK:
      break;
    default:
      errs = "ros2_serial_msgs::msg::dds_::SerialMapping_DataReader.take: unknown return code";
      goto finally;
  }

  {
    DDS::SampleInfo & sample_info = sample_infos[0];
    if (!sample_info.valid_data) {
      // skip sample without data
      ignore_sample = true;
    } else {
      DDS::InstanceHandle_t sender_handle = sample_info.publication_handle;
      auto sender_gid = u_instanceHandleToGID(sender_handle);
      if (ignore_local_publications) {
        // compare the system id from the sender and this receiver
        // if they are equal the sample has been sent from this process and should be ignored
        DDS::InstanceHandle_t receiver_handle = topic_reader->get_instance_handle();
        auto receiver_gid = u_instanceHandleToGID(receiver_handle);
        ignore_sample = sender_gid.systemId == receiver_gid.systemId;
      }
      // This is nullptr when being used with plain rmw_take, so check first.
      if (sending_publication_handle) {
        *static_cast<DDS::InstanceHandle_t *>(sending_publication_handle) = sender_handle;
      }
    }
  }

  if (!ignore_sample) {
    __ros_msg_type_SerialMapping & ros_message = *static_cast<__ros_msg_type_SerialMapping *>(untyped_ros_message);
    convert_dds_message_to_ros(dds_messages[0], ros_message);
    *taken = true;
  } else {
    *taken = false;
  }

finally:
  // Ensure the loan is returned.
  status = data_reader->return_loan(dds_messages, sample_infos);
  switch (status) {
    case DDS::RETCODE_ERROR:
      return "ros2_serial_msgs::msg::dds_::SerialMapping_DataReader.return_loan: "
             "an internal error has occurred";
    case DDS::RETCODE_ALREADY_DELETED:
      return "ros2_serial_msgs::msg::dds_::SerialMapping_DataReader.return_loan: "
             "this ros2_serial_msgs::msg::dds_::SerialMapping_DataReader has already been deleted";
    case DDS::RETCODE_OUT_OF_RESOURCES:
      return "ros2_serial_msgs::msg::dds_::SerialMapping_DataReader.return_loan: "
             "out of resources";
    case DDS::RETCODE_NOT_ENABLED:
      return "ros2_serial_msgs::msg::dds_::SerialMapping_DataReader.return_loan: "
             "this ros2_serial_msgs::msg::dds_::SerialMapping_DataReader is not enabled";
    case DDS::RETCODE_PRECONDITION_NOT_MET:
      return "ros2_serial_msgs::msg::dds_::SerialMapping_DataReader.return_loan: "
             "a precondition is not met, one of: "
             "the data_values and info_seq do not belong to a single related pair, or "
             "the data_values and info_seq were not obtained from this "
             "ros2_serial_msgs::msg::dds_::SerialMapping_DataReader";
    case DDS::RETCODE_OK:
      break;
    default:
      return "ros2_serial_msgs::msg::dds_::SerialMapping_DataReader.return_loan failed with "
             "unknown return code";
  }

  return errs;
}

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_EXPORT_ros2_serial_msgs
const char *
serialize__SerialMapping(
  const void * untyped_ros_message,
  void * untyped_serialized_data)
{
  const __ros_msg_type_SerialMapping & ros_message = *static_cast<const __ros_msg_type_SerialMapping *>(untyped_ros_message);
  __dds_msg_type_SerialMapping dds_message;

  convert_ros_message_to_dds(ros_message, dds_message);

  DDS::OpenSplice::CdrTypeSupport cdr_ts(__type_support_SerialMapping);
  DDS::OpenSplice::CdrSerializedData * serdata = nullptr;

  DDS::ReturnCode_t status = cdr_ts.serialize(&dds_message, &serdata);
  switch (status) {
    case DDS::RETCODE_ERROR:
      return "ros2_serial_msgs::msg::dds_::SerialMapping_TypeSupport.serialize: "
             "an internal error has occurred";
    case DDS::RETCODE_BAD_PARAMETER:
      return "ros2_serial_msgs::msg::dds_::SerialMapping_TypeSupport.serialize: "
             "bad parameter";
    case DDS::RETCODE_ALREADY_DELETED:
      return "ros2_serial_msgs::msg::dds_::SerialMapping_TypeSupport.serialize: "
             "this ros2_serial_msgs::msg::dds_::SerialMapping_TypeSupport has already been deleted";
    case DDS::RETCODE_OUT_OF_RESOURCES:
      return "ros2_serial_msgs::msg::dds_::SerialMapping_TypeSupport.serialize: "
             "out of resources";
    case DDS::RETCODE_OK:
      break;
    default:
      return "ros2_serial_msgs::msg::dds_::SerialMapping_TypeSupport.serialize failed with "
             "unknown return code";
  }

  rmw_serialized_message_t * serialized_data =
    static_cast<rmw_serialized_message_t *>(untyped_serialized_data);

  auto data_length = serdata->get_size();

  if (serialized_data->buffer_capacity < data_length) {
    if (rmw_serialized_message_resize(serialized_data, data_length) == RMW_RET_OK) {
      serialized_data->buffer_capacity = data_length;
    } else {
      delete serdata;
      return "ros2_serial_msgs::msg::dds_::SerialMapping_TypeSupport.serialize: "
             "unable to dynamically resize serialized message";
    }
  }

  serialized_data->buffer_length = data_length;
  serdata->get_data(serialized_data->buffer);

  delete serdata;

  return nullptr;
}

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_EXPORT_ros2_serial_msgs
const char *
deserialize__SerialMapping(
  const uint8_t * buffer,
  unsigned length,
  void * untyped_ros_message)
{
  __dds_msg_type_SerialMapping dds_message;

  DDS::OpenSplice::CdrTypeSupport cdr_ts(__type_support_SerialMapping);

  DDS::ReturnCode_t status = cdr_ts.deserialize(buffer, length, &dds_message);

  switch (status) {
    case DDS::RETCODE_ERROR:
      return "ros2_serial_msgs::msg::dds_::SerialMapping_TypeSupport.deserialize: "
             "an internal error has occurred";
    case DDS::RETCODE_BAD_PARAMETER:
      return "ros2_serial_msgs::msg::dds_::SerialMapping_TypeSupport.deserialize: "
             "bad parameter";
    case DDS::RETCODE_ALREADY_DELETED:
      return "ros2_serial_msgs::msg::dds_::SerialMapping_TypeSupport.deserialize: "
             "this ros2_serial_msgs::msg::dds_::SerialMapping_TypeSupport has already been deleted";
    case DDS::RETCODE_OUT_OF_RESOURCES:
      return "ros2_serial_msgs::msg::dds_::SerialMapping_TypeSupport.deserialize: "
             "out of resources";
    case DDS::RETCODE_OK:
      break;
    default:
      return "ros2_serial_msgs::msg::dds_::SerialMapping_TypeSupport.deserialize failed with "
             "unknown return code";
  }

  __ros_msg_type_SerialMapping & ros_message = *static_cast<__ros_msg_type_SerialMapping *>(untyped_ros_message);
  convert_dds_message_to_ros(dds_message, ros_message);

  return nullptr;
}

static message_type_support_callbacks_t SerialMapping_callbacks = {
  "ros2_serial_msgs::msg",
  "SerialMapping",
  &register_type__SerialMapping,
  &publish__SerialMapping,
  &take__SerialMapping,
  &serialize__SerialMapping,
  &deserialize__SerialMapping,
  nullptr,  // convert ros to dds (handled differently for C++)
  nullptr,  // convert dds to ros (handled differently for C++)
};

static rosidl_message_type_support_t SerialMapping_handle = {
  rosidl_typesupport_opensplice_cpp::typesupport_identifier,
  &SerialMapping_callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_opensplice_cpp

}  // namespace msg
}  // namespace ros2_serial_msgs

namespace rosidl_typesupport_opensplice_cpp
{

template<>
ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_EXPORT_ros2_serial_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<ros2_serial_msgs::msg::SerialMapping>()
{
  return &ros2_serial_msgs::msg::typesupport_opensplice_cpp::SerialMapping_handle;
}

}  // namespace rosidl_typesupport_opensplice_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_opensplice_cpp,
  ros2_serial_msgs, msg,
  SerialMapping)()
{
  return &ros2_serial_msgs::msg::typesupport_opensplice_cpp::SerialMapping_handle;
}

#ifdef __cplusplus
}
#endif
