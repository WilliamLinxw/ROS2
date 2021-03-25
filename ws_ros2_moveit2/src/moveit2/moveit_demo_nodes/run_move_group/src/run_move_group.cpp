#include <moveit/move_group_interface/move_group_interface.h>
#include <moveit/planning_scene_interface/planning_scene_interface.h>

#include <moveit_msgs/msg/display_robot_state.hpp>
#include <moveit_msgs/msg/display_trajectory.hpp>

#include <moveit_msgs/msg/attached_collision_object.hpp>
#include <moveit_msgs/msg/collision_object.hpp>

#include <moveit/macros/console_colors.h>
// https://ros-planning.github.io/moveit_tutorials/doc/move_group_interface/move_group_interface_tutorial.html
using namespace std;

static const rclcpp::Logger LOGGER = rclcpp::get_logger("move_group_demo");

int main(int argc, char** argv)
{
  rclcpp::init(argc, argv);
  rclcpp::NodeOptions node_options;
  node_options.automatically_declare_parameters_from_overrides(true);
  auto move_group_node = rclcpp::Node::make_shared("move_group_interface_tutorial", node_options);
  // For current state monitor
  rclcpp::executors::SingleThreadedExecutor executor;
  executor.add_node(move_group_node);
  std::thread([&executor]() { executor.spin(); }).detach();

  static const std::string PLANNING_GROUP = "panda_arm";

  moveit::planning_interface::MoveGroupInterface move_group(move_group_node, PLANNING_GROUP);

  moveit::planning_interface::PlanningSceneInterface planning_scene_interface(move_group_node->get_name());


  // We can print the name of the reference frame for this robot.
  // RCLCPP_INFO(LOGGER, "Planning frame: %s", move_group.getPlanningFrame().c_str());
  cout << "Planning frame: " << move_group.getPlanningFrame().c_str() << endl;
  // We can also print the name of the end-effector link for this group.
  RCLCPP_INFO(LOGGER, "End effector link: %s", move_group.getEndEffectorLink().c_str());

  // We can get a list of all the groups in the robot:
  RCLCPP_INFO(LOGGER, "Available Planning Groups:");
  std::copy(move_group.getJointModelGroupNames().begin(), move_group.getJointModelGroupNames().end(),
            std::ostream_iterator<std::string>(std::cout, ", "));

  // move to write position
  move_group.setNamedTarget("write_pos");
  move_group.move();

  moveit::planning_interface::MoveGroupInterface::Plan my_plan;
  bool success = (move_group.plan(my_plan) == moveit::planning_interface::MoveItErrorCode::SUCCESS);

  
  
  // // Planning to paint a circle
  // double center_x = 0.370;
  // double center_y = -0.217;
  // double center_z = 0.566;
  // double radius = 0.06;
  // double theta;
  // geometry_msgs::msg::Pose target_pose;

  // // Cartesian Paths
  // std::vector<geometry_msgs::msg::Pose> waypoints;
  // for(theta = 0.0; theta <= M_PI*2+0.6; theta+=0.2)
  // {
  //   target_pose.position.x = center_x + radius * cos(theta);
  //   target_pose.position.y = center_y + radius * sin(theta);
  //   target_pose.position.z = center_z;
  //   waypoints.push_back(target_pose);  // up and left
  // }
  // // move_group.setPositionTarget(0.299,-0.249,0.698);

  // // Now, we call the planner to compute the plan and visualize it.
  // // Note that we are just planning, not asking move_group
  // // to actually move the robot.
  // moveit_msgs::msg::RobotTrajectory trajectory;
  // const double jump_threshold = 0.0;
  // const double eef_step = 0.01;
  // double fraction = move_group.computeCartesianPath(waypoints, eef_step, jump_threshold, trajectory);
  // RCLCPP_INFO(LOGGER, "Visualizing plan 4 (Cartesian path) (%.2f%% acheived)", fraction * 100.0);

  // // prompt("Press 'Enter' to continue the demo");
  // // You can execute a trajectory like this.
  // move_group.execute(trajectory);

  // RCLCPP_INFO(LOGGER, "Plan 1 (pose goal) %s", success ? "SUCCEEDED" : "FAILED");

  
  
  // Planning to paint a square
  double center_x = 0.250;
  double center_y = -0.300;
  double center_z = 0.500;
  double side;
  double i;
  geometry_msgs::msg::Pose target_pose;

  // Cartesian Paths
  std::vector<geometry_msgs::msg::Pose> waypoints;
  for(side = 0.02; side <= 0.3; side += 0.02){
    for(i = 0; i <= 8; i += 1)
    {
      if(i == 0){
        // Move to the top of the square
        target_pose.position.x = center_x + side/2;
        target_pose.position.y = center_y;
        target_pose.position.z = center_z;
        waypoints.push_back(target_pose);
      }
      if(i == 1){
        // Move to the upper left of the square
        target_pose.position.x = center_x + side/2;
        target_pose.position.y = center_y + side/2;
        target_pose.position.z = center_z;
        waypoints.push_back(target_pose);
      }
      if(i == 2){
        // Move to the left of the square-
        target_pose.position.x = center_x;
        target_pose.position.y = center_y + side/2;
        target_pose.position.z = center_z;
        waypoints.push_back(target_pose);
      }
      if(i == 3){
        // Move to the lower left of the square
        target_pose.position.x = center_x - side/2;
        target_pose.position.y = center_y + side/2;
        target_pose.position.z = center_z;
        waypoints.push_back(target_pose);
      }
      if(i == 4){
        // Move to the bottom of the square
        target_pose.position.x = center_x - side/2;
        target_pose.position.y = center_y;
        target_pose.position.z = center_z;
        waypoints.push_back(target_pose);
      }
      if(i == 5){
        // Move to the lower right of the square
        target_pose.position.x = center_x - side/2;
        target_pose.position.y = center_y - side/2;
        target_pose.position.z = center_z;
        waypoints.push_back(target_pose);
      }
      if(i == 6){
        // Move to the right of the square
        target_pose.position.x = center_x;
        target_pose.position.y = center_y - side/2;
        target_pose.position.z = center_z;
        waypoints.push_back(target_pose);
      }
      if(i == 7){
        // Move to the upper right of the square
        target_pose.position.x = center_x + side/2;
        target_pose.position.y = center_y - side/2;
        target_pose.position.z = center_z;
        waypoints.push_back(target_pose);
      }
      if(i == 8){
        // Move back to the top of the square
        target_pose.position.x = center_x + side/2;
        target_pose.position.y = center_y;
        target_pose.position.z = center_z;
        waypoints.push_back(target_pose);
      }
    }
  }
  // move_group.setPositionTarget(0.299,-0.249,0.698);

  // Now, we call the planner to compute the plan and visualize it.
  // Note that we are just planning, not asking move_group
  // to actually move the robot.
  moveit_msgs::msg::RobotTrajectory trajectory;
  const double jump_threshold = 0.0;
  const double eef_step = 0.01;
  double fraction = move_group.computeCartesianPath(waypoints, eef_step, jump_threshold, trajectory);
  RCLCPP_INFO(LOGGER, "Visualizing plan 4 (Cartesian path) (%.2f%% acheived)", fraction * 100.0);

  // prompt("Press 'Enter' to continue the demo");
  // You can execute a trajectory like this.
  move_group.execute(trajectory);

  RCLCPP_INFO(LOGGER, "Plan 1 (pose goal) %s", success ? "SUCCEEDED" : "FAILED");




  // move to write position
  move_group.setNamedTarget("write_pos");
  move_group.move();

  move_group.clearPoseTargets();
  rclcpp::shutdown();
  return 0;
}
