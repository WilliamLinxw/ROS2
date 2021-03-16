// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from moveit_msgs:msg/JointLimits.idl
// generated code does not contain a copyright notice

#ifndef MOVEIT_MSGS__MSG__DETAIL__JOINT_LIMITS__TRAITS_HPP_
#define MOVEIT_MSGS__MSG__DETAIL__JOINT_LIMITS__TRAITS_HPP_

#include "moveit_msgs/msg/detail/joint_limits__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<moveit_msgs::msg::JointLimits>()
{
  return "moveit_msgs::msg::JointLimits";
}

template<>
inline const char * name<moveit_msgs::msg::JointLimits>()
{
  return "moveit_msgs/msg/JointLimits";
}

template<>
struct has_fixed_size<moveit_msgs::msg::JointLimits>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<moveit_msgs::msg::JointLimits>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<moveit_msgs::msg::JointLimits>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MOVEIT_MSGS__MSG__DETAIL__JOINT_LIMITS__TRAITS_HPP_
