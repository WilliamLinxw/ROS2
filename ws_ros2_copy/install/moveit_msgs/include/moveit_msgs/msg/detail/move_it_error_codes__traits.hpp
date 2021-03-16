// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from moveit_msgs:msg/MoveItErrorCodes.idl
// generated code does not contain a copyright notice

#ifndef MOVEIT_MSGS__MSG__DETAIL__MOVE_IT_ERROR_CODES__TRAITS_HPP_
#define MOVEIT_MSGS__MSG__DETAIL__MOVE_IT_ERROR_CODES__TRAITS_HPP_

#include "moveit_msgs/msg/detail/move_it_error_codes__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<moveit_msgs::msg::MoveItErrorCodes>()
{
  return "moveit_msgs::msg::MoveItErrorCodes";
}

template<>
inline const char * name<moveit_msgs::msg::MoveItErrorCodes>()
{
  return "moveit_msgs/msg/MoveItErrorCodes";
}

template<>
struct has_fixed_size<moveit_msgs::msg::MoveItErrorCodes>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<moveit_msgs::msg::MoveItErrorCodes>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<moveit_msgs::msg::MoveItErrorCodes>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MOVEIT_MSGS__MSG__DETAIL__MOVE_IT_ERROR_CODES__TRAITS_HPP_
