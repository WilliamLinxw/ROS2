// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from moveit_msgs:action/ExecuteTrajectory.idl
// generated code does not contain a copyright notice

#ifndef MOVEIT_MSGS__ACTION__DETAIL__EXECUTE_TRAJECTORY__FUNCTIONS_H_
#define MOVEIT_MSGS__ACTION__DETAIL__EXECUTE_TRAJECTORY__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "moveit_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "moveit_msgs/action/detail/execute_trajectory__struct.h"

/// Initialize action/ExecuteTrajectory message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * moveit_msgs__action__ExecuteTrajectory_Goal
 * )) before or use
 * moveit_msgs__action__ExecuteTrajectory_Goal__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_moveit_msgs
bool
moveit_msgs__action__ExecuteTrajectory_Goal__init(moveit_msgs__action__ExecuteTrajectory_Goal * msg);

/// Finalize action/ExecuteTrajectory message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_moveit_msgs
void
moveit_msgs__action__ExecuteTrajectory_Goal__fini(moveit_msgs__action__ExecuteTrajectory_Goal * msg);

/// Create action/ExecuteTrajectory message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * moveit_msgs__action__ExecuteTrajectory_Goal__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_moveit_msgs
moveit_msgs__action__ExecuteTrajectory_Goal *
moveit_msgs__action__ExecuteTrajectory_Goal__create();

/// Destroy action/ExecuteTrajectory message.
/**
 * It calls
 * moveit_msgs__action__ExecuteTrajectory_Goal__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_moveit_msgs
void
moveit_msgs__action__ExecuteTrajectory_Goal__destroy(moveit_msgs__action__ExecuteTrajectory_Goal * msg);


/// Initialize array of action/ExecuteTrajectory messages.
/**
 * It allocates the memory for the number of elements and calls
 * moveit_msgs__action__ExecuteTrajectory_Goal__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_moveit_msgs
bool
moveit_msgs__action__ExecuteTrajectory_Goal__Sequence__init(moveit_msgs__action__ExecuteTrajectory_Goal__Sequence * array, size_t size);

/// Finalize array of action/ExecuteTrajectory messages.
/**
 * It calls
 * moveit_msgs__action__ExecuteTrajectory_Goal__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_moveit_msgs
void
moveit_msgs__action__ExecuteTrajectory_Goal__Sequence__fini(moveit_msgs__action__ExecuteTrajectory_Goal__Sequence * array);

/// Create array of action/ExecuteTrajectory messages.
/**
 * It allocates the memory for the array and calls
 * moveit_msgs__action__ExecuteTrajectory_Goal__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_moveit_msgs
moveit_msgs__action__ExecuteTrajectory_Goal__Sequence *
moveit_msgs__action__ExecuteTrajectory_Goal__Sequence__create(size_t size);

/// Destroy array of action/ExecuteTrajectory messages.
/**
 * It calls
 * moveit_msgs__action__ExecuteTrajectory_Goal__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_moveit_msgs
void
moveit_msgs__action__ExecuteTrajectory_Goal__Sequence__destroy(moveit_msgs__action__ExecuteTrajectory_Goal__Sequence * array);

/// Initialize action/ExecuteTrajectory message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * moveit_msgs__action__ExecuteTrajectory_Result
 * )) before or use
 * moveit_msgs__action__ExecuteTrajectory_Result__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_moveit_msgs
bool
moveit_msgs__action__ExecuteTrajectory_Result__init(moveit_msgs__action__ExecuteTrajectory_Result * msg);

/// Finalize action/ExecuteTrajectory message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_moveit_msgs
void
moveit_msgs__action__ExecuteTrajectory_Result__fini(moveit_msgs__action__ExecuteTrajectory_Result * msg);

/// Create action/ExecuteTrajectory message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * moveit_msgs__action__ExecuteTrajectory_Result__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_moveit_msgs
moveit_msgs__action__ExecuteTrajectory_Result *
moveit_msgs__action__ExecuteTrajectory_Result__create();

/// Destroy action/ExecuteTrajectory message.
/**
 * It calls
 * moveit_msgs__action__ExecuteTrajectory_Result__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_moveit_msgs
void
moveit_msgs__action__ExecuteTrajectory_Result__destroy(moveit_msgs__action__ExecuteTrajectory_Result * msg);


/// Initialize array of action/ExecuteTrajectory messages.
/**
 * It allocates the memory for the number of elements and calls
 * moveit_msgs__action__ExecuteTrajectory_Result__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_moveit_msgs
bool
moveit_msgs__action__ExecuteTrajectory_Result__Sequence__init(moveit_msgs__action__ExecuteTrajectory_Result__Sequence * array, size_t size);

/// Finalize array of action/ExecuteTrajectory messages.
/**
 * It calls
 * moveit_msgs__action__ExecuteTrajectory_Result__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_moveit_msgs
void
moveit_msgs__action__ExecuteTrajectory_Result__Sequence__fini(moveit_msgs__action__ExecuteTrajectory_Result__Sequence * array);

/// Create array of action/ExecuteTrajectory messages.
/**
 * It allocates the memory for the array and calls
 * moveit_msgs__action__ExecuteTrajectory_Result__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_moveit_msgs
moveit_msgs__action__ExecuteTrajectory_Result__Sequence *
moveit_msgs__action__ExecuteTrajectory_Result__Sequence__create(size_t size);

/// Destroy array of action/ExecuteTrajectory messages.
/**
 * It calls
 * moveit_msgs__action__ExecuteTrajectory_Result__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_moveit_msgs
void
moveit_msgs__action__ExecuteTrajectory_Result__Sequence__destroy(moveit_msgs__action__ExecuteTrajectory_Result__Sequence * array);

/// Initialize action/ExecuteTrajectory message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * moveit_msgs__action__ExecuteTrajectory_Feedback
 * )) before or use
 * moveit_msgs__action__ExecuteTrajectory_Feedback__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_moveit_msgs
bool
moveit_msgs__action__ExecuteTrajectory_Feedback__init(moveit_msgs__action__ExecuteTrajectory_Feedback * msg);

/// Finalize action/ExecuteTrajectory message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_moveit_msgs
void
moveit_msgs__action__ExecuteTrajectory_Feedback__fini(moveit_msgs__action__ExecuteTrajectory_Feedback * msg);

/// Create action/ExecuteTrajectory message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * moveit_msgs__action__ExecuteTrajectory_Feedback__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_moveit_msgs
moveit_msgs__action__ExecuteTrajectory_Feedback *
moveit_msgs__action__ExecuteTrajectory_Feedback__create();

/// Destroy action/ExecuteTrajectory message.
/**
 * It calls
 * moveit_msgs__action__ExecuteTrajectory_Feedback__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_moveit_msgs
void
moveit_msgs__action__ExecuteTrajectory_Feedback__destroy(moveit_msgs__action__ExecuteTrajectory_Feedback * msg);


/// Initialize array of action/ExecuteTrajectory messages.
/**
 * It allocates the memory for the number of elements and calls
 * moveit_msgs__action__ExecuteTrajectory_Feedback__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_moveit_msgs
bool
moveit_msgs__action__ExecuteTrajectory_Feedback__Sequence__init(moveit_msgs__action__ExecuteTrajectory_Feedback__Sequence * array, size_t size);

/// Finalize array of action/ExecuteTrajectory messages.
/**
 * It calls
 * moveit_msgs__action__ExecuteTrajectory_Feedback__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_moveit_msgs
void
moveit_msgs__action__ExecuteTrajectory_Feedback__Sequence__fini(moveit_msgs__action__ExecuteTrajectory_Feedback__Sequence * array);

/// Create array of action/ExecuteTrajectory messages.
/**
 * It allocates the memory for the array and calls
 * moveit_msgs__action__ExecuteTrajectory_Feedback__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_moveit_msgs
moveit_msgs__action__ExecuteTrajectory_Feedback__Sequence *
moveit_msgs__action__ExecuteTrajectory_Feedback__Sequence__create(size_t size);

/// Destroy array of action/ExecuteTrajectory messages.
/**
 * It calls
 * moveit_msgs__action__ExecuteTrajectory_Feedback__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_moveit_msgs
void
moveit_msgs__action__ExecuteTrajectory_Feedback__Sequence__destroy(moveit_msgs__action__ExecuteTrajectory_Feedback__Sequence * array);

/// Initialize action/ExecuteTrajectory message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * moveit_msgs__action__ExecuteTrajectory_SendGoal_Request
 * )) before or use
 * moveit_msgs__action__ExecuteTrajectory_SendGoal_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_moveit_msgs
bool
moveit_msgs__action__ExecuteTrajectory_SendGoal_Request__init(moveit_msgs__action__ExecuteTrajectory_SendGoal_Request * msg);

/// Finalize action/ExecuteTrajectory message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_moveit_msgs
void
moveit_msgs__action__ExecuteTrajectory_SendGoal_Request__fini(moveit_msgs__action__ExecuteTrajectory_SendGoal_Request * msg);

/// Create action/ExecuteTrajectory message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * moveit_msgs__action__ExecuteTrajectory_SendGoal_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_moveit_msgs
moveit_msgs__action__ExecuteTrajectory_SendGoal_Request *
moveit_msgs__action__ExecuteTrajectory_SendGoal_Request__create();

/// Destroy action/ExecuteTrajectory message.
/**
 * It calls
 * moveit_msgs__action__ExecuteTrajectory_SendGoal_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_moveit_msgs
void
moveit_msgs__action__ExecuteTrajectory_SendGoal_Request__destroy(moveit_msgs__action__ExecuteTrajectory_SendGoal_Request * msg);


/// Initialize array of action/ExecuteTrajectory messages.
/**
 * It allocates the memory for the number of elements and calls
 * moveit_msgs__action__ExecuteTrajectory_SendGoal_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_moveit_msgs
bool
moveit_msgs__action__ExecuteTrajectory_SendGoal_Request__Sequence__init(moveit_msgs__action__ExecuteTrajectory_SendGoal_Request__Sequence * array, size_t size);

/// Finalize array of action/ExecuteTrajectory messages.
/**
 * It calls
 * moveit_msgs__action__ExecuteTrajectory_SendGoal_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_moveit_msgs
void
moveit_msgs__action__ExecuteTrajectory_SendGoal_Request__Sequence__fini(moveit_msgs__action__ExecuteTrajectory_SendGoal_Request__Sequence * array);

/// Create array of action/ExecuteTrajectory messages.
/**
 * It allocates the memory for the array and calls
 * moveit_msgs__action__ExecuteTrajectory_SendGoal_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_moveit_msgs
moveit_msgs__action__ExecuteTrajectory_SendGoal_Request__Sequence *
moveit_msgs__action__ExecuteTrajectory_SendGoal_Request__Sequence__create(size_t size);

/// Destroy array of action/ExecuteTrajectory messages.
/**
 * It calls
 * moveit_msgs__action__ExecuteTrajectory_SendGoal_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_moveit_msgs
void
moveit_msgs__action__ExecuteTrajectory_SendGoal_Request__Sequence__destroy(moveit_msgs__action__ExecuteTrajectory_SendGoal_Request__Sequence * array);

/// Initialize action/ExecuteTrajectory message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * moveit_msgs__action__ExecuteTrajectory_SendGoal_Response
 * )) before or use
 * moveit_msgs__action__ExecuteTrajectory_SendGoal_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_moveit_msgs
bool
moveit_msgs__action__ExecuteTrajectory_SendGoal_Response__init(moveit_msgs__action__ExecuteTrajectory_SendGoal_Response * msg);

/// Finalize action/ExecuteTrajectory message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_moveit_msgs
void
moveit_msgs__action__ExecuteTrajectory_SendGoal_Response__fini(moveit_msgs__action__ExecuteTrajectory_SendGoal_Response * msg);

/// Create action/ExecuteTrajectory message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * moveit_msgs__action__ExecuteTrajectory_SendGoal_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_moveit_msgs
moveit_msgs__action__ExecuteTrajectory_SendGoal_Response *
moveit_msgs__action__ExecuteTrajectory_SendGoal_Response__create();

/// Destroy action/ExecuteTrajectory message.
/**
 * It calls
 * moveit_msgs__action__ExecuteTrajectory_SendGoal_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_moveit_msgs
void
moveit_msgs__action__ExecuteTrajectory_SendGoal_Response__destroy(moveit_msgs__action__ExecuteTrajectory_SendGoal_Response * msg);


/// Initialize array of action/ExecuteTrajectory messages.
/**
 * It allocates the memory for the number of elements and calls
 * moveit_msgs__action__ExecuteTrajectory_SendGoal_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_moveit_msgs
bool
moveit_msgs__action__ExecuteTrajectory_SendGoal_Response__Sequence__init(moveit_msgs__action__ExecuteTrajectory_SendGoal_Response__Sequence * array, size_t size);

/// Finalize array of action/ExecuteTrajectory messages.
/**
 * It calls
 * moveit_msgs__action__ExecuteTrajectory_SendGoal_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_moveit_msgs
void
moveit_msgs__action__ExecuteTrajectory_SendGoal_Response__Sequence__fini(moveit_msgs__action__ExecuteTrajectory_SendGoal_Response__Sequence * array);

/// Create array of action/ExecuteTrajectory messages.
/**
 * It allocates the memory for the array and calls
 * moveit_msgs__action__ExecuteTrajectory_SendGoal_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_moveit_msgs
moveit_msgs__action__ExecuteTrajectory_SendGoal_Response__Sequence *
moveit_msgs__action__ExecuteTrajectory_SendGoal_Response__Sequence__create(size_t size);

/// Destroy array of action/ExecuteTrajectory messages.
/**
 * It calls
 * moveit_msgs__action__ExecuteTrajectory_SendGoal_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_moveit_msgs
void
moveit_msgs__action__ExecuteTrajectory_SendGoal_Response__Sequence__destroy(moveit_msgs__action__ExecuteTrajectory_SendGoal_Response__Sequence * array);

/// Initialize action/ExecuteTrajectory message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * moveit_msgs__action__ExecuteTrajectory_GetResult_Request
 * )) before or use
 * moveit_msgs__action__ExecuteTrajectory_GetResult_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_moveit_msgs
bool
moveit_msgs__action__ExecuteTrajectory_GetResult_Request__init(moveit_msgs__action__ExecuteTrajectory_GetResult_Request * msg);

/// Finalize action/ExecuteTrajectory message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_moveit_msgs
void
moveit_msgs__action__ExecuteTrajectory_GetResult_Request__fini(moveit_msgs__action__ExecuteTrajectory_GetResult_Request * msg);

/// Create action/ExecuteTrajectory message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * moveit_msgs__action__ExecuteTrajectory_GetResult_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_moveit_msgs
moveit_msgs__action__ExecuteTrajectory_GetResult_Request *
moveit_msgs__action__ExecuteTrajectory_GetResult_Request__create();

/// Destroy action/ExecuteTrajectory message.
/**
 * It calls
 * moveit_msgs__action__ExecuteTrajectory_GetResult_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_moveit_msgs
void
moveit_msgs__action__ExecuteTrajectory_GetResult_Request__destroy(moveit_msgs__action__ExecuteTrajectory_GetResult_Request * msg);


/// Initialize array of action/ExecuteTrajectory messages.
/**
 * It allocates the memory for the number of elements and calls
 * moveit_msgs__action__ExecuteTrajectory_GetResult_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_moveit_msgs
bool
moveit_msgs__action__ExecuteTrajectory_GetResult_Request__Sequence__init(moveit_msgs__action__ExecuteTrajectory_GetResult_Request__Sequence * array, size_t size);

/// Finalize array of action/ExecuteTrajectory messages.
/**
 * It calls
 * moveit_msgs__action__ExecuteTrajectory_GetResult_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_moveit_msgs
void
moveit_msgs__action__ExecuteTrajectory_GetResult_Request__Sequence__fini(moveit_msgs__action__ExecuteTrajectory_GetResult_Request__Sequence * array);

/// Create array of action/ExecuteTrajectory messages.
/**
 * It allocates the memory for the array and calls
 * moveit_msgs__action__ExecuteTrajectory_GetResult_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_moveit_msgs
moveit_msgs__action__ExecuteTrajectory_GetResult_Request__Sequence *
moveit_msgs__action__ExecuteTrajectory_GetResult_Request__Sequence__create(size_t size);

/// Destroy array of action/ExecuteTrajectory messages.
/**
 * It calls
 * moveit_msgs__action__ExecuteTrajectory_GetResult_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_moveit_msgs
void
moveit_msgs__action__ExecuteTrajectory_GetResult_Request__Sequence__destroy(moveit_msgs__action__ExecuteTrajectory_GetResult_Request__Sequence * array);

/// Initialize action/ExecuteTrajectory message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * moveit_msgs__action__ExecuteTrajectory_GetResult_Response
 * )) before or use
 * moveit_msgs__action__ExecuteTrajectory_GetResult_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_moveit_msgs
bool
moveit_msgs__action__ExecuteTrajectory_GetResult_Response__init(moveit_msgs__action__ExecuteTrajectory_GetResult_Response * msg);

/// Finalize action/ExecuteTrajectory message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_moveit_msgs
void
moveit_msgs__action__ExecuteTrajectory_GetResult_Response__fini(moveit_msgs__action__ExecuteTrajectory_GetResult_Response * msg);

/// Create action/ExecuteTrajectory message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * moveit_msgs__action__ExecuteTrajectory_GetResult_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_moveit_msgs
moveit_msgs__action__ExecuteTrajectory_GetResult_Response *
moveit_msgs__action__ExecuteTrajectory_GetResult_Response__create();

/// Destroy action/ExecuteTrajectory message.
/**
 * It calls
 * moveit_msgs__action__ExecuteTrajectory_GetResult_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_moveit_msgs
void
moveit_msgs__action__ExecuteTrajectory_GetResult_Response__destroy(moveit_msgs__action__ExecuteTrajectory_GetResult_Response * msg);


/// Initialize array of action/ExecuteTrajectory messages.
/**
 * It allocates the memory for the number of elements and calls
 * moveit_msgs__action__ExecuteTrajectory_GetResult_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_moveit_msgs
bool
moveit_msgs__action__ExecuteTrajectory_GetResult_Response__Sequence__init(moveit_msgs__action__ExecuteTrajectory_GetResult_Response__Sequence * array, size_t size);

/// Finalize array of action/ExecuteTrajectory messages.
/**
 * It calls
 * moveit_msgs__action__ExecuteTrajectory_GetResult_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_moveit_msgs
void
moveit_msgs__action__ExecuteTrajectory_GetResult_Response__Sequence__fini(moveit_msgs__action__ExecuteTrajectory_GetResult_Response__Sequence * array);

/// Create array of action/ExecuteTrajectory messages.
/**
 * It allocates the memory for the array and calls
 * moveit_msgs__action__ExecuteTrajectory_GetResult_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_moveit_msgs
moveit_msgs__action__ExecuteTrajectory_GetResult_Response__Sequence *
moveit_msgs__action__ExecuteTrajectory_GetResult_Response__Sequence__create(size_t size);

/// Destroy array of action/ExecuteTrajectory messages.
/**
 * It calls
 * moveit_msgs__action__ExecuteTrajectory_GetResult_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_moveit_msgs
void
moveit_msgs__action__ExecuteTrajectory_GetResult_Response__Sequence__destroy(moveit_msgs__action__ExecuteTrajectory_GetResult_Response__Sequence * array);

/// Initialize action/ExecuteTrajectory message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * moveit_msgs__action__ExecuteTrajectory_FeedbackMessage
 * )) before or use
 * moveit_msgs__action__ExecuteTrajectory_FeedbackMessage__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_moveit_msgs
bool
moveit_msgs__action__ExecuteTrajectory_FeedbackMessage__init(moveit_msgs__action__ExecuteTrajectory_FeedbackMessage * msg);

/// Finalize action/ExecuteTrajectory message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_moveit_msgs
void
moveit_msgs__action__ExecuteTrajectory_FeedbackMessage__fini(moveit_msgs__action__ExecuteTrajectory_FeedbackMessage * msg);

/// Create action/ExecuteTrajectory message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * moveit_msgs__action__ExecuteTrajectory_FeedbackMessage__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_moveit_msgs
moveit_msgs__action__ExecuteTrajectory_FeedbackMessage *
moveit_msgs__action__ExecuteTrajectory_FeedbackMessage__create();

/// Destroy action/ExecuteTrajectory message.
/**
 * It calls
 * moveit_msgs__action__ExecuteTrajectory_FeedbackMessage__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_moveit_msgs
void
moveit_msgs__action__ExecuteTrajectory_FeedbackMessage__destroy(moveit_msgs__action__ExecuteTrajectory_FeedbackMessage * msg);


/// Initialize array of action/ExecuteTrajectory messages.
/**
 * It allocates the memory for the number of elements and calls
 * moveit_msgs__action__ExecuteTrajectory_FeedbackMessage__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_moveit_msgs
bool
moveit_msgs__action__ExecuteTrajectory_FeedbackMessage__Sequence__init(moveit_msgs__action__ExecuteTrajectory_FeedbackMessage__Sequence * array, size_t size);

/// Finalize array of action/ExecuteTrajectory messages.
/**
 * It calls
 * moveit_msgs__action__ExecuteTrajectory_FeedbackMessage__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_moveit_msgs
void
moveit_msgs__action__ExecuteTrajectory_FeedbackMessage__Sequence__fini(moveit_msgs__action__ExecuteTrajectory_FeedbackMessage__Sequence * array);

/// Create array of action/ExecuteTrajectory messages.
/**
 * It allocates the memory for the array and calls
 * moveit_msgs__action__ExecuteTrajectory_FeedbackMessage__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_moveit_msgs
moveit_msgs__action__ExecuteTrajectory_FeedbackMessage__Sequence *
moveit_msgs__action__ExecuteTrajectory_FeedbackMessage__Sequence__create(size_t size);

/// Destroy array of action/ExecuteTrajectory messages.
/**
 * It calls
 * moveit_msgs__action__ExecuteTrajectory_FeedbackMessage__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_moveit_msgs
void
moveit_msgs__action__ExecuteTrajectory_FeedbackMessage__Sequence__destroy(moveit_msgs__action__ExecuteTrajectory_FeedbackMessage__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // MOVEIT_MSGS__ACTION__DETAIL__EXECUTE_TRAJECTORY__FUNCTIONS_H_
