// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from moveit_msgs:msg/CollisionObject.idl
// generated code does not contain a copyright notice

#ifndef MOVEIT_MSGS__MSG__DETAIL__COLLISION_OBJECT__TRAITS_HPP_
#define MOVEIT_MSGS__MSG__DETAIL__COLLISION_OBJECT__TRAITS_HPP_

#include "moveit_msgs/msg/detail/collision_object__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'pose'
#include "geometry_msgs/msg/detail/pose__traits.hpp"
// Member 'type'
#include "object_recognition_msgs/msg/detail/object_type__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<moveit_msgs::msg::CollisionObject>()
{
  return "moveit_msgs::msg::CollisionObject";
}

template<>
inline const char * name<moveit_msgs::msg::CollisionObject>()
{
  return "moveit_msgs/msg/CollisionObject";
}

template<>
struct has_fixed_size<moveit_msgs::msg::CollisionObject>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<moveit_msgs::msg::CollisionObject>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<moveit_msgs::msg::CollisionObject>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MOVEIT_MSGS__MSG__DETAIL__COLLISION_OBJECT__TRAITS_HPP_
