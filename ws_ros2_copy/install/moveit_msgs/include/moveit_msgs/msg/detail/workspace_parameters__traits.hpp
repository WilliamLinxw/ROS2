// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from moveit_msgs:msg/WorkspaceParameters.idl
// generated code does not contain a copyright notice

#ifndef MOVEIT_MSGS__MSG__DETAIL__WORKSPACE_PARAMETERS__TRAITS_HPP_
#define MOVEIT_MSGS__MSG__DETAIL__WORKSPACE_PARAMETERS__TRAITS_HPP_

#include "moveit_msgs/msg/detail/workspace_parameters__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'min_corner'
// Member 'max_corner'
#include "geometry_msgs/msg/detail/vector3__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<moveit_msgs::msg::WorkspaceParameters>()
{
  return "moveit_msgs::msg::WorkspaceParameters";
}

template<>
inline const char * name<moveit_msgs::msg::WorkspaceParameters>()
{
  return "moveit_msgs/msg/WorkspaceParameters";
}

template<>
struct has_fixed_size<moveit_msgs::msg::WorkspaceParameters>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::Vector3>::value && has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<moveit_msgs::msg::WorkspaceParameters>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::Vector3>::value && has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<moveit_msgs::msg::WorkspaceParameters>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MOVEIT_MSGS__MSG__DETAIL__WORKSPACE_PARAMETERS__TRAITS_HPP_
