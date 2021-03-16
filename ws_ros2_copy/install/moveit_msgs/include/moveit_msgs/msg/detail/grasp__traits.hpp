// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from moveit_msgs:msg/Grasp.idl
// generated code does not contain a copyright notice

#ifndef MOVEIT_MSGS__MSG__DETAIL__GRASP__TRAITS_HPP_
#define MOVEIT_MSGS__MSG__DETAIL__GRASP__TRAITS_HPP_

#include "moveit_msgs/msg/detail/grasp__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'pre_grasp_posture'
// Member 'grasp_posture'
#include "trajectory_msgs/msg/detail/joint_trajectory__traits.hpp"
// Member 'grasp_pose'
#include "geometry_msgs/msg/detail/pose_stamped__traits.hpp"
// Member 'pre_grasp_approach'
// Member 'post_grasp_retreat'
// Member 'post_place_retreat'
#include "moveit_msgs/msg/detail/gripper_translation__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<moveit_msgs::msg::Grasp>()
{
  return "moveit_msgs::msg::Grasp";
}

template<>
inline const char * name<moveit_msgs::msg::Grasp>()
{
  return "moveit_msgs/msg/Grasp";
}

template<>
struct has_fixed_size<moveit_msgs::msg::Grasp>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<moveit_msgs::msg::Grasp>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<moveit_msgs::msg::Grasp>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MOVEIT_MSGS__MSG__DETAIL__GRASP__TRAITS_HPP_
