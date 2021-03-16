// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from moveit_msgs:msg/AllowedCollisionEntry.idl
// generated code does not contain a copyright notice

#ifndef MOVEIT_MSGS__MSG__DETAIL__ALLOWED_COLLISION_ENTRY__TRAITS_HPP_
#define MOVEIT_MSGS__MSG__DETAIL__ALLOWED_COLLISION_ENTRY__TRAITS_HPP_

#include "moveit_msgs/msg/detail/allowed_collision_entry__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<moveit_msgs::msg::AllowedCollisionEntry>()
{
  return "moveit_msgs::msg::AllowedCollisionEntry";
}

template<>
inline const char * name<moveit_msgs::msg::AllowedCollisionEntry>()
{
  return "moveit_msgs/msg/AllowedCollisionEntry";
}

template<>
struct has_fixed_size<moveit_msgs::msg::AllowedCollisionEntry>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<moveit_msgs::msg::AllowedCollisionEntry>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<moveit_msgs::msg::AllowedCollisionEntry>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MOVEIT_MSGS__MSG__DETAIL__ALLOWED_COLLISION_ENTRY__TRAITS_HPP_
