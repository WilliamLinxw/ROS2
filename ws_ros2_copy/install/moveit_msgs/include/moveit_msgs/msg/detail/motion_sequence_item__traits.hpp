// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from moveit_msgs:msg/MotionSequenceItem.idl
// generated code does not contain a copyright notice

#ifndef MOVEIT_MSGS__MSG__DETAIL__MOTION_SEQUENCE_ITEM__TRAITS_HPP_
#define MOVEIT_MSGS__MSG__DETAIL__MOTION_SEQUENCE_ITEM__TRAITS_HPP_

#include "moveit_msgs/msg/detail/motion_sequence_item__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'req'
#include "moveit_msgs/msg/detail/motion_plan_request__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<moveit_msgs::msg::MotionSequenceItem>()
{
  return "moveit_msgs::msg::MotionSequenceItem";
}

template<>
inline const char * name<moveit_msgs::msg::MotionSequenceItem>()
{
  return "moveit_msgs/msg/MotionSequenceItem";
}

template<>
struct has_fixed_size<moveit_msgs::msg::MotionSequenceItem>
  : std::integral_constant<bool, has_fixed_size<moveit_msgs::msg::MotionPlanRequest>::value> {};

template<>
struct has_bounded_size<moveit_msgs::msg::MotionSequenceItem>
  : std::integral_constant<bool, has_bounded_size<moveit_msgs::msg::MotionPlanRequest>::value> {};

template<>
struct is_message<moveit_msgs::msg::MotionSequenceItem>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MOVEIT_MSGS__MSG__DETAIL__MOTION_SEQUENCE_ITEM__TRAITS_HPP_