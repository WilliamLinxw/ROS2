// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from moveit_msgs:srv/ExecuteKnownTrajectory.idl
// generated code does not contain a copyright notice

#ifndef MOVEIT_MSGS__SRV__DETAIL__EXECUTE_KNOWN_TRAJECTORY__BUILDER_HPP_
#define MOVEIT_MSGS__SRV__DETAIL__EXECUTE_KNOWN_TRAJECTORY__BUILDER_HPP_

#include "moveit_msgs/srv/detail/execute_known_trajectory__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace moveit_msgs
{

namespace srv
{

namespace builder
{

class Init_ExecuteKnownTrajectory_Request_wait_for_execution
{
public:
  explicit Init_ExecuteKnownTrajectory_Request_wait_for_execution(::moveit_msgs::srv::ExecuteKnownTrajectory_Request & msg)
  : msg_(msg)
  {}
  ::moveit_msgs::srv::ExecuteKnownTrajectory_Request wait_for_execution(::moveit_msgs::srv::ExecuteKnownTrajectory_Request::_wait_for_execution_type arg)
  {
    msg_.wait_for_execution = std::move(arg);
    return std::move(msg_);
  }

private:
  ::moveit_msgs::srv::ExecuteKnownTrajectory_Request msg_;
};

class Init_ExecuteKnownTrajectory_Request_trajectory
{
public:
  Init_ExecuteKnownTrajectory_Request_trajectory()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ExecuteKnownTrajectory_Request_wait_for_execution trajectory(::moveit_msgs::srv::ExecuteKnownTrajectory_Request::_trajectory_type arg)
  {
    msg_.trajectory = std::move(arg);
    return Init_ExecuteKnownTrajectory_Request_wait_for_execution(msg_);
  }

private:
  ::moveit_msgs::srv::ExecuteKnownTrajectory_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::moveit_msgs::srv::ExecuteKnownTrajectory_Request>()
{
  return moveit_msgs::srv::builder::Init_ExecuteKnownTrajectory_Request_trajectory();
}

}  // namespace moveit_msgs


namespace moveit_msgs
{

namespace srv
{

namespace builder
{

class Init_ExecuteKnownTrajectory_Response_error_code
{
public:
  Init_ExecuteKnownTrajectory_Response_error_code()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::moveit_msgs::srv::ExecuteKnownTrajectory_Response error_code(::moveit_msgs::srv::ExecuteKnownTrajectory_Response::_error_code_type arg)
  {
    msg_.error_code = std::move(arg);
    return std::move(msg_);
  }

private:
  ::moveit_msgs::srv::ExecuteKnownTrajectory_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::moveit_msgs::srv::ExecuteKnownTrajectory_Response>()
{
  return moveit_msgs::srv::builder::Init_ExecuteKnownTrajectory_Response_error_code();
}

}  // namespace moveit_msgs

#endif  // MOVEIT_MSGS__SRV__DETAIL__EXECUTE_KNOWN_TRAJECTORY__BUILDER_HPP_
