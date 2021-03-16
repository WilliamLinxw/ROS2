// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from moveit_msgs:msg/VisibilityConstraint.idl
// generated code does not contain a copyright notice

#ifndef MOVEIT_MSGS__MSG__DETAIL__VISIBILITY_CONSTRAINT__TRAITS_HPP_
#define MOVEIT_MSGS__MSG__DETAIL__VISIBILITY_CONSTRAINT__TRAITS_HPP_

#include "moveit_msgs/msg/detail/visibility_constraint__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'target_pose'
// Member 'sensor_pose'
#include "geometry_msgs/msg/detail/pose_stamped__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<moveit_msgs::msg::VisibilityConstraint>()
{
  return "moveit_msgs::msg::VisibilityConstraint";
}

template<>
inline const char * name<moveit_msgs::msg::VisibilityConstraint>()
{
  return "moveit_msgs/msg/VisibilityConstraint";
}

template<>
struct has_fixed_size<moveit_msgs::msg::VisibilityConstraint>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::PoseStamped>::value> {};

template<>
struct has_bounded_size<moveit_msgs::msg::VisibilityConstraint>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::PoseStamped>::value> {};

template<>
struct is_message<moveit_msgs::msg::VisibilityConstraint>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MOVEIT_MSGS__MSG__DETAIL__VISIBILITY_CONSTRAINT__TRAITS_HPP_
