// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from moveit_msgs:msg/GripperTranslation.idl
// generated code does not contain a copyright notice

#ifndef MOVEIT_MSGS__MSG__DETAIL__GRIPPER_TRANSLATION__TRAITS_HPP_
#define MOVEIT_MSGS__MSG__DETAIL__GRIPPER_TRANSLATION__TRAITS_HPP_

#include "moveit_msgs/msg/detail/gripper_translation__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'direction'
#include "geometry_msgs/msg/detail/vector3_stamped__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<moveit_msgs::msg::GripperTranslation>()
{
  return "moveit_msgs::msg::GripperTranslation";
}

template<>
inline const char * name<moveit_msgs::msg::GripperTranslation>()
{
  return "moveit_msgs/msg/GripperTranslation";
}

template<>
struct has_fixed_size<moveit_msgs::msg::GripperTranslation>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::Vector3Stamped>::value> {};

template<>
struct has_bounded_size<moveit_msgs::msg::GripperTranslation>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::Vector3Stamped>::value> {};

template<>
struct is_message<moveit_msgs::msg::GripperTranslation>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MOVEIT_MSGS__MSG__DETAIL__GRIPPER_TRANSLATION__TRAITS_HPP_
