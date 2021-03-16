// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from moveit_msgs:srv/ExecuteKnownTrajectory.idl
// generated code does not contain a copyright notice

#ifndef MOVEIT_MSGS__SRV__DETAIL__EXECUTE_KNOWN_TRAJECTORY__STRUCT_HPP_
#define MOVEIT_MSGS__SRV__DETAIL__EXECUTE_KNOWN_TRAJECTORY__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'trajectory'
#include "moveit_msgs/msg/detail/robot_trajectory__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__moveit_msgs__srv__ExecuteKnownTrajectory_Request __attribute__((deprecated))
#else
# define DEPRECATED__moveit_msgs__srv__ExecuteKnownTrajectory_Request __declspec(deprecated)
#endif

namespace moveit_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ExecuteKnownTrajectory_Request_
{
  using Type = ExecuteKnownTrajectory_Request_<ContainerAllocator>;

  explicit ExecuteKnownTrajectory_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : trajectory(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->wait_for_execution = false;
    }
  }

  explicit ExecuteKnownTrajectory_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : trajectory(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->wait_for_execution = false;
    }
  }

  // field types and members
  using _trajectory_type =
    moveit_msgs::msg::RobotTrajectory_<ContainerAllocator>;
  _trajectory_type trajectory;
  using _wait_for_execution_type =
    bool;
  _wait_for_execution_type wait_for_execution;

  // setters for named parameter idiom
  Type & set__trajectory(
    const moveit_msgs::msg::RobotTrajectory_<ContainerAllocator> & _arg)
  {
    this->trajectory = _arg;
    return *this;
  }
  Type & set__wait_for_execution(
    const bool & _arg)
  {
    this->wait_for_execution = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    moveit_msgs::srv::ExecuteKnownTrajectory_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const moveit_msgs::srv::ExecuteKnownTrajectory_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<moveit_msgs::srv::ExecuteKnownTrajectory_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<moveit_msgs::srv::ExecuteKnownTrajectory_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      moveit_msgs::srv::ExecuteKnownTrajectory_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<moveit_msgs::srv::ExecuteKnownTrajectory_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      moveit_msgs::srv::ExecuteKnownTrajectory_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<moveit_msgs::srv::ExecuteKnownTrajectory_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<moveit_msgs::srv::ExecuteKnownTrajectory_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<moveit_msgs::srv::ExecuteKnownTrajectory_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__moveit_msgs__srv__ExecuteKnownTrajectory_Request
    std::shared_ptr<moveit_msgs::srv::ExecuteKnownTrajectory_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__moveit_msgs__srv__ExecuteKnownTrajectory_Request
    std::shared_ptr<moveit_msgs::srv::ExecuteKnownTrajectory_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ExecuteKnownTrajectory_Request_ & other) const
  {
    if (this->trajectory != other.trajectory) {
      return false;
    }
    if (this->wait_for_execution != other.wait_for_execution) {
      return false;
    }
    return true;
  }
  bool operator!=(const ExecuteKnownTrajectory_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ExecuteKnownTrajectory_Request_

// alias to use template instance with default allocator
using ExecuteKnownTrajectory_Request =
  moveit_msgs::srv::ExecuteKnownTrajectory_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace moveit_msgs


// Include directives for member types
// Member 'error_code'
#include "moveit_msgs/msg/detail/move_it_error_codes__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__moveit_msgs__srv__ExecuteKnownTrajectory_Response __attribute__((deprecated))
#else
# define DEPRECATED__moveit_msgs__srv__ExecuteKnownTrajectory_Response __declspec(deprecated)
#endif

namespace moveit_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ExecuteKnownTrajectory_Response_
{
  using Type = ExecuteKnownTrajectory_Response_<ContainerAllocator>;

  explicit ExecuteKnownTrajectory_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : error_code(_init)
  {
    (void)_init;
  }

  explicit ExecuteKnownTrajectory_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : error_code(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _error_code_type =
    moveit_msgs::msg::MoveItErrorCodes_<ContainerAllocator>;
  _error_code_type error_code;

  // setters for named parameter idiom
  Type & set__error_code(
    const moveit_msgs::msg::MoveItErrorCodes_<ContainerAllocator> & _arg)
  {
    this->error_code = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    moveit_msgs::srv::ExecuteKnownTrajectory_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const moveit_msgs::srv::ExecuteKnownTrajectory_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<moveit_msgs::srv::ExecuteKnownTrajectory_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<moveit_msgs::srv::ExecuteKnownTrajectory_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      moveit_msgs::srv::ExecuteKnownTrajectory_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<moveit_msgs::srv::ExecuteKnownTrajectory_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      moveit_msgs::srv::ExecuteKnownTrajectory_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<moveit_msgs::srv::ExecuteKnownTrajectory_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<moveit_msgs::srv::ExecuteKnownTrajectory_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<moveit_msgs::srv::ExecuteKnownTrajectory_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__moveit_msgs__srv__ExecuteKnownTrajectory_Response
    std::shared_ptr<moveit_msgs::srv::ExecuteKnownTrajectory_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__moveit_msgs__srv__ExecuteKnownTrajectory_Response
    std::shared_ptr<moveit_msgs::srv::ExecuteKnownTrajectory_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ExecuteKnownTrajectory_Response_ & other) const
  {
    if (this->error_code != other.error_code) {
      return false;
    }
    return true;
  }
  bool operator!=(const ExecuteKnownTrajectory_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ExecuteKnownTrajectory_Response_

// alias to use template instance with default allocator
using ExecuteKnownTrajectory_Response =
  moveit_msgs::srv::ExecuteKnownTrajectory_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace moveit_msgs

namespace moveit_msgs
{

namespace srv
{

struct ExecuteKnownTrajectory
{
  using Request = moveit_msgs::srv::ExecuteKnownTrajectory_Request;
  using Response = moveit_msgs::srv::ExecuteKnownTrajectory_Response;
};

}  // namespace srv

}  // namespace moveit_msgs

#endif  // MOVEIT_MSGS__SRV__DETAIL__EXECUTE_KNOWN_TRAJECTORY__STRUCT_HPP_
