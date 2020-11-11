// Copyright 2019 Open Source Robotics Foundation, Inc.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#ifndef ROS2_SERIAL_EXAMPLE__ROS2_TOPICS_HPP_
#define ROS2_SERIAL_EXAMPLE__ROS2_TOPICS_HPP_

// C++ includes
#include <algorithm>
#include <cstdint>
#include <functional>
#include <limits>
#include <map>
#include <memory>
#include <stdexcept>
#include <string>
#include <vector>

// ROS 2 includes
#include <rclcpp/rclcpp.hpp>

#include "ros2_serial_example/publisher.hpp"
#include "ros2_serial_example/subscription.hpp"
#include "ros2_serial_example/transporter.hpp"

#include "sensor_msgs_multi_dof_joint_state_pub_sub_type.hpp"
#include "sensor_msgs_relative_humidity_pub_sub_type.hpp"
#include "sensor_msgs_fluid_pressure_pub_sub_type.hpp"
#include "sensor_msgs_channel_float32_pub_sub_type.hpp"
#include "sensor_msgs_camera_info_pub_sub_type.hpp"
#include "sensor_msgs_compressed_image_pub_sub_type.hpp"
#include "sensor_msgs_joy_feedback_pub_sub_type.hpp"
#include "sensor_msgs_joy_feedback_array_pub_sub_type.hpp"
#include "sensor_msgs_region_of_interest_pub_sub_type.hpp"
#include "sensor_msgs_imu_pub_sub_type.hpp"
#include "sensor_msgs_range_pub_sub_type.hpp"
#include "sensor_msgs_image_pub_sub_type.hpp"
#include "sensor_msgs_joy_pub_sub_type.hpp"
#include "sensor_msgs_battery_state_pub_sub_type.hpp"
#include "sensor_msgs_point_field_pub_sub_type.hpp"
#include "sensor_msgs_temperature_pub_sub_type.hpp"
#include "sensor_msgs_nav_sat_fix_pub_sub_type.hpp"
#include "sensor_msgs_point_cloud2_pub_sub_type.hpp"
#include "sensor_msgs_nav_sat_status_pub_sub_type.hpp"
#include "sensor_msgs_laser_echo_pub_sub_type.hpp"
#include "sensor_msgs_point_cloud_pub_sub_type.hpp"
#include "sensor_msgs_joint_state_pub_sub_type.hpp"
#include "sensor_msgs_illuminance_pub_sub_type.hpp"
#include "sensor_msgs_laser_scan_pub_sub_type.hpp"
#include "sensor_msgs_magnetic_field_pub_sub_type.hpp"
#include "sensor_msgs_time_reference_pub_sub_type.hpp"
#include "sensor_msgs_multi_echo_laser_scan_pub_sub_type.hpp"
#include "std_msgs_char_pub_sub_type.hpp"
#include "std_msgs_bool_pub_sub_type.hpp"
#include "std_msgs_u_int64_pub_sub_type.hpp"
#include "std_msgs_int64_multi_array_pub_sub_type.hpp"
#include "std_msgs_int8_multi_array_pub_sub_type.hpp"
#include "std_msgs_multi_array_layout_pub_sub_type.hpp"
#include "std_msgs_u_int8_multi_array_pub_sub_type.hpp"
#include "std_msgs_float32_pub_sub_type.hpp"
#include "std_msgs_int16_pub_sub_type.hpp"
#include "std_msgs_float64_multi_array_pub_sub_type.hpp"
#include "std_msgs_float32_multi_array_pub_sub_type.hpp"
#include "std_msgs_int64_pub_sub_type.hpp"
#include "std_msgs_int32_pub_sub_type.hpp"
#include "std_msgs_u_int32_multi_array_pub_sub_type.hpp"
#include "std_msgs_u_int8_pub_sub_type.hpp"
#include "std_msgs_u_int32_pub_sub_type.hpp"
#include "std_msgs_byte_pub_sub_type.hpp"
#include "std_msgs_int16_multi_array_pub_sub_type.hpp"
#include "std_msgs_int8_pub_sub_type.hpp"
#include "std_msgs_string_pub_sub_type.hpp"
#include "std_msgs_float64_pub_sub_type.hpp"
#include "std_msgs_int32_multi_array_pub_sub_type.hpp"
#include "std_msgs_multi_array_dimension_pub_sub_type.hpp"
#include "std_msgs_color_rgba_pub_sub_type.hpp"
#include "std_msgs_header_pub_sub_type.hpp"
#include "std_msgs_byte_multi_array_pub_sub_type.hpp"
#include "std_msgs_u_int16_multi_array_pub_sub_type.hpp"
#include "std_msgs_u_int16_pub_sub_type.hpp"
#include "std_msgs_empty_pub_sub_type.hpp"
#include "std_msgs_u_int64_multi_array_pub_sub_type.hpp"

namespace ros2_to_serial_bridge
{

namespace pubsub
{

struct TopicMapping final
{
    std::string type{""};
    int64_t serial_mapping{-1};
    enum class Direction
    {
        UNKNOWN,
        SERIAL_TO_ROS2,
        ROS2_TO_SERIAL,
    };
    Direction direction{Direction::UNKNOWN};
};

class ROS2Topics
{
public:
    explicit ROS2Topics(rclcpp::Node * node,
                        const std::map<std::string, TopicMapping> & topic_names_and_serialization,
                        ros2_to_serial_bridge::transport::Transporter * transporter)
    {
        if (node == nullptr)
        {
            throw std::runtime_error("Invalid node pointer passed");
        }

        if (transporter == nullptr)
        {
            throw std::runtime_error("Invalid transporter pointer passed");
        }

        // Setup the pub_type_to_factory map for all types
        pub_type_to_factory_["sensor_msgs/MultiDOFJointState"] = sensor_msgs_multi_dof_joint_state_pub_factory;
        pub_type_to_factory_["sensor_msgs/RelativeHumidity"] = sensor_msgs_relative_humidity_pub_factory;
        pub_type_to_factory_["sensor_msgs/FluidPressure"] = sensor_msgs_fluid_pressure_pub_factory;
        pub_type_to_factory_["sensor_msgs/ChannelFloat32"] = sensor_msgs_channel_float32_pub_factory;
        pub_type_to_factory_["sensor_msgs/CameraInfo"] = sensor_msgs_camera_info_pub_factory;
        pub_type_to_factory_["sensor_msgs/CompressedImage"] = sensor_msgs_compressed_image_pub_factory;
        pub_type_to_factory_["sensor_msgs/JoyFeedback"] = sensor_msgs_joy_feedback_pub_factory;
        pub_type_to_factory_["sensor_msgs/JoyFeedbackArray"] = sensor_msgs_joy_feedback_array_pub_factory;
        pub_type_to_factory_["sensor_msgs/RegionOfInterest"] = sensor_msgs_region_of_interest_pub_factory;
        pub_type_to_factory_["sensor_msgs/Imu"] = sensor_msgs_imu_pub_factory;
        pub_type_to_factory_["sensor_msgs/Range"] = sensor_msgs_range_pub_factory;
        pub_type_to_factory_["sensor_msgs/Image"] = sensor_msgs_image_pub_factory;
        pub_type_to_factory_["sensor_msgs/Joy"] = sensor_msgs_joy_pub_factory;
        pub_type_to_factory_["sensor_msgs/BatteryState"] = sensor_msgs_battery_state_pub_factory;
        pub_type_to_factory_["sensor_msgs/PointField"] = sensor_msgs_point_field_pub_factory;
        pub_type_to_factory_["sensor_msgs/Temperature"] = sensor_msgs_temperature_pub_factory;
        pub_type_to_factory_["sensor_msgs/NavSatFix"] = sensor_msgs_nav_sat_fix_pub_factory;
        pub_type_to_factory_["sensor_msgs/PointCloud2"] = sensor_msgs_point_cloud2_pub_factory;
        pub_type_to_factory_["sensor_msgs/NavSatStatus"] = sensor_msgs_nav_sat_status_pub_factory;
        pub_type_to_factory_["sensor_msgs/LaserEcho"] = sensor_msgs_laser_echo_pub_factory;
        pub_type_to_factory_["sensor_msgs/PointCloud"] = sensor_msgs_point_cloud_pub_factory;
        pub_type_to_factory_["sensor_msgs/JointState"] = sensor_msgs_joint_state_pub_factory;
        pub_type_to_factory_["sensor_msgs/Illuminance"] = sensor_msgs_illuminance_pub_factory;
        pub_type_to_factory_["sensor_msgs/LaserScan"] = sensor_msgs_laser_scan_pub_factory;
        pub_type_to_factory_["sensor_msgs/MagneticField"] = sensor_msgs_magnetic_field_pub_factory;
        pub_type_to_factory_["sensor_msgs/TimeReference"] = sensor_msgs_time_reference_pub_factory;
        pub_type_to_factory_["sensor_msgs/MultiEchoLaserScan"] = sensor_msgs_multi_echo_laser_scan_pub_factory;
        pub_type_to_factory_["std_msgs/Char"] = std_msgs_char_pub_factory;
        pub_type_to_factory_["std_msgs/Bool"] = std_msgs_bool_pub_factory;
        pub_type_to_factory_["std_msgs/UInt64"] = std_msgs_u_int64_pub_factory;
        pub_type_to_factory_["std_msgs/Int64MultiArray"] = std_msgs_int64_multi_array_pub_factory;
        pub_type_to_factory_["std_msgs/Int8MultiArray"] = std_msgs_int8_multi_array_pub_factory;
        pub_type_to_factory_["std_msgs/MultiArrayLayout"] = std_msgs_multi_array_layout_pub_factory;
        pub_type_to_factory_["std_msgs/UInt8MultiArray"] = std_msgs_u_int8_multi_array_pub_factory;
        pub_type_to_factory_["std_msgs/Float32"] = std_msgs_float32_pub_factory;
        pub_type_to_factory_["std_msgs/Int16"] = std_msgs_int16_pub_factory;
        pub_type_to_factory_["std_msgs/Float64MultiArray"] = std_msgs_float64_multi_array_pub_factory;
        pub_type_to_factory_["std_msgs/Float32MultiArray"] = std_msgs_float32_multi_array_pub_factory;
        pub_type_to_factory_["std_msgs/Int64"] = std_msgs_int64_pub_factory;
        pub_type_to_factory_["std_msgs/Int32"] = std_msgs_int32_pub_factory;
        pub_type_to_factory_["std_msgs/UInt32MultiArray"] = std_msgs_u_int32_multi_array_pub_factory;
        pub_type_to_factory_["std_msgs/UInt8"] = std_msgs_u_int8_pub_factory;
        pub_type_to_factory_["std_msgs/UInt32"] = std_msgs_u_int32_pub_factory;
        pub_type_to_factory_["std_msgs/Byte"] = std_msgs_byte_pub_factory;
        pub_type_to_factory_["std_msgs/Int16MultiArray"] = std_msgs_int16_multi_array_pub_factory;
        pub_type_to_factory_["std_msgs/Int8"] = std_msgs_int8_pub_factory;
        pub_type_to_factory_["std_msgs/String"] = std_msgs_string_pub_factory;
        pub_type_to_factory_["std_msgs/Float64"] = std_msgs_float64_pub_factory;
        pub_type_to_factory_["std_msgs/Int32MultiArray"] = std_msgs_int32_multi_array_pub_factory;
        pub_type_to_factory_["std_msgs/MultiArrayDimension"] = std_msgs_multi_array_dimension_pub_factory;
        pub_type_to_factory_["std_msgs/ColorRGBA"] = std_msgs_color_rgba_pub_factory;
        pub_type_to_factory_["std_msgs/Header"] = std_msgs_header_pub_factory;
        pub_type_to_factory_["std_msgs/ByteMultiArray"] = std_msgs_byte_multi_array_pub_factory;
        pub_type_to_factory_["std_msgs/UInt16MultiArray"] = std_msgs_u_int16_multi_array_pub_factory;
        pub_type_to_factory_["std_msgs/UInt16"] = std_msgs_u_int16_pub_factory;
        pub_type_to_factory_["std_msgs/Empty"] = std_msgs_empty_pub_factory;
        pub_type_to_factory_["std_msgs/UInt64MultiArray"] = std_msgs_u_int64_multi_array_pub_factory;

        // Setup the sub_type_to_factory map for all types
        sub_type_to_factory_["sensor_msgs/MultiDOFJointState"] = sensor_msgs_multi_dof_joint_state_sub_factory;
        sub_type_to_factory_["sensor_msgs/RelativeHumidity"] = sensor_msgs_relative_humidity_sub_factory;
        sub_type_to_factory_["sensor_msgs/FluidPressure"] = sensor_msgs_fluid_pressure_sub_factory;
        sub_type_to_factory_["sensor_msgs/ChannelFloat32"] = sensor_msgs_channel_float32_sub_factory;
        sub_type_to_factory_["sensor_msgs/CameraInfo"] = sensor_msgs_camera_info_sub_factory;
        sub_type_to_factory_["sensor_msgs/CompressedImage"] = sensor_msgs_compressed_image_sub_factory;
        sub_type_to_factory_["sensor_msgs/JoyFeedback"] = sensor_msgs_joy_feedback_sub_factory;
        sub_type_to_factory_["sensor_msgs/JoyFeedbackArray"] = sensor_msgs_joy_feedback_array_sub_factory;
        sub_type_to_factory_["sensor_msgs/RegionOfInterest"] = sensor_msgs_region_of_interest_sub_factory;
        sub_type_to_factory_["sensor_msgs/Imu"] = sensor_msgs_imu_sub_factory;
        sub_type_to_factory_["sensor_msgs/Range"] = sensor_msgs_range_sub_factory;
        sub_type_to_factory_["sensor_msgs/Image"] = sensor_msgs_image_sub_factory;
        sub_type_to_factory_["sensor_msgs/Joy"] = sensor_msgs_joy_sub_factory;
        sub_type_to_factory_["sensor_msgs/BatteryState"] = sensor_msgs_battery_state_sub_factory;
        sub_type_to_factory_["sensor_msgs/PointField"] = sensor_msgs_point_field_sub_factory;
        sub_type_to_factory_["sensor_msgs/Temperature"] = sensor_msgs_temperature_sub_factory;
        sub_type_to_factory_["sensor_msgs/NavSatFix"] = sensor_msgs_nav_sat_fix_sub_factory;
        sub_type_to_factory_["sensor_msgs/PointCloud2"] = sensor_msgs_point_cloud2_sub_factory;
        sub_type_to_factory_["sensor_msgs/NavSatStatus"] = sensor_msgs_nav_sat_status_sub_factory;
        sub_type_to_factory_["sensor_msgs/LaserEcho"] = sensor_msgs_laser_echo_sub_factory;
        sub_type_to_factory_["sensor_msgs/PointCloud"] = sensor_msgs_point_cloud_sub_factory;
        sub_type_to_factory_["sensor_msgs/JointState"] = sensor_msgs_joint_state_sub_factory;
        sub_type_to_factory_["sensor_msgs/Illuminance"] = sensor_msgs_illuminance_sub_factory;
        sub_type_to_factory_["sensor_msgs/LaserScan"] = sensor_msgs_laser_scan_sub_factory;
        sub_type_to_factory_["sensor_msgs/MagneticField"] = sensor_msgs_magnetic_field_sub_factory;
        sub_type_to_factory_["sensor_msgs/TimeReference"] = sensor_msgs_time_reference_sub_factory;
        sub_type_to_factory_["sensor_msgs/MultiEchoLaserScan"] = sensor_msgs_multi_echo_laser_scan_sub_factory;
        sub_type_to_factory_["std_msgs/Char"] = std_msgs_char_sub_factory;
        sub_type_to_factory_["std_msgs/Bool"] = std_msgs_bool_sub_factory;
        sub_type_to_factory_["std_msgs/UInt64"] = std_msgs_u_int64_sub_factory;
        sub_type_to_factory_["std_msgs/Int64MultiArray"] = std_msgs_int64_multi_array_sub_factory;
        sub_type_to_factory_["std_msgs/Int8MultiArray"] = std_msgs_int8_multi_array_sub_factory;
        sub_type_to_factory_["std_msgs/MultiArrayLayout"] = std_msgs_multi_array_layout_sub_factory;
        sub_type_to_factory_["std_msgs/UInt8MultiArray"] = std_msgs_u_int8_multi_array_sub_factory;
        sub_type_to_factory_["std_msgs/Float32"] = std_msgs_float32_sub_factory;
        sub_type_to_factory_["std_msgs/Int16"] = std_msgs_int16_sub_factory;
        sub_type_to_factory_["std_msgs/Float64MultiArray"] = std_msgs_float64_multi_array_sub_factory;
        sub_type_to_factory_["std_msgs/Float32MultiArray"] = std_msgs_float32_multi_array_sub_factory;
        sub_type_to_factory_["std_msgs/Int64"] = std_msgs_int64_sub_factory;
        sub_type_to_factory_["std_msgs/Int32"] = std_msgs_int32_sub_factory;
        sub_type_to_factory_["std_msgs/UInt32MultiArray"] = std_msgs_u_int32_multi_array_sub_factory;
        sub_type_to_factory_["std_msgs/UInt8"] = std_msgs_u_int8_sub_factory;
        sub_type_to_factory_["std_msgs/UInt32"] = std_msgs_u_int32_sub_factory;
        sub_type_to_factory_["std_msgs/Byte"] = std_msgs_byte_sub_factory;
        sub_type_to_factory_["std_msgs/Int16MultiArray"] = std_msgs_int16_multi_array_sub_factory;
        sub_type_to_factory_["std_msgs/Int8"] = std_msgs_int8_sub_factory;
        sub_type_to_factory_["std_msgs/String"] = std_msgs_string_sub_factory;
        sub_type_to_factory_["std_msgs/Float64"] = std_msgs_float64_sub_factory;
        sub_type_to_factory_["std_msgs/Int32MultiArray"] = std_msgs_int32_multi_array_sub_factory;
        sub_type_to_factory_["std_msgs/MultiArrayDimension"] = std_msgs_multi_array_dimension_sub_factory;
        sub_type_to_factory_["std_msgs/ColorRGBA"] = std_msgs_color_rgba_sub_factory;
        sub_type_to_factory_["std_msgs/Header"] = std_msgs_header_sub_factory;
        sub_type_to_factory_["std_msgs/ByteMultiArray"] = std_msgs_byte_multi_array_sub_factory;
        sub_type_to_factory_["std_msgs/UInt16MultiArray"] = std_msgs_u_int16_multi_array_sub_factory;
        sub_type_to_factory_["std_msgs/UInt16"] = std_msgs_u_int16_sub_factory;
        sub_type_to_factory_["std_msgs/Empty"] = std_msgs_empty_sub_factory;
        sub_type_to_factory_["std_msgs/UInt64MultiArray"] = std_msgs_u_int64_multi_array_sub_factory;

        serial_to_pub_ = std::make_unique<std::map<topic_id_size_t, std::unique_ptr<Publisher>>>();
        serial_subs_ = std::make_unique<std::vector<std::unique_ptr<Subscription>>>();

        // Now go through every topic and ensure that it has a valid type
        // (not ""), a valid serial mapping (not 0), and a valid direction
        // (not UNKNOWN).
        for (const auto & t : topic_names_and_serialization)
        {
            if (t.second.type.empty() || t.second.serial_mapping < 0 || t.second.direction == TopicMapping::Direction::UNKNOWN)
            {
                fprintf(stderr, "Topic '%s' missing type, serial_mapping, or direction; skipping\n", t.first.c_str());
                continue;
            }

            if (t.second.serial_mapping == 0 || t.second.serial_mapping == 1)
            {
                fprintf(stderr, "Topic '%s' uses reserved serial mapping number %ld; skipping\n", t.first.c_str(), t.second.serial_mapping);
                continue;
            }

            if (t.second.serial_mapping > std::numeric_limits<topic_id_size_t>::max())
            {
                fprintf(stderr, "Topic '%s' uses serial mapping number > %d; skipping\n", t.first.c_str(), std::numeric_limits<topic_id_size_t>::max());
                continue;
            }

            // Check to make sure this isn't a duplicate publication ID.
            if (serial_to_pub_->count(t.second.serial_mapping) != 0)
            {
                throw std::runtime_error("Topic '" + t.first + "' has duplicate pub serial_mapping; this is not allowed");
            }

            // Check to make sure this isn't a duplicate subscription ID.
            if (std::find_if(serial_subs_->begin(), serial_subs_->end(),
                             [t](std::unique_ptr<Subscription> & e) {
                                 return t.second.serial_mapping == e->get_serial_mapping();
                             }) != serial_subs_->end())
            {
                throw std::runtime_error("Topic '" + t.first + "' has duplicate sub serial_mapping; this is not allowed");
            }

            // OK, we've verified that this is a valid topic.  Validate that the
            // direction is valid.
            if (t.second.direction != TopicMapping::Direction::SERIAL_TO_ROS2 && t.second.direction != TopicMapping::Direction::ROS2_TO_SERIAL)
            {
                fprintf(stderr, "Topic '%s' has unsupported direction '%d'; skipping\n", t.first.c_str(), static_cast<int32_t>(t.second.direction));
                continue;
            }

            if (t.second.direction == TopicMapping::Direction::SERIAL_TO_ROS2)
            {
                if (pub_type_to_factory_.count(t.second.type) == 0)
                {
                    fprintf(stderr, "Topic '%s' has unsupported pub type '%s'; skipping\n", t.first.c_str(), t.second.type.c_str());
                    continue;
                }
                (*serial_to_pub_)[t.second.serial_mapping] = pub_type_to_factory_[t.second.type](node, t.first);
            }
            else
            {
                if (sub_type_to_factory_.count(t.second.type) == 0)
                {
                    fprintf(stderr, "Topic '%s' has unsupported sub type '%s'; skipping\n", t.first.c_str(), t.second.type.c_str());
                    continue;
                }
                serial_subs_->push_back(sub_type_to_factory_[t.second.type](node, t.second.serial_mapping, t.first, transporter));
            }
        }
    }

    void dispatch(topic_id_size_t topic_ID, uint8_t *data_buffer, ssize_t length)
    {
        if (serial_to_pub_->count(topic_ID) > 0)
        {
            (*serial_to_pub_)[topic_ID]->dispatch(data_buffer, length);
        }
    }

protected:
    std::unique_ptr<std::map<topic_id_size_t, std::unique_ptr<Publisher>>> serial_to_pub_;
    std::unique_ptr<std::vector<std::unique_ptr<Subscription>>> serial_subs_;

private:
    std::map<std::string, std::function<std::unique_ptr<Publisher>(rclcpp::Node *, const std::string &)>> pub_type_to_factory_;
    std::map<std::string, std::function<std::unique_ptr<Subscription>(rclcpp::Node *, topic_id_size_t, const std::string &, ros2_to_serial_bridge::transport::Transporter *)>> sub_type_to_factory_;
};

}  // namespace pubsub
}  // namespace ros2_to_serial_bridge

#endif
