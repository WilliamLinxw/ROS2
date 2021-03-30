#include <moveit/move_group_interface/move_group_interface.h>
#include <moveit/planning_scene_interface/planning_scene_interface.h>

#include <moveit_msgs/msg/display_robot_state.hpp>
#include <moveit_msgs/msg/display_trajectory.hpp>

#include <moveit_msgs/msg/attached_collision_object.hpp>
#include <moveit_msgs/msg/collision_object.hpp>

#include <moveit/macros/console_colors.h>

#include<vector>
#include<string.h>
#include<iostream>
#include<algorithm>

#include <fstream>
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

  /*
    CHANGE THE DRAWING_OPTION FOR DIFFERENT USAGE
  */

  // When the drawing option is 0, draw a circle. 
  // When it is 1, draw one series of squares based on one center position.
  // When it is 2, draw series of series of squares to test the moving space of the robot arm.
  int drawing_option = 2;
  
  if(drawing_option == 0){

    // Planning to paint a circle
    double center_x = 0.370;
    double center_y = -0.217;
    double center_z = 0.566;
    double radius = 0.06;
    double theta;
    geometry_msgs::msg::Pose target_pose;

    // Cartesian Paths
    std::vector<geometry_msgs::msg::Pose> waypoints;
    for(theta = 0.0; theta <= M_PI*2+0.6; theta+=0.2)
    {
      target_pose.position.x = center_x + radius * cos(theta);
      target_pose.position.y = center_y + radius * sin(theta);
      target_pose.position.z = center_z;
      waypoints.push_back(target_pose);  // up and left
    }

    // Now, we call the planner to compute the plan and visualize it.
    // Note that we are just planning, not asking move_group
    // to actually move the robot.
    moveit_msgs::msg::RobotTrajectory trajectory;
    const double jump_threshold = 0.0;
    const double eef_step = 0.01;
    double fraction = move_group.computeCartesianPath(waypoints, eef_step, jump_threshold, trajectory);
    RCLCPP_INFO(LOGGER, "Visualizing plan 4 (Cartesian path) (%.2f%% acheived)", fraction * 100.0);

    // You can execute a trajectory like this.
    move_group.execute(trajectory);
  }

  else if(drawing_option == 1){
    
    // Planning to paint a series of square
    double center_x = 0.450;
    double center_y = -0.300;
    double center_z = 0.600;
    double side;
    double largest_side = 0.1;
    double i;
    geometry_msgs::msg::Pose target_pose;

    // Cartesian Paths
    std::vector<geometry_msgs::msg::Pose> waypoints;
    for(side = 0.02; side <= largest_side; side += 0.02){
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
          // Move to the upper right of the square
          target_pose.position.x = center_x + side/2;
          target_pose.position.y = center_y + side/2;
          target_pose.position.z = center_z;
          waypoints.push_back(target_pose);
        }
        if(i == 2){
          // Move to the right of the square-
          target_pose.position.x = center_x;
          target_pose.position.y = center_y + side/2;
          target_pose.position.z = center_z;
          waypoints.push_back(target_pose);
        }
        if(i == 3){
          // Move to the lower right of the square
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
          // Move to the lower left of the square
          target_pose.position.x = center_x - side/2;
          target_pose.position.y = center_y - side/2;
          target_pose.position.z = center_z;
          waypoints.push_back(target_pose);
        }
        if(i == 6){
          // Move to the left of the square
          target_pose.position.x = center_x;
          target_pose.position.y = center_y - side/2;
          target_pose.position.z = center_z;
          waypoints.push_back(target_pose);
        }
        if(i == 7){
          // Move to the upper left of the square
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

    // Now, we call the planner to compute the plan and visualize it.
    // Note that we are just planning, not asking move_group
    // to actually move the robot.
    moveit_msgs::msg::RobotTrajectory trajectory;
    const double jump_threshold = 0.0;
    const double eef_step = 0.01;
    double fraction = move_group.computeCartesianPath(waypoints, eef_step, jump_threshold, trajectory);
    RCLCPP_INFO(LOGGER, "Visualizing plan 4 (Cartesian path) (%.2f%% acheived)", fraction * 100.0);

    // You can execute a trajectory like this.
    move_group.execute(trajectory);
  }
  
  else if(drawing_option == 2){
  
    // Create a txt file to store the data
    ofstream data("/home/ubuntu/ws_ros2/data.txt");

    // Test of moving space
    // Planning to paint a series of squares
    double center_x;
    double center_y;
    double center_z;
    double largest_side = 0.1;
    double side;
    double i;

    // Create vectors to store the x, y, z data where the drawings are successful
    vector<double>successful_x, successful_y, successful_z;

    geometry_msgs::msg::Pose target_pose;
    RCLCPP_INFO(LOGGER, "Side length of the square: %f", largest_side);

    // Cartesian Paths， traverse x first, then y, then z.
    for(center_z = 0.250; center_z <= 1.0; center_z += 0.05){
      for(center_y = -1.0; center_y <= 0.0; center_y += 0.05){
        for(center_x = -0.1; center_x <= 0.500; center_x += 0.05){
          std::vector<geometry_msgs::msg::Pose> waypoints;
          for(side = 0.02; side <= largest_side; side += 0.02){
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
                // Move to the upper right of the square
                target_pose.position.x = center_x + side/2;
                target_pose.position.y = center_y + side/2;
                target_pose.position.z = center_z;
                waypoints.push_back(target_pose);
              }
              if(i == 2){
                // Move to the right of the square-
                target_pose.position.x = center_x;
                target_pose.position.y = center_y + side/2;
                target_pose.position.z = center_z;
                waypoints.push_back(target_pose);
              }
              if(i == 3){
                // Move to the lower right of the square
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
                // Move to the lower left of the square
                target_pose.position.x = center_x - side/2;
                target_pose.position.y = center_y - side/2;
                target_pose.position.z = center_z;
                waypoints.push_back(target_pose);
              }
              if(i == 6){
                // Move to the left of the square
                target_pose.position.x = center_x;
                target_pose.position.y = center_y - side/2;
                target_pose.position.z = center_z;
                waypoints.push_back(target_pose);
              }
              if(i == 7){
                // Move to the upper left of the square
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

          // Now, we call the planner to compute the plan and visualize it.
          // Note that we are just planning, not asking move_group
          // to actually move the robot.
          moveit_msgs::msg::RobotTrajectory trajectory;
          const double jump_threshold = 0.0;
          const double eef_step = 0.01;
          double fraction = move_group.computeCartesianPath(waypoints, eef_step, jump_threshold, trajectory);
          
          if(fraction >= 0.99){
            successful_x.push_back(center_x);
            successful_y.push_back(center_y);
            successful_z.push_back(center_z);
            RCLCPP_INFO(LOGGER, "Center of the square: X: %f, Y: %f, Z: %f", center_x, center_y, center_z);
            RCLCPP_INFO(LOGGER, "Visualizing plan 4 (Cartesian path) (%.2f%% acheived)", fraction * 100.0);
            
            // Write data to the file
            data << center_x << ", " << center_y << ", " << center_z << endl;
          }
          // You can execute a trajectory like this.
          // move_group.execute(trajectory);
        }
      }
    }

    RCLCPP_INFO(LOGGER, "Size for x: %d", successful_x.size());
    RCLCPP_INFO(LOGGER, "Size for y: %d", successful_y.size());
    RCLCPP_INFO(LOGGER, "Size for z: %d", successful_z.size());

    // sort the successful x, y, and z to find the range of each axis
    sort(successful_x.begin(), successful_x.end());
    sort(successful_y.begin(), successful_y.end());
    sort(successful_z.begin(), successful_z.end());

    RCLCPP_INFO(LOGGER, "Lower limit of x: %f", successful_x[0]);
    RCLCPP_INFO(LOGGER, "Upper limit of x: %f", successful_x[successful_x.size()-1]);
    RCLCPP_INFO(LOGGER, "Lower limit of y: %f", successful_y[0]);
    RCLCPP_INFO(LOGGER, "Upper limit of y: %f", successful_y[successful_y.size()-1]);
    RCLCPP_INFO(LOGGER, "Lower limit of z: %f", successful_z[0]);
    RCLCPP_INFO(LOGGER, "Upper limit of z: %f", successful_z[successful_z.size()-1]);
  }


  // move to write position
  move_group.setNamedTarget("write_pos");
  move_group.move();

  move_group.clearPoseTargets();
  rclcpp::shutdown();
  return 0;
}
