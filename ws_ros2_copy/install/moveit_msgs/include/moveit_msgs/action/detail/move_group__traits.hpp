// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from moveit_msgs:action/MoveGroup.idl
// generated code does not contain a copyright notice

#ifndef MOVEIT_MSGS__ACTION__DETAIL__MOVE_GROUP__TRAITS_HPP_
#define MOVEIT_MSGS__ACTION__DETAIL__MOVE_GROUP__TRAITS_HPP_

#include "moveit_msgs/action/detail/move_group__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'request'
#include "moveit_msgs/msg/detail/motion_plan_request__traits.hpp"
// Member 'planning_options'
#include "moveit_msgs/msg/detail/planning_options__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<moveit_msgs::action::MoveGroup_Goal>()
{
  return "moveit_msgs::action::MoveGroup_Goal";
}

template<>
inline const char * name<moveit_msgs::action::MoveGroup_Goal>()
{
  return "moveit_msgs/action/MoveGroup_Goal";
}

template<>
struct has_fixed_size<moveit_msgs::action::MoveGroup_Goal>
  : std::integral_constant<bool, has_fixed_size<moveit_msgs::msg::MotionPlanRequest>::value && has_fixed_size<moveit_msgs::msg::PlanningOptions>::value> {};

template<>
struct has_bounded_size<moveit_msgs::action::MoveGroup_Goal>
  : std::integral_constant<bool, has_bounded_size<moveit_msgs::msg::MotionPlanRequest>::value && has_bounded_size<moveit_msgs::msg::PlanningOptions>::value> {};

template<>
struct is_message<moveit_msgs::action::MoveGroup_Goal>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'error_code'
#include "moveit_msgs/msg/detail/move_it_error_codes__traits.hpp"
// Member 'trajectory_start'
#include "moveit_msgs/msg/detail/robot_state__traits.hpp"
// Member 'planned_trajectory'
// Member 'executed_trajectory'
#include "moveit_msgs/msg/detail/robot_trajectory__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<moveit_msgs::action::MoveGroup_Result>()
{
  return "moveit_msgs::action::MoveGroup_Result";
}

template<>
inline const char * name<moveit_msgs::action::MoveGroup_Result>()
{
  return "moveit_msgs/action/MoveGroup_Result";
}

template<>
struct has_fixed_size<moveit_msgs::action::MoveGroup_Result>
  : std::integral_constant<bool, has_fixed_size<moveit_msgs::msg::MoveItErrorCodes>::value && has_fixed_size<moveit_msgs::msg::RobotState>::value && has_fixed_size<moveit_msgs::msg::RobotTrajectory>::value> {};

template<>
struct has_bounded_size<moveit_msgs::action::MoveGroup_Result>
  : std::integral_constant<bool, has_bounded_size<moveit_msgs::msg::MoveItErrorCodes>::value && has_bounded_size<moveit_msgs::msg::RobotState>::value && has_bounded_size<moveit_msgs::msg::RobotTrajectory>::value> {};

template<>
struct is_message<moveit_msgs::action::MoveGroup_Result>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<moveit_msgs::action::MoveGroup_Feedback>()
{
  return "moveit_msgs::action::MoveGroup_Feedback";
}

template<>
inline const char * name<moveit_msgs::action::MoveGroup_Feedback>()
{
  return "moveit_msgs/action/MoveGroup_Feedback";
}

template<>
struct has_fixed_size<moveit_msgs::action::MoveGroup_Feedback>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<moveit_msgs::action::MoveGroup_Feedback>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<moveit_msgs::action::MoveGroup_Feedback>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'goal'
#include "moveit_msgs/action/detail/move_group__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<moveit_msgs::action::MoveGroup_SendGoal_Request>()
{
  return "moveit_msgs::action::MoveGroup_SendGoal_Request";
}

template<>
inline const char * name<moveit_msgs::action::MoveGroup_SendGoal_Request>()
{
  return "moveit_msgs/action/MoveGroup_SendGoal_Request";
}

template<>
struct has_fixed_size<moveit_msgs::action::MoveGroup_SendGoal_Request>
  : std::integral_constant<bool, has_fixed_size<moveit_msgs::action::MoveGroup_Goal>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<moveit_msgs::action::MoveGroup_SendGoal_Request>
  : std::integral_constant<bool, has_bounded_size<moveit_msgs::action::MoveGroup_Goal>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<moveit_msgs::action::MoveGroup_SendGoal_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<moveit_msgs::action::MoveGroup_SendGoal_Response>()
{
  return "moveit_msgs::action::MoveGroup_SendGoal_Response";
}

template<>
inline const char * name<moveit_msgs::action::MoveGroup_SendGoal_Response>()
{
  return "moveit_msgs/action/MoveGroup_SendGoal_Response";
}

template<>
struct has_fixed_size<moveit_msgs::action::MoveGroup_SendGoal_Response>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<moveit_msgs::action::MoveGroup_SendGoal_Response>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<moveit_msgs::action::MoveGroup_SendGoal_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<moveit_msgs::action::MoveGroup_SendGoal>()
{
  return "moveit_msgs::action::MoveGroup_SendGoal";
}

template<>
inline const char * name<moveit_msgs::action::MoveGroup_SendGoal>()
{
  return "moveit_msgs/action/MoveGroup_SendGoal";
}

template<>
struct has_fixed_size<moveit_msgs::action::MoveGroup_SendGoal>
  : std::integral_constant<
    bool,
    has_fixed_size<moveit_msgs::action::MoveGroup_SendGoal_Request>::value &&
    has_fixed_size<moveit_msgs::action::MoveGroup_SendGoal_Response>::value
  >
{
};

template<>
struct has_bounded_size<moveit_msgs::action::MoveGroup_SendGoal>
  : std::integral_constant<
    bool,
    has_bounded_size<moveit_msgs::action::MoveGroup_SendGoal_Request>::value &&
    has_bounded_size<moveit_msgs::action::MoveGroup_SendGoal_Response>::value
  >
{
};

template<>
struct is_service<moveit_msgs::action::MoveGroup_SendGoal>
  : std::true_type
{
};

template<>
struct is_service_request<moveit_msgs::action::MoveGroup_SendGoal_Request>
  : std::true_type
{
};

template<>
struct is_service_response<moveit_msgs::action::MoveGroup_SendGoal_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<moveit_msgs::action::MoveGroup_GetResult_Request>()
{
  return "moveit_msgs::action::MoveGroup_GetResult_Request";
}

template<>
inline const char * name<moveit_msgs::action::MoveGroup_GetResult_Request>()
{
  return "moveit_msgs/action/MoveGroup_GetResult_Request";
}

template<>
struct has_fixed_size<moveit_msgs::action::MoveGroup_GetResult_Request>
  : std::integral_constant<bool, has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<moveit_msgs::action::MoveGroup_GetResult_Request>
  : std::integral_constant<bool, has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<moveit_msgs::action::MoveGroup_GetResult_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'result'
// already included above
// #include "moveit_msgs/action/detail/move_group__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<moveit_msgs::action::MoveGroup_GetResult_Response>()
{
  return "moveit_msgs::action::MoveGroup_GetResult_Response";
}

template<>
inline const char * name<moveit_msgs::action::MoveGroup_GetResult_Response>()
{
  return "moveit_msgs/action/MoveGroup_GetResult_Response";
}

template<>
struct has_fixed_size<moveit_msgs::action::MoveGroup_GetResult_Response>
  : std::integral_constant<bool, has_fixed_size<moveit_msgs::action::MoveGroup_Result>::value> {};

template<>
struct has_bounded_size<moveit_msgs::action::MoveGroup_GetResult_Response>
  : std::integral_constant<bool, has_bounded_size<moveit_msgs::action::MoveGroup_Result>::value> {};

template<>
struct is_message<moveit_msgs::action::MoveGroup_GetResult_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<moveit_msgs::action::MoveGroup_GetResult>()
{
  return "moveit_msgs::action::MoveGroup_GetResult";
}

template<>
inline const char * name<moveit_msgs::action::MoveGroup_GetResult>()
{
  return "moveit_msgs/action/MoveGroup_GetResult";
}

template<>
struct has_fixed_size<moveit_msgs::action::MoveGroup_GetResult>
  : std::integral_constant<
    bool,
    has_fixed_size<moveit_msgs::action::MoveGroup_GetResult_Request>::value &&
    has_fixed_size<moveit_msgs::action::MoveGroup_GetResult_Response>::value
  >
{
};

template<>
struct has_bounded_size<moveit_msgs::action::MoveGroup_GetResult>
  : std::integral_constant<
    bool,
    has_bounded_size<moveit_msgs::action::MoveGroup_GetResult_Request>::value &&
    has_bounded_size<moveit_msgs::action::MoveGroup_GetResult_Response>::value
  >
{
};

template<>
struct is_service<moveit_msgs::action::MoveGroup_GetResult>
  : std::true_type
{
};

template<>
struct is_service_request<moveit_msgs::action::MoveGroup_GetResult_Request>
  : std::true_type
{
};

template<>
struct is_service_response<moveit_msgs::action::MoveGroup_GetResult_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'feedback'
// already included above
// #include "moveit_msgs/action/detail/move_group__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<moveit_msgs::action::MoveGroup_FeedbackMessage>()
{
  return "moveit_msgs::action::MoveGroup_FeedbackMessage";
}

template<>
inline const char * name<moveit_msgs::action::MoveGroup_FeedbackMessage>()
{
  return "moveit_msgs/action/MoveGroup_FeedbackMessage";
}

template<>
struct has_fixed_size<moveit_msgs::action::MoveGroup_FeedbackMessage>
  : std::integral_constant<bool, has_fixed_size<moveit_msgs::action::MoveGroup_Feedback>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<moveit_msgs::action::MoveGroup_FeedbackMessage>
  : std::integral_constant<bool, has_bounded_size<moveit_msgs::action::MoveGroup_Feedback>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<moveit_msgs::action::MoveGroup_FeedbackMessage>
  : std::true_type {};

}  // namespace rosidl_generator_traits


namespace rosidl_generator_traits
{

template<>
struct is_action<moveit_msgs::action::MoveGroup>
  : std::true_type
{
};

template<>
struct is_action_goal<moveit_msgs::action::MoveGroup_Goal>
  : std::true_type
{
};

template<>
struct is_action_result<moveit_msgs::action::MoveGroup_Result>
  : std::true_type
{
};

template<>
struct is_action_feedback<moveit_msgs::action::MoveGroup_Feedback>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits


#endif  // MOVEIT_MSGS__ACTION__DETAIL__MOVE_GROUP__TRAITS_HPP_