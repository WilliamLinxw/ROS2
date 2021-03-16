// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from moveit_msgs:srv/GetPositionFK.idl
// generated code does not contain a copyright notice

#ifndef MOVEIT_MSGS__SRV__DETAIL__GET_POSITION_FK__TRAITS_HPP_
#define MOVEIT_MSGS__SRV__DETAIL__GET_POSITION_FK__TRAITS_HPP_

#include "moveit_msgs/srv/detail/get_position_fk__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'robot_state'
#include "moveit_msgs/msg/detail/robot_state__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<moveit_msgs::srv::GetPositionFK_Request>()
{
  return "moveit_msgs::srv::GetPositionFK_Request";
}

template<>
inline const char * name<moveit_msgs::srv::GetPositionFK_Request>()
{
  return "moveit_msgs/srv/GetPositionFK_Request";
}

template<>
struct has_fixed_size<moveit_msgs::srv::GetPositionFK_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<moveit_msgs::srv::GetPositionFK_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<moveit_msgs::srv::GetPositionFK_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'error_code'
#include "moveit_msgs/msg/detail/move_it_error_codes__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<moveit_msgs::srv::GetPositionFK_Response>()
{
  return "moveit_msgs::srv::GetPositionFK_Response";
}

template<>
inline const char * name<moveit_msgs::srv::GetPositionFK_Response>()
{
  return "moveit_msgs/srv/GetPositionFK_Response";
}

template<>
struct has_fixed_size<moveit_msgs::srv::GetPositionFK_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<moveit_msgs::srv::GetPositionFK_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<moveit_msgs::srv::GetPositionFK_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<moveit_msgs::srv::GetPositionFK>()
{
  return "moveit_msgs::srv::GetPositionFK";
}

template<>
inline const char * name<moveit_msgs::srv::GetPositionFK>()
{
  return "moveit_msgs/srv/GetPositionFK";
}

template<>
struct has_fixed_size<moveit_msgs::srv::GetPositionFK>
  : std::integral_constant<
    bool,
    has_fixed_size<moveit_msgs::srv::GetPositionFK_Request>::value &&
    has_fixed_size<moveit_msgs::srv::GetPositionFK_Response>::value
  >
{
};

template<>
struct has_bounded_size<moveit_msgs::srv::GetPositionFK>
  : std::integral_constant<
    bool,
    has_bounded_size<moveit_msgs::srv::GetPositionFK_Request>::value &&
    has_bounded_size<moveit_msgs::srv::GetPositionFK_Response>::value
  >
{
};

template<>
struct is_service<moveit_msgs::srv::GetPositionFK>
  : std::true_type
{
};

template<>
struct is_service_request<moveit_msgs::srv::GetPositionFK_Request>
  : std::true_type
{
};

template<>
struct is_service_response<moveit_msgs::srv::GetPositionFK_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // MOVEIT_MSGS__SRV__DETAIL__GET_POSITION_FK__TRAITS_HPP_
