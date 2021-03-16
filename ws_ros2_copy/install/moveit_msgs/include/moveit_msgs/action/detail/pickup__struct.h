// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from moveit_msgs:action/Pickup.idl
// generated code does not contain a copyright notice

#ifndef MOVEIT_MSGS__ACTION__DETAIL__PICKUP__STRUCT_H_
#define MOVEIT_MSGS__ACTION__DETAIL__PICKUP__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'target_name'
// Member 'group_name'
// Member 'end_effector'
// Member 'support_surface_name'
// Member 'attached_object_touch_links'
// Member 'planner_id'
// Member 'allowed_touch_objects'
#include "rosidl_runtime_c/string.h"
// Member 'possible_grasps'
#include "moveit_msgs/msg/detail/grasp__struct.h"
// Member 'path_constraints'
#include "moveit_msgs/msg/detail/constraints__struct.h"
// Member 'planning_options'
#include "moveit_msgs/msg/detail/planning_options__struct.h"

// Struct defined in action/Pickup in the package moveit_msgs.
typedef struct moveit_msgs__action__Pickup_Goal
{
  rosidl_runtime_c__String target_name;
  rosidl_runtime_c__String group_name;
  rosidl_runtime_c__String end_effector;
  moveit_msgs__msg__Grasp__Sequence possible_grasps;
  rosidl_runtime_c__String support_surface_name;
  bool allow_gripper_support_collision;
  rosidl_runtime_c__String__Sequence attached_object_touch_links;
  bool minimize_object_distance;
  moveit_msgs__msg__Constraints path_constraints;
  rosidl_runtime_c__String planner_id;
  rosidl_runtime_c__String__Sequence allowed_touch_objects;
  double allowed_planning_time;
  moveit_msgs__msg__PlanningOptions planning_options;
} moveit_msgs__action__Pickup_Goal;

// Struct for a sequence of moveit_msgs__action__Pickup_Goal.
typedef struct moveit_msgs__action__Pickup_Goal__Sequence
{
  moveit_msgs__action__Pickup_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} moveit_msgs__action__Pickup_Goal__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'error_code'
#include "moveit_msgs/msg/detail/move_it_error_codes__struct.h"
// Member 'trajectory_start'
#include "moveit_msgs/msg/detail/robot_state__struct.h"
// Member 'trajectory_stages'
#include "moveit_msgs/msg/detail/robot_trajectory__struct.h"
// Member 'trajectory_descriptions'
// already included above
// #include "rosidl_runtime_c/string.h"
// Member 'grasp'
// already included above
// #include "moveit_msgs/msg/detail/grasp__struct.h"

// Struct defined in action/Pickup in the package moveit_msgs.
typedef struct moveit_msgs__action__Pickup_Result
{
  moveit_msgs__msg__MoveItErrorCodes error_code;
  moveit_msgs__msg__RobotState trajectory_start;
  moveit_msgs__msg__RobotTrajectory__Sequence trajectory_stages;
  rosidl_runtime_c__String__Sequence trajectory_descriptions;
  moveit_msgs__msg__Grasp grasp;
  double planning_time;
} moveit_msgs__action__Pickup_Result;

// Struct for a sequence of moveit_msgs__action__Pickup_Result.
typedef struct moveit_msgs__action__Pickup_Result__Sequence
{
  moveit_msgs__action__Pickup_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} moveit_msgs__action__Pickup_Result__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'state'
// already included above
// #include "rosidl_runtime_c/string.h"

// Struct defined in action/Pickup in the package moveit_msgs.
typedef struct moveit_msgs__action__Pickup_Feedback
{
  rosidl_runtime_c__String state;
} moveit_msgs__action__Pickup_Feedback;

// Struct for a sequence of moveit_msgs__action__Pickup_Feedback.
typedef struct moveit_msgs__action__Pickup_Feedback__Sequence
{
  moveit_msgs__action__Pickup_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} moveit_msgs__action__Pickup_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "moveit_msgs/action/detail/pickup__struct.h"

// Struct defined in action/Pickup in the package moveit_msgs.
typedef struct moveit_msgs__action__Pickup_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  moveit_msgs__action__Pickup_Goal goal;
} moveit_msgs__action__Pickup_SendGoal_Request;

// Struct for a sequence of moveit_msgs__action__Pickup_SendGoal_Request.
typedef struct moveit_msgs__action__Pickup_SendGoal_Request__Sequence
{
  moveit_msgs__action__Pickup_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} moveit_msgs__action__Pickup_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

// Struct defined in action/Pickup in the package moveit_msgs.
typedef struct moveit_msgs__action__Pickup_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} moveit_msgs__action__Pickup_SendGoal_Response;

// Struct for a sequence of moveit_msgs__action__Pickup_SendGoal_Response.
typedef struct moveit_msgs__action__Pickup_SendGoal_Response__Sequence
{
  moveit_msgs__action__Pickup_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} moveit_msgs__action__Pickup_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

// Struct defined in action/Pickup in the package moveit_msgs.
typedef struct moveit_msgs__action__Pickup_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} moveit_msgs__action__Pickup_GetResult_Request;

// Struct for a sequence of moveit_msgs__action__Pickup_GetResult_Request.
typedef struct moveit_msgs__action__Pickup_GetResult_Request__Sequence
{
  moveit_msgs__action__Pickup_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} moveit_msgs__action__Pickup_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "moveit_msgs/action/detail/pickup__struct.h"

// Struct defined in action/Pickup in the package moveit_msgs.
typedef struct moveit_msgs__action__Pickup_GetResult_Response
{
  int8_t status;
  moveit_msgs__action__Pickup_Result result;
} moveit_msgs__action__Pickup_GetResult_Response;

// Struct for a sequence of moveit_msgs__action__Pickup_GetResult_Response.
typedef struct moveit_msgs__action__Pickup_GetResult_Response__Sequence
{
  moveit_msgs__action__Pickup_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} moveit_msgs__action__Pickup_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "moveit_msgs/action/detail/pickup__struct.h"

// Struct defined in action/Pickup in the package moveit_msgs.
typedef struct moveit_msgs__action__Pickup_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  moveit_msgs__action__Pickup_Feedback feedback;
} moveit_msgs__action__Pickup_FeedbackMessage;

// Struct for a sequence of moveit_msgs__action__Pickup_FeedbackMessage.
typedef struct moveit_msgs__action__Pickup_FeedbackMessage__Sequence
{
  moveit_msgs__action__Pickup_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} moveit_msgs__action__Pickup_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MOVEIT_MSGS__ACTION__DETAIL__PICKUP__STRUCT_H_
