// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from moveit_msgs:msg/ContactInformation.idl
// generated code does not contain a copyright notice

#ifndef MOVEIT_MSGS__MSG__DETAIL__CONTACT_INFORMATION__TRAITS_HPP_
#define MOVEIT_MSGS__MSG__DETAIL__CONTACT_INFORMATION__TRAITS_HPP_

#include "moveit_msgs/msg/detail/contact_information__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'position'
#include "geometry_msgs/msg/detail/point__traits.hpp"
// Member 'normal'
#include "geometry_msgs/msg/detail/vector3__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<moveit_msgs::msg::ContactInformation>()
{
  return "moveit_msgs::msg::ContactInformation";
}

template<>
inline const char * name<moveit_msgs::msg::ContactInformation>()
{
  return "moveit_msgs/msg/ContactInformation";
}

template<>
struct has_fixed_size<moveit_msgs::msg::ContactInformation>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<moveit_msgs::msg::ContactInformation>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<moveit_msgs::msg::ContactInformation>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MOVEIT_MSGS__MSG__DETAIL__CONTACT_INFORMATION__TRAITS_HPP_
