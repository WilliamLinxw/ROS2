// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from moveit_msgs:srv/ChangeDriftDimensions.idl
// generated code does not contain a copyright notice

#ifndef MOVEIT_MSGS__SRV__DETAIL__CHANGE_DRIFT_DIMENSIONS__TRAITS_HPP_
#define MOVEIT_MSGS__SRV__DETAIL__CHANGE_DRIFT_DIMENSIONS__TRAITS_HPP_

#include "moveit_msgs/srv/detail/change_drift_dimensions__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'transform_jog_frame_to_drift_frame'
#include "geometry_msgs/msg/detail/transform__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<moveit_msgs::srv::ChangeDriftDimensions_Request>()
{
  return "moveit_msgs::srv::ChangeDriftDimensions_Request";
}

template<>
inline const char * name<moveit_msgs::srv::ChangeDriftDimensions_Request>()
{
  return "moveit_msgs/srv/ChangeDriftDimensions_Request";
}

template<>
struct has_fixed_size<moveit_msgs::srv::ChangeDriftDimensions_Request>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::Transform>::value> {};

template<>
struct has_bounded_size<moveit_msgs::srv::ChangeDriftDimensions_Request>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::Transform>::value> {};

template<>
struct is_message<moveit_msgs::srv::ChangeDriftDimensions_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<moveit_msgs::srv::ChangeDriftDimensions_Response>()
{
  return "moveit_msgs::srv::ChangeDriftDimensions_Response";
}

template<>
inline const char * name<moveit_msgs::srv::ChangeDriftDimensions_Response>()
{
  return "moveit_msgs/srv/ChangeDriftDimensions_Response";
}

template<>
struct has_fixed_size<moveit_msgs::srv::ChangeDriftDimensions_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<moveit_msgs::srv::ChangeDriftDimensions_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<moveit_msgs::srv::ChangeDriftDimensions_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<moveit_msgs::srv::ChangeDriftDimensions>()
{
  return "moveit_msgs::srv::ChangeDriftDimensions";
}

template<>
inline const char * name<moveit_msgs::srv::ChangeDriftDimensions>()
{
  return "moveit_msgs/srv/ChangeDriftDimensions";
}

template<>
struct has_fixed_size<moveit_msgs::srv::ChangeDriftDimensions>
  : std::integral_constant<
    bool,
    has_fixed_size<moveit_msgs::srv::ChangeDriftDimensions_Request>::value &&
    has_fixed_size<moveit_msgs::srv::ChangeDriftDimensions_Response>::value
  >
{
};

template<>
struct has_bounded_size<moveit_msgs::srv::ChangeDriftDimensions>
  : std::integral_constant<
    bool,
    has_bounded_size<moveit_msgs::srv::ChangeDriftDimensions_Request>::value &&
    has_bounded_size<moveit_msgs::srv::ChangeDriftDimensions_Response>::value
  >
{
};

template<>
struct is_service<moveit_msgs::srv::ChangeDriftDimensions>
  : std::true_type
{
};

template<>
struct is_service_request<moveit_msgs::srv::ChangeDriftDimensions_Request>
  : std::true_type
{
};

template<>
struct is_service_response<moveit_msgs::srv::ChangeDriftDimensions_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // MOVEIT_MSGS__SRV__DETAIL__CHANGE_DRIFT_DIMENSIONS__TRAITS_HPP_
