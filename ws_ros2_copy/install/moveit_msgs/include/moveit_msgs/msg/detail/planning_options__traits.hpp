// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from moveit_msgs:msg/PlanningOptions.idl
// generated code does not contain a copyright notice

#ifndef MOVEIT_MSGS__MSG__DETAIL__PLANNING_OPTIONS__TRAITS_HPP_
#define MOVEIT_MSGS__MSG__DETAIL__PLANNING_OPTIONS__TRAITS_HPP_

#include "moveit_msgs/msg/detail/planning_options__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'planning_scene_diff'
#include "moveit_msgs/msg/detail/planning_scene__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<moveit_msgs::msg::PlanningOptions>()
{
  return "moveit_msgs::msg::PlanningOptions";
}

template<>
inline const char * name<moveit_msgs::msg::PlanningOptions>()
{
  return "moveit_msgs/msg/PlanningOptions";
}

template<>
struct has_fixed_size<moveit_msgs::msg::PlanningOptions>
  : std::integral_constant<bool, has_fixed_size<moveit_msgs::msg::PlanningScene>::value> {};

template<>
struct has_bounded_size<moveit_msgs::msg::PlanningOptions>
  : std::integral_constant<bool, has_bounded_size<moveit_msgs::msg::PlanningScene>::value> {};

template<>
struct is_message<moveit_msgs::msg::PlanningOptions>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MOVEIT_MSGS__MSG__DETAIL__PLANNING_OPTIONS__TRAITS_HPP_
