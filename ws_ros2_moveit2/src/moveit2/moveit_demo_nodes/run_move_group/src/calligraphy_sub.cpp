#include <moveit/move_group_interface/move_group_interface.h>
#include <moveit/planning_scene_interface/planning_scene_interface.h>

#include <moveit_msgs/msg/display_robot_state.hpp>
#include <moveit_msgs/msg/display_trajectory.hpp>

#include <moveit_msgs/msg/attached_collision_object.hpp>
#include <moveit_msgs/msg/collision_object.hpp>

#include <moveit/macros/console_colors.h>

#include<vector>
#include<string.h>
#include<algorithm>

#include <fstream>

#include <memory>
#include <iostream>

#include "rclcpp/rclcpp.hpp"
#include "std_msgs/msg/string.hpp"
#include "std_msgs/msg/float64_multi_array.hpp"

using std::placeholders::_1;
using namespace std;

static const rclcpp::Logger LOGGER = rclcpp::get_logger("move_group_demo");

class MinimalSubscriber : public rclcpp::Node{
  public:
    MinimalSubscriber()
    : Node("minimal_subscriber")
    {
      subscription_ = this->create_subscription<std_msgs::msg::Float64MultiArray>(
      "arm_strokes", 10, std::bind(&MinimalSubscriber::topic_callback, this, _1));
    }

  private:
    void topic_callback(const std_msgs::msg::Float64MultiArray::SharedPtr msg) const
    {
      rclcpp::NodeOptions node_options;
      node_options.automatically_declare_parameters_from_overrides(true);
      auto move_group_node = rclcpp::Node::make_shared("move_group_interface_tutorial", node_options);
      // For current state monitor
      rclcpp::executors::SingleThreadedExecutor executor;
      executor.add_node(move_group_node);
      std::thread([&executor]() { executor.spin(); }).detach();
      
      // Parameters for Moveit
      static const std::string PLANNING_GROUP = "panda_arm";

      moveit::planning_interface::MoveGroupInterface move_group(move_group_node, PLANNING_GROUP);

      moveit::planning_interface::PlanningSceneInterface planning_scene_interface(move_group_node->get_name());
      
      // Print out the message
      for (uint i = 0; i < msg->data.size(); i++){
        cout << msg->data[i] << endl;
      }

      if(msg->data.size() != 0){
        // Create data structure of Pose and an empty vector for storing the waypoints for Cartesian Planning
        geometry_msgs::msg::Pose target_pose;
        
        std::vector<geometry_msgs::msg::Pose> waypoints;

        target_pose.position.x = msg->data[0];
        target_pose.position.y = msg->data[1];
        target_pose.position.z = msg->data[2];
        waypoints.push_back(target_pose);

        // Now, we call the planner to compute the plan and visualize it.
        // Note that we are just planning, not asking move_group
        // to actually move the robot.
        moveit_msgs::msg::RobotTrajectory trajectory;
        const double jump_threshold = 0.0;
        const double eef_step = 0.01;
        double fraction = move_group.computeCartesianPath(waypoints, eef_step, jump_threshold, trajectory);
        RCLCPP_INFO(LOGGER, "Visualizing plan 4 (Cartesian path) (%.2f%% acheived)", fraction * 100.0);

        // You can execute a trajectory like this.
        bool execute = false;
        if(execute == true){
          move_group.execute(trajectory);
        }
      }


    }
    rclcpp::Subscription<std_msgs::msg::Float64MultiArray>::SharedPtr subscription_;};

int main(int argc, char * argv[])
{
  rclcpp::init(argc, argv);
  // rclcpp::NodeOptions node_options;
  // node_options.automatically_declare_parameters_from_overrides(true);
  // auto move_group_node = rclcpp::Node::make_shared("move_group_interface_tutorial", node_options);
  // // For current state monitor
  // rclcpp::executors::SingleThreadedExecutor executor;
  // executor.add_node(move_group_node);
  // std::thread([&executor]() { executor.spin(); }).detach();
  
  // // Parameters for Moveit
  // static const std::string PLANNING_GROUP = "panda_arm";

  // moveit::planning_interface::MoveGroupInterface move_group(move_group_node, PLANNING_GROUP);

  // moveit::planning_interface::PlanningSceneInterface planning_scene_interface(move_group_node->get_name());

  // // We can print the name of the reference frame for this robot.
  // // RCLCPP_INFO(LOGGER, "Planning frame: %s", move_group.getPlanningFrame().c_str());
  // cout << "Planning frame: " << move_group.getPlanningFrame().c_str() << endl;
  // // We can also print the name of the end-effector link for this group.
  // RCLCPP_INFO(LOGGER, "End effector link: %s", move_group.getEndEffectorLink().c_str());

  // // We can get a list of all the groups in the robot:
  // RCLCPP_INFO(LOGGER, "Available Planning Groups:");
  // std::copy(move_group.getJointModelGroupNames().begin(), move_group.getJointModelGroupNames().end(),
  //           std::ostream_iterator<std::string>(std::cout, ", "));

  // move to write position
  // move_group.setNamedTarget("write_pos");
  // move_group.move();

  // Start the subscriber
  rclcpp::spin(std::make_shared<MinimalSubscriber>());
  rclcpp::shutdown();
  return 0;
}
