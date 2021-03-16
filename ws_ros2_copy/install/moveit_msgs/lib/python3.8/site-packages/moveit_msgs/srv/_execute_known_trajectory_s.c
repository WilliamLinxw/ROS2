// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from moveit_msgs:srv/ExecuteKnownTrajectory.idl
// generated code does not contain a copyright notice
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <Python.h>
#include <stdbool.h>
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-function"
#endif
#include "numpy/ndarrayobject.h"
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif
#include "rosidl_runtime_c/visibility_control.h"
#include "moveit_msgs/srv/detail/execute_known_trajectory__struct.h"
#include "moveit_msgs/srv/detail/execute_known_trajectory__functions.h"

bool moveit_msgs__msg__robot_trajectory__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * moveit_msgs__msg__robot_trajectory__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool moveit_msgs__srv__execute_known_trajectory__request__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[73];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("moveit_msgs.srv._execute_known_trajectory.ExecuteKnownTrajectory_Request", full_classname_dest, 72) == 0);
  }
  moveit_msgs__srv__ExecuteKnownTrajectory_Request * ros_message = _ros_message;
  {  // trajectory
    PyObject * field = PyObject_GetAttrString(_pymsg, "trajectory");
    if (!field) {
      return false;
    }
    if (!moveit_msgs__msg__robot_trajectory__convert_from_py(field, &ros_message->trajectory)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // wait_for_execution
    PyObject * field = PyObject_GetAttrString(_pymsg, "wait_for_execution");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->wait_for_execution = (Py_True == field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * moveit_msgs__srv__execute_known_trajectory__request__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of ExecuteKnownTrajectory_Request */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("moveit_msgs.srv._execute_known_trajectory");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "ExecuteKnownTrajectory_Request");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  moveit_msgs__srv__ExecuteKnownTrajectory_Request * ros_message = (moveit_msgs__srv__ExecuteKnownTrajectory_Request *)raw_ros_message;
  {  // trajectory
    PyObject * field = NULL;
    field = moveit_msgs__msg__robot_trajectory__convert_to_py(&ros_message->trajectory);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "trajectory", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // wait_for_execution
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->wait_for_execution ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "wait_for_execution", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}

#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
// already included above
// #include <Python.h>
// already included above
// #include <stdbool.h>
// already included above
// #include "numpy/ndarrayobject.h"
// already included above
// #include "rosidl_runtime_c/visibility_control.h"
// already included above
// #include "moveit_msgs/srv/detail/execute_known_trajectory__struct.h"
// already included above
// #include "moveit_msgs/srv/detail/execute_known_trajectory__functions.h"

bool moveit_msgs__msg__move_it_error_codes__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * moveit_msgs__msg__move_it_error_codes__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool moveit_msgs__srv__execute_known_trajectory__response__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[74];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("moveit_msgs.srv._execute_known_trajectory.ExecuteKnownTrajectory_Response", full_classname_dest, 73) == 0);
  }
  moveit_msgs__srv__ExecuteKnownTrajectory_Response * ros_message = _ros_message;
  {  // error_code
    PyObject * field = PyObject_GetAttrString(_pymsg, "error_code");
    if (!field) {
      return false;
    }
    if (!moveit_msgs__msg__move_it_error_codes__convert_from_py(field, &ros_message->error_code)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * moveit_msgs__srv__execute_known_trajectory__response__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of ExecuteKnownTrajectory_Response */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("moveit_msgs.srv._execute_known_trajectory");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "ExecuteKnownTrajectory_Response");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  moveit_msgs__srv__ExecuteKnownTrajectory_Response * ros_message = (moveit_msgs__srv__ExecuteKnownTrajectory_Response *)raw_ros_message;
  {  // error_code
    PyObject * field = NULL;
    field = moveit_msgs__msg__move_it_error_codes__convert_to_py(&ros_message->error_code);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "error_code", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
