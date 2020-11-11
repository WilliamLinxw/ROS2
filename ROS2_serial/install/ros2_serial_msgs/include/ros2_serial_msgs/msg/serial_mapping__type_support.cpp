// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from ros2_serial_msgs:msg/SerialMapping.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_generator_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "ros2_serial_msgs/msg/serial_mapping__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace ros2_serial_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

size_t size_function__SerialMapping__topic_names(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return member->size();
}

const void * get_const_function__SerialMapping__topic_names(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void * get_function__SerialMapping__topic_names(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void resize_function__SerialMapping__topic_names(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<std::string> *>(untyped_member);
  member->resize(size);
}

size_t size_function__SerialMapping__serial_mappings(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<uint64_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__SerialMapping__serial_mappings(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<uint64_t> *>(untyped_member);
  return &member[index];
}

void * get_function__SerialMapping__serial_mappings(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<uint64_t> *>(untyped_member);
  return &member[index];
}

void resize_function__SerialMapping__serial_mappings(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<uint64_t> *>(untyped_member);
  member->resize(size);
}

size_t size_function__SerialMapping__types(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return member->size();
}

const void * get_const_function__SerialMapping__types(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void * get_function__SerialMapping__types(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void resize_function__SerialMapping__types(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<std::string> *>(untyped_member);
  member->resize(size);
}

size_t size_function__SerialMapping__direction(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<uint8_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__SerialMapping__direction(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<uint8_t> *>(untyped_member);
  return &member[index];
}

void * get_function__SerialMapping__direction(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<uint8_t> *>(untyped_member);
  return &member[index];
}

void resize_function__SerialMapping__direction(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<uint8_t> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember SerialMapping_message_member_array[4] = {
  {
    "topic_names",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_serial_msgs::msg::SerialMapping, topic_names),  // bytes offset in struct
    nullptr,  // default value
    size_function__SerialMapping__topic_names,  // size() function pointer
    get_const_function__SerialMapping__topic_names,  // get_const(index) function pointer
    get_function__SerialMapping__topic_names,  // get(index) function pointer
    resize_function__SerialMapping__topic_names  // resize(index) function pointer
  },
  {
    "serial_mappings",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_serial_msgs::msg::SerialMapping, serial_mappings),  // bytes offset in struct
    nullptr,  // default value
    size_function__SerialMapping__serial_mappings,  // size() function pointer
    get_const_function__SerialMapping__serial_mappings,  // get_const(index) function pointer
    get_function__SerialMapping__serial_mappings,  // get(index) function pointer
    resize_function__SerialMapping__serial_mappings  // resize(index) function pointer
  },
  {
    "types",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_serial_msgs::msg::SerialMapping, types),  // bytes offset in struct
    nullptr,  // default value
    size_function__SerialMapping__types,  // size() function pointer
    get_const_function__SerialMapping__types,  // get_const(index) function pointer
    get_function__SerialMapping__types,  // get(index) function pointer
    resize_function__SerialMapping__types  // resize(index) function pointer
  },
  {
    "direction",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_serial_msgs::msg::SerialMapping, direction),  // bytes offset in struct
    nullptr,  // default value
    size_function__SerialMapping__direction,  // size() function pointer
    get_const_function__SerialMapping__direction,  // get_const(index) function pointer
    get_function__SerialMapping__direction,  // get(index) function pointer
    resize_function__SerialMapping__direction  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers SerialMapping_message_members = {
  "ros2_serial_msgs::msg",  // message namespace
  "SerialMapping",  // message name
  4,  // number of fields
  sizeof(ros2_serial_msgs::msg::SerialMapping),
  SerialMapping_message_member_array  // message members
};

static const rosidl_message_type_support_t SerialMapping_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &SerialMapping_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace ros2_serial_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<ros2_serial_msgs::msg::SerialMapping>()
{
  return &::ros2_serial_msgs::msg::rosidl_typesupport_introspection_cpp::SerialMapping_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, ros2_serial_msgs, msg, SerialMapping)() {
  return &::ros2_serial_msgs::msg::rosidl_typesupport_introspection_cpp::SerialMapping_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
