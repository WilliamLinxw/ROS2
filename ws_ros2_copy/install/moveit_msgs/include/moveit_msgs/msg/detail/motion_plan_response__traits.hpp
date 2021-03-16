// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from moveit_msgs:msg/MotionPlanResponse.idl
// generated code does not contain a copyright notice

#ifndef MOVEIT_MSGS__MSG__DETAIL__MOTION_PLAN_RESPONSE__TRAITS_HPP_
#define MOVEIT_MSGS__MSG__DETAIL__MOTION_PLAN_RESPONSE__TRAITS_HPP_

#include "moveit_msgs/msg/detail/motion_plan_response__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'trajectory_start'
#include "moveit_msgs/msg/detail/robot_state__traits.hpp"
// Member 'trajectory'
#include "moveit_msgs/msg/detail/robot_trajectory__traits.hpp"
// Member 'error_code'
#include "moveit_msgs/msg/detail/move_it_error_codes__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<moveit_msgs::msg::MotionPlanResponse>()
{
  return "moveit_msgs::msg::MotionPlanResponse";
}

template<>
inline const char * name<moveit_msgs::msg::MotionPlanResponse>()
{
  return "moveit_msgs/msg/MotionPlanResponse";
}

template<>
struct has_fixed_size<moveit_msgs::msg::MotionPlanResponse>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<moveit_msgs::msg::MotionPlanResponse>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<moveit_msgs::msg::MotionPlanResponse>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MOVEIT_MSGS__MSG__DETAIL__MOTION_PLAN_RESPONSE__TRAITS_HPP_
