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

#include <memory>
#include <string>

#include <rclcpp/rclcpp.hpp>

#include <fastcdr/Cdr.h>
#include <fastcdr/FastCdr.h>

#include <std_msgs/msg/float64.hpp>
#include <std_msgs/msg/float64__rosidl_typesupport_fastrtps_cpp.hpp>

#include "std_msgs_float64_pub_sub_type.hpp"

#include "ros2_serial_example/publisher.hpp"
#include "ros2_serial_example/publisher_impl.hpp"
#include "ros2_serial_example/subscription.hpp"
#include "ros2_serial_example/subscription_impl.hpp"

namespace ros2_to_serial_bridge
{

namespace pubsub
{

std::unique_ptr<Publisher> std_msgs_float64_pub_factory(rclcpp::Node * node, const std::string & topic)
{
    typedef bool (*des_t)(eprosima::fastcdr::Cdr &, std_msgs::msg::Float64 &);
    des_t des = std_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize;
    return std::make_unique<PublisherImpl<std_msgs::msg::Float64>>(node, topic, des);
}

std::unique_ptr<Subscription> std_msgs_float64_sub_factory(rclcpp::Node * node, topic_id_size_t serial_mapping, const std::string & topic, ros2_to_serial_bridge::transport::Transporter * transporter)
{
    typedef size_t (*getsize_t)(const std_msgs::msg::Float64 &, size_t);
    getsize_t getsize = std_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size;
    typedef bool (*ser_t)(const std_msgs::msg::Float64 &, eprosima::fastcdr::Cdr &);
    ser_t ser = std_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize;

    return std::make_unique<SubscriptionImpl<std_msgs::msg::Float64>>(node, serial_mapping, topic, transporter, getsize, ser);
}

}  // namespace pubsub
}  // namespace ros2_to_serial_bridge
