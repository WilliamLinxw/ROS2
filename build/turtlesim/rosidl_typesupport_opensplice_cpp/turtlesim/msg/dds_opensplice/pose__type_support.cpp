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

#include "turtlesim/msg/pose__rosidl_typesupport_opensplice_cpp.hpp"
// already included above
// #include "turtlesim/msg/pose__rosidl_typesupport_opensplice_cpp.hpp"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "turtlesim/msg/pose__struct.hpp"
#include "turtlesim/msg/dds_opensplice/ccpp_Pose_.h"
#include "rosidl_typesupport_opensplice_cpp/identifier.hpp"
#include "rosidl_typesupport_opensplice_cpp/message_type_support.h"
#include "rosidl_typesupport_opensplice_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_opensplice_cpp/u__instanceHandle.h"
#include "rmw/rmw.h"


// forward declaration of message dependencies and their conversion functions

namespace turtlesim
{
namespace msg
{

namespace typesupport_opensplice_cpp
{

using __dds_msg_type_Pose = turtlesim::msg::dds_::Pose_;
using __ros_msg_type_Pose = turtlesim::msg::Pose;

static turtlesim::msg::dds_::Pose_TypeSupport __type_support_Pose;

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_EXPORT_turtlesim
const char *
register_type__Pose(
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

  DDS::ReturnCode_t status = __type_support_Pose.register_type(participant, type_name);
  switch (status) {
    case DDS::RETCODE_ERROR:
      return "turtlesim::msg::dds_::Pose_TypeSupport.register_type: "
             "an internal error has occurred";
    case DDS::RETCODE_BAD_PARAMETER:
      return "turtlesim::msg::dds_::Pose_TypeSupport.register_type: "
             "bad domain participant or type name parameter";
    case DDS::RETCODE_OUT_OF_RESOURCES:
      return "turtlesim::msg::dds_::Pose_TypeSupport.register_type: "
             "out of resources";
    case DDS::RETCODE_PRECONDITION_NOT_MET:
      return "turtlesim::msg::dds_::Pose_TypeSupport.register_type: "
             "already registered with a different TypeSupport class";
    case DDS::RETCODE_OK:
      return nullptr;
    default:
      return "turtlesim::msg::dds_::Pose_TypeSupport.register_type: unknown return code";
  }
}

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_EXPORT_turtlesim
void
convert_ros_message_to_dds(
  const __ros_msg_type_Pose & ros_message,
  __dds_msg_type_Pose & dds_message)
{
  // member.name x
  dds_message.x_ = ros_message.x;
  // member.name y
  dds_message.y_ = ros_message.y;
  // member.name theta
  dds_message.theta_ = ros_message.theta;
  // member.name linear_velocity
  dds_message.linear_velocity_ = ros_message.linear_velocity;
  // member.name angular_velocity
  dds_message.angular_velocity_ = ros_message.angular_velocity;
}

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_EXPORT_turtlesim
const char *
publish__Pose(
  void * untyped_topic_writer,
  const void * untyped_ros_message)
{
  DDS::DataWriter * topic_writer = static_cast<DDS::DataWriter *>(untyped_topic_writer);

  const __ros_msg_type_Pose & ros_message = *static_cast<const __ros_msg_type_Pose *>(untyped_ros_message);
  __dds_msg_type_Pose dds_message;
  convert_ros_message_to_dds(ros_message, dds_message);

  turtlesim::msg::dds_::Pose_DataWriter * data_writer =
    turtlesim::msg::dds_::Pose_DataWriter::_narrow(topic_writer);
  DDS::ReturnCode_t status = data_writer->write(dds_message, DDS::HANDLE_NIL);
  switch (status) {
    case DDS::RETCODE_ERROR:
      return "turtlesim::msg::dds_::Pose_DataWriter.write: "
             "an internal error has occurred";
    case DDS::RETCODE_BAD_PARAMETER:
      return "turtlesim::msg::dds_::Pose_DataWriter.write: "
             "bad handle or instance_data parameter";
    case DDS::RETCODE_ALREADY_DELETED:
      return "turtlesim::msg::dds_::Pose_DataWriter.write: "
             "this turtlesim::msg::dds_::Pose_DataWriter has already been deleted";
    case DDS::RETCODE_OUT_OF_RESOURCES:
      return "turtlesim::msg::dds_::Pose_DataWriter.write: "
             "out of resources";
    case DDS::RETCODE_NOT_ENABLED:
      return "turtlesim::msg::dds_::Pose_DataWriter.write: "
             "this turtlesim::msg::dds_::Pose_DataWriter is not enabled";
    case DDS::RETCODE_PRECONDITION_NOT_MET:
      return "turtlesim::msg::dds_::Pose_DataWriter.write: "
             "the handle has not been registered with this turtlesim::msg::dds_::Pose_DataWriter";
    case DDS::RETCODE_TIMEOUT:
      return "turtlesim::msg::dds_::Pose_DataWriter.write: "
             "writing resulted in blocking and then exceeded the timeout set by the "
             "max_blocking_time of the ReliabilityQosPolicy";
    case DDS::RETCODE_OK:
      return nullptr;
    default:
      return "turtlesim::msg::dds_::Pose_DataWriter.write: unknown return code";
  }
}

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_EXPORT_turtlesim
void
convert_dds_message_to_ros(
  const __dds_msg_type_Pose & dds_message,
  __ros_msg_type_Pose & ros_message)
{
  // member.name x
  ros_message.x =
    dds_message.x_;
  // member.name y
  ros_message.y =
    dds_message.y_;
  // member.name theta
  ros_message.theta =
    dds_message.theta_;
  // member.name linear_velocity
  ros_message.linear_velocity =
    dds_message.linear_velocity_;
  // member.name angular_velocity
  ros_message.angular_velocity =
    dds_message.angular_velocity_;
}

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_EXPORT_turtlesim
const char *
take__Pose(
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

  turtlesim::msg::dds_::Pose_DataReader * data_reader =
    turtlesim::msg::dds_::Pose_DataReader::_narrow(topic_reader);

  turtlesim::msg::dds_::Pose_Seq dds_messages;
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
      errs = "turtlesim::msg::dds_::Pose_DataReader.take: "
        "an internal error has occurred";
      goto finally;
    case DDS::RETCODE_ALREADY_DELETED:
      errs = "turtlesim::msg::dds_::Pose_DataReader.take: "
        "this turtlesim::msg::dds_::Pose_DataReader has already been deleted";
      goto finally;
    case DDS::RETCODE_OUT_OF_RESOURCES:
      errs = "turtlesim::msg::dds_::Pose_DataReader.take: "
        "out of resources";
      goto finally;
    case DDS::RETCODE_NOT_ENABLED:
      errs = "turtlesim::msg::dds_::Pose_DataReader.take: "
        "this turtlesim::msg::dds_::Pose_DataReader is not enabled";
      goto finally;
    case DDS::RETCODE_PRECONDITION_NOT_MET:
      errs = "turtlesim::msg::dds_::Pose_DataReader.take: "
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
      errs = "turtlesim::msg::dds_::Pose_DataReader.take: unknown return code";
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
    __ros_msg_type_Pose & ros_message = *static_cast<__ros_msg_type_Pose *>(untyped_ros_message);
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
      return "turtlesim::msg::dds_::Pose_DataReader.return_loan: "
             "an internal error has occurred";
    case DDS::RETCODE_ALREADY_DELETED:
      return "turtlesim::msg::dds_::Pose_DataReader.return_loan: "
             "this turtlesim::msg::dds_::Pose_DataReader has already been deleted";
    case DDS::RETCODE_OUT_OF_RESOURCES:
      return "turtlesim::msg::dds_::Pose_DataReader.return_loan: "
             "out of resources";
    case DDS::RETCODE_NOT_ENABLED:
      return "turtlesim::msg::dds_::Pose_DataReader.return_loan: "
             "this turtlesim::msg::dds_::Pose_DataReader is not enabled";
    case DDS::RETCODE_PRECONDITION_NOT_MET:
      return "turtlesim::msg::dds_::Pose_DataReader.return_loan: "
             "a precondition is not met, one of: "
             "the data_values and info_seq do not belong to a single related pair, or "
             "the data_values and info_seq were not obtained from this "
             "turtlesim::msg::dds_::Pose_DataReader";
    case DDS::RETCODE_OK:
      break;
    default:
      return "turtlesim::msg::dds_::Pose_DataReader.return_loan failed with "
             "unknown return code";
  }

  return errs;
}

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_EXPORT_turtlesim
const char *
serialize__Pose(
  const void * untyped_ros_message,
  void * untyped_serialized_data)
{
  const __ros_msg_type_Pose & ros_message = *static_cast<const __ros_msg_type_Pose *>(untyped_ros_message);
  __dds_msg_type_Pose dds_message;

  convert_ros_message_to_dds(ros_message, dds_message);

  DDS::OpenSplice::CdrTypeSupport cdr_ts(__type_support_Pose);
  DDS::OpenSplice::CdrSerializedData * serdata = nullptr;

  DDS::ReturnCode_t status = cdr_ts.serialize(&dds_message, &serdata);
  switch (status) {
    case DDS::RETCODE_ERROR:
      return "turtlesim::msg::dds_::Pose_TypeSupport.serialize: "
             "an internal error has occurred";
    case DDS::RETCODE_BAD_PARAMETER:
      return "turtlesim::msg::dds_::Pose_TypeSupport.serialize: "
             "bad parameter";
    case DDS::RETCODE_ALREADY_DELETED:
      return "turtlesim::msg::dds_::Pose_TypeSupport.serialize: "
             "this turtlesim::msg::dds_::Pose_TypeSupport has already been deleted";
    case DDS::RETCODE_OUT_OF_RESOURCES:
      return "turtlesim::msg::dds_::Pose_TypeSupport.serialize: "
             "out of resources";
    case DDS::RETCODE_OK:
      break;
    default:
      return "turtlesim::msg::dds_::Pose_TypeSupport.serialize failed with "
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
      return "turtlesim::msg::dds_::Pose_TypeSupport.serialize: "
             "unable to dynamically resize serialized message";
    }
  }

  serialized_data->buffer_length = data_length;
  serdata->get_data(serialized_data->buffer);

  delete serdata;

  return nullptr;
}

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_EXPORT_turtlesim
const char *
deserialize__Pose(
  const uint8_t * buffer,
  unsigned length,
  void * untyped_ros_message)
{
  __dds_msg_type_Pose dds_message;

  DDS::OpenSplice::CdrTypeSupport cdr_ts(__type_support_Pose);

  DDS::ReturnCode_t status = cdr_ts.deserialize(buffer, length, &dds_message);

  switch (status) {
    case DDS::RETCODE_ERROR:
      return "turtlesim::msg::dds_::Pose_TypeSupport.deserialize: "
             "an internal error has occurred";
    case DDS::RETCODE_BAD_PARAMETER:
      return "turtlesim::msg::dds_::Pose_TypeSupport.deserialize: "
             "bad parameter";
    case DDS::RETCODE_ALREADY_DELETED:
      return "turtlesim::msg::dds_::Pose_TypeSupport.deserialize: "
             "this turtlesim::msg::dds_::Pose_TypeSupport has already been deleted";
    case DDS::RETCODE_OUT_OF_RESOURCES:
      return "turtlesim::msg::dds_::Pose_TypeSupport.deserialize: "
             "out of resources";
    case DDS::RETCODE_OK:
      break;
    default:
      return "turtlesim::msg::dds_::Pose_TypeSupport.deserialize failed with "
             "unknown return code";
  }

  __ros_msg_type_Pose & ros_message = *static_cast<__ros_msg_type_Pose *>(untyped_ros_message);
  convert_dds_message_to_ros(dds_message, ros_message);

  return nullptr;
}

static message_type_support_callbacks_t Pose_callbacks = {
  "turtlesim::msg",
  "Pose",
  &register_type__Pose,
  &publish__Pose,
  &take__Pose,
  &serialize__Pose,
  &deserialize__Pose,
  nullptr,  // convert ros to dds (handled differently for C++)
  nullptr,  // convert dds to ros (handled differently for C++)
};

static rosidl_message_type_support_t Pose_handle = {
  rosidl_typesupport_opensplice_cpp::typesupport_identifier,
  &Pose_callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_opensplice_cpp

}  // namespace msg
}  // namespace turtlesim

namespace rosidl_typesupport_opensplice_cpp
{

template<>
ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_EXPORT_turtlesim
const rosidl_message_type_support_t *
get_message_type_support_handle<turtlesim::msg::Pose>()
{
  return &turtlesim::msg::typesupport_opensplice_cpp::Pose_handle;
}

}  // namespace rosidl_typesupport_opensplice_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_opensplice_cpp,
  turtlesim, msg,
  Pose)()
{
  return &turtlesim::msg::typesupport_opensplice_cpp::Pose_handle;
}

#ifdef __cplusplus
}
#endif
