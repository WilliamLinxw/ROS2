# generated from rosidl_generator_py/resource/_idl.py.em
# with input from moveit_msgs:srv/ExecuteKnownTrajectory.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ExecuteKnownTrajectory_Request(type):
    """Metaclass of message 'ExecuteKnownTrajectory_Request'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('moveit_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'moveit_msgs.srv.ExecuteKnownTrajectory_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__execute_known_trajectory__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__execute_known_trajectory__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__execute_known_trajectory__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__execute_known_trajectory__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__execute_known_trajectory__request

            from moveit_msgs.msg import RobotTrajectory
            if RobotTrajectory.__class__._TYPE_SUPPORT is None:
                RobotTrajectory.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ExecuteKnownTrajectory_Request(metaclass=Metaclass_ExecuteKnownTrajectory_Request):
    """Message class 'ExecuteKnownTrajectory_Request'."""

    __slots__ = [
        '_trajectory',
        '_wait_for_execution',
    ]

    _fields_and_field_types = {
        'trajectory': 'moveit_msgs/RobotTrajectory',
        'wait_for_execution': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['moveit_msgs', 'msg'], 'RobotTrajectory'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from moveit_msgs.msg import RobotTrajectory
        self.trajectory = kwargs.get('trajectory', RobotTrajectory())
        self.wait_for_execution = kwargs.get('wait_for_execution', bool())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.trajectory != other.trajectory:
            return False
        if self.wait_for_execution != other.wait_for_execution:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def trajectory(self):
        """Message field 'trajectory'."""
        return self._trajectory

    @trajectory.setter
    def trajectory(self, value):
        if __debug__:
            from moveit_msgs.msg import RobotTrajectory
            assert \
                isinstance(value, RobotTrajectory), \
                "The 'trajectory' field must be a sub message of type 'RobotTrajectory'"
        self._trajectory = value

    @property
    def wait_for_execution(self):
        """Message field 'wait_for_execution'."""
        return self._wait_for_execution

    @wait_for_execution.setter
    def wait_for_execution(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'wait_for_execution' field must be of type 'bool'"
        self._wait_for_execution = value


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_ExecuteKnownTrajectory_Response(type):
    """Metaclass of message 'ExecuteKnownTrajectory_Response'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('moveit_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'moveit_msgs.srv.ExecuteKnownTrajectory_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__execute_known_trajectory__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__execute_known_trajectory__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__execute_known_trajectory__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__execute_known_trajectory__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__execute_known_trajectory__response

            from moveit_msgs.msg import MoveItErrorCodes
            if MoveItErrorCodes.__class__._TYPE_SUPPORT is None:
                MoveItErrorCodes.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ExecuteKnownTrajectory_Response(metaclass=Metaclass_ExecuteKnownTrajectory_Response):
    """Message class 'ExecuteKnownTrajectory_Response'."""

    __slots__ = [
        '_error_code',
    ]

    _fields_and_field_types = {
        'error_code': 'moveit_msgs/MoveItErrorCodes',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['moveit_msgs', 'msg'], 'MoveItErrorCodes'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from moveit_msgs.msg import MoveItErrorCodes
        self.error_code = kwargs.get('error_code', MoveItErrorCodes())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.error_code != other.error_code:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def error_code(self):
        """Message field 'error_code'."""
        return self._error_code

    @error_code.setter
    def error_code(self, value):
        if __debug__:
            from moveit_msgs.msg import MoveItErrorCodes
            assert \
                isinstance(value, MoveItErrorCodes), \
                "The 'error_code' field must be a sub message of type 'MoveItErrorCodes'"
        self._error_code = value


class Metaclass_ExecuteKnownTrajectory(type):
    """Metaclass of service 'ExecuteKnownTrajectory'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('moveit_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'moveit_msgs.srv.ExecuteKnownTrajectory')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__execute_known_trajectory

            from moveit_msgs.srv import _execute_known_trajectory
            if _execute_known_trajectory.Metaclass_ExecuteKnownTrajectory_Request._TYPE_SUPPORT is None:
                _execute_known_trajectory.Metaclass_ExecuteKnownTrajectory_Request.__import_type_support__()
            if _execute_known_trajectory.Metaclass_ExecuteKnownTrajectory_Response._TYPE_SUPPORT is None:
                _execute_known_trajectory.Metaclass_ExecuteKnownTrajectory_Response.__import_type_support__()


class ExecuteKnownTrajectory(metaclass=Metaclass_ExecuteKnownTrajectory):
    from moveit_msgs.srv._execute_known_trajectory import ExecuteKnownTrajectory_Request as Request
    from moveit_msgs.srv._execute_known_trajectory import ExecuteKnownTrajectory_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
