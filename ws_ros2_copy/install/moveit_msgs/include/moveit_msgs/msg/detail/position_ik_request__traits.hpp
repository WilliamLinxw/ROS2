// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from moveit_msgs:msg/PositionIKRequest.idl
// generated code does not contain a copyright notice

#ifndef MOVEIT_MSGS__MSG__DETAIL__POSITION_IK_REQUEST__TRAITS_HPP_
#define MOVEIT_MSGS__MSG__DETAIL__POSITION_IK_REQUEST__TRAITS_HPP_

#include "moveit_msgs/msg/detail/position_ik_request__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'robot_state'
#include "moveit_msgs/msg/detail/robot_state__traits.hpp"
// Member 'constraints'
#include "moveit_msgs/msg/detail/constraints__traits.hpp"
// Member 'pose_stamped'
#include "geometry_msgs/msg/detail/pose_stamped__traits.hpp"
// Member 'timeout'
#include "builtin_interfaces/msg/detail/duration__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<moveit_msgs::msg::PositionIKRequest>()
{
  return "moveit_msgs::msg::PositionIKRequest";
}

template<>
inline const char * name<moveit_msgs::msg::PositionIKRequest>()
{
  return "moveit_msgs/msg/PositionIKRequest";
}

template<>
struct has_fixed_size<moveit_msgs::msg::PositionIKRequest>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<moveit_msgs::msg::PositionIKRequest>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<moveit_msgs::msg::PositionIKRequest>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MOVEIT_MSGS__MSG__DETAIL__POSITION_IK_REQUEST__TRAITS_HPP_
