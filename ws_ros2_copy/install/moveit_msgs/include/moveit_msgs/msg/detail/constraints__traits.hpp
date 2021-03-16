// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from moveit_msgs:msg/Constraints.idl
// generated code does not contain a copyright notice

#ifndef MOVEIT_MSGS__MSG__DETAIL__CONSTRAINTS__TRAITS_HPP_
#define MOVEIT_MSGS__MSG__DETAIL__CONSTRAINTS__TRAITS_HPP_

#include "moveit_msgs/msg/detail/constraints__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<moveit_msgs::msg::Constraints>()
{
  return "moveit_msgs::msg::Constraints";
}

template<>
inline const char * name<moveit_msgs::msg::Constraints>()
{
  return "moveit_msgs/msg/Constraints";
}

template<>
struct has_fixed_size<moveit_msgs::msg::Constraints>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<moveit_msgs::msg::Constraints>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<moveit_msgs::msg::Constraints>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MOVEIT_MSGS__MSG__DETAIL__CONSTRAINTS__TRAITS_HPP_
