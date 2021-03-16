// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from moveit_msgs:msg/CartesianTrajectoryPoint.idl
// generated code does not contain a copyright notice

#ifndef MOVEIT_MSGS__MSG__DETAIL__CARTESIAN_TRAJECTORY_POINT__TRAITS_HPP_
#define MOVEIT_MSGS__MSG__DETAIL__CARTESIAN_TRAJECTORY_POINT__TRAITS_HPP_

#include "moveit_msgs/msg/detail/cartesian_trajectory_point__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'point'
#include "moveit_msgs/msg/detail/cartesian_point__traits.hpp"
// Member 'time_from_start'
#include "builtin_interfaces/msg/detail/duration__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<moveit_msgs::msg::CartesianTrajectoryPoint>()
{
  return "moveit_msgs::msg::CartesianTrajectoryPoint";
}

template<>
inline const char * name<moveit_msgs::msg::CartesianTrajectoryPoint>()
{
  return "moveit_msgs/msg/CartesianTrajectoryPoint";
}

template<>
struct has_fixed_size<moveit_msgs::msg::CartesianTrajectoryPoint>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Duration>::value && has_fixed_size<moveit_msgs::msg::CartesianPoint>::value> {};

template<>
struct has_bounded_size<moveit_msgs::msg::CartesianTrajectoryPoint>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Duration>::value && has_bounded_size<moveit_msgs::msg::CartesianPoint>::value> {};

template<>
struct is_message<moveit_msgs::msg::CartesianTrajectoryPoint>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MOVEIT_MSGS__MSG__DETAIL__CARTESIAN_TRAJECTORY_POINT__TRAITS_HPP_
