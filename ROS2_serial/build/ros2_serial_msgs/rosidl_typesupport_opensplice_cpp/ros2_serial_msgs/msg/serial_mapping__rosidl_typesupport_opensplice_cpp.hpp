// generated from rosidl_typesupport_opensplice_cpp/resource/idl__rosidl_typesupport_cpp.hpp.em
// generated code does not contain a copyright notice
#ifndef ROS2_SERIAL_MSGS__MSG__SERIAL_MAPPING__ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_HPP_
#define ROS2_SERIAL_MSGS__MSG__SERIAL_MAPPING__ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_HPP_
// generated from
// rosidl_typesupport_opensplice_cpp/resource/msg__rosidl_typesupport_opensplice_cpp.hpp.em
// generated code does not contain a copyright notice

#include "ros2_serial_msgs/msg/serial_mapping__struct.hpp"
#include "ros2_serial_msgs/msg/dds_opensplice/ccpp_SerialMapping_.h"
#include "rosidl_generator_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "ros2_serial_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"

namespace DDS
{
class DomainParticipant;
class DataReader;
class DataWriter;
}  // namespace DDS

namespace ros2_serial_msgs
{
namespace msg
{
namespace typesupport_opensplice_cpp
{

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_ros2_serial_msgs
extern void register_type__SerialMapping(
  DDS::DomainParticipant * participant,
  const char * type_name);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_ros2_serial_msgs
extern void convert_ros_message_to_dds(
  const ros2_serial_msgs::msg::SerialMapping & ros_message,
  ros2_serial_msgs::msg::dds_::SerialMapping_ & dds_message);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_ros2_serial_msgs
extern void publish__SerialMapping(
  DDS::DataWriter * topic_writer,
  const void * untyped_ros_message);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_ros2_serial_msgs
extern void convert_dds_message_to_ros(
  const ros2_serial_msgs::msg::dds_::SerialMapping_ & dds_message,
  ros2_serial_msgs::msg::SerialMapping & ros_message);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_ros2_serial_msgs
extern bool take__SerialMapping(
  DDS::DataReader * topic_reader,
  bool ignore_local_publications,
  void * untyped_ros_message,
  bool * taken);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_EXPORT_ros2_serial_msgs
const char *
serialize__SerialMapping(
  const void * untyped_ros_message,
  void * serialized_data);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_EXPORT_ros2_serial_msgs
const char *
deserialize__SerialMapping(
  const uint8_t * buffer,
  unsigned length,
  void * untyped_ros_message);

}  // namespace typesupport_opensplice_cpp

}  // namespace msg
}  // namespace ros2_serial_msgs

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_ros2_serial_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_opensplice_cpp,
  ros2_serial_msgs, msg,
  SerialMapping)();

#ifdef __cplusplus
}
#endif
#endif  // ROS2_SERIAL_MSGS__MSG__SERIAL_MAPPING__ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_HPP_
