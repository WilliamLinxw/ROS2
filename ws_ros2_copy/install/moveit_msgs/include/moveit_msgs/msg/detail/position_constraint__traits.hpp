// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from moveit_msgs:msg/PositionConstraint.idl
// generated code does not contain a copyright notice

#ifndef MOVEIT_MSGS__MSG__DETAIL__POSITION_CONSTRAINT__TRAITS_HPP_
#define MOVEIT_MSGS__MSG__DETAIL__POSITION_CONSTRAINT__TRAITS_HPP_

#include "moveit_msgs/msg/detail/position_constraint__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'target_point_offset'
#include "geometry_msgs/msg/detail/vector3__traits.hpp"
// Member 'constraint_region'
#include "moveit_msgs/msg/detail/bounding_volume__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<moveit_msgs::msg::PositionConstraint>()
{
  return "moveit_msgs::msg::PositionConstraint";
}

template<>
inline const char * name<moveit_msgs::msg::PositionConstraint>()
{
  return "moveit_msgs/msg/PositionConstraint";
}

template<>
struct has_fixed_size<moveit_msgs::msg::PositionConstraint>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<moveit_msgs::msg::PositionConstraint>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<moveit_msgs::msg::PositionConstraint>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MOVEIT_MSGS__MSG__DETAIL__POSITION_CONSTRAINT__TRAITS_HPP_
