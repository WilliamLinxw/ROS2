// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ros2_serial_msgs:msg/SerialMapping.idl
// generated code does not contain a copyright notice

#ifndef ROS2_SERIAL_MSGS__MSG__SERIAL_MAPPING__TRAITS_HPP_
#define ROS2_SERIAL_MSGS__MSG__SERIAL_MAPPING__TRAITS_HPP_

#include "ros2_serial_msgs/msg/serial_mapping__struct.hpp"
#include <rosidl_generator_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<ros2_serial_msgs::msg::SerialMapping>()
{
  return "ros2_serial_msgs::msg::SerialMapping";
}

template<>
struct has_fixed_size<ros2_serial_msgs::msg::SerialMapping>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<ros2_serial_msgs::msg::SerialMapping>
  : std::integral_constant<bool, false> {};

}  // namespace rosidl_generator_traits

#endif  // ROS2_SERIAL_MSGS__MSG__SERIAL_MAPPING__TRAITS_HPP_
