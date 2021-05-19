#include "rclcpp/rclcpp.hpp"
#include "rclcpp/time.hpp"
#include <moveit_msgs/msg/display_robot_state.hpp>
#include <moveit_msgs/msg/display_trajectory.hpp>
// MoveIt
#include <moveit/robot_model_loader/robot_model_loader.h>
#include <moveit/robot_model/robot_model.h>
#include <moveit/robot_state/robot_state.h>

#include <fstream>
#include <iostream>
#include <string>



#define write_points_num 897

static const rclcpp::Logger LOGGER = rclcpp::get_logger("robot_arm_ik");


int main(int argc, char * argv[])
{
  rclcpp::init(argc, argv);
  rclcpp::NodeOptions node_options;
  node_options.automatically_declare_parameters_from_overrides(true);
  auto robot_arm_ik_node = rclcpp::Node::make_shared("move_group_interface_tutorial", node_options);
  // For current state monitor
  rclcpp::executors::SingleThreadedExecutor executor;
  executor.add_node(robot_arm_ik_node);
  std::thread([&executor]() { executor.spin(); }).detach();

  // Read txt
  struct vec3 {
    float  x;
    float  y;
    float  z;
    };
  vec3 write_points[write_points_num];
  std::string in_file_name = "/home/ubuntu/ws_ros2/src/moveit2/moveit_demo_nodes/run_move_group/scripts/write_point.txt";
  std::cout << in_file_name << std::endl;
  std::ifstream in_file;
  in_file.open(in_file_name.c_str());
  if (in_file.is_open())
  {
    std::string line;
    int i = 0;
    while(getline(in_file,line))
    {
      const char* split = ",";
      char* p = strtok((char*)line.c_str(), split);
      float val;
      for(int k = 0; p != NULL; k++)
      {
        sscanf(p, "%f", &val);
        p = strtok(NULL, split);
        if (k==0)
        {
          write_points[i].x = val;
        }
        else if (k==1)
        {
          write_points[i].y = val;
        }
        else
        {
          write_points[i].z = val;
        }
      }
      i++;
    }
    in_file.close();
  }
  else
	{
    RCLCPP_INFO(LOGGER, "Can't find input file: %s", in_file_name);
	}
  RCLCPP_INFO(LOGGER, "write_points: %f,%f", write_points[0].x, write_points[write_points_num-1].x);

  // BEGIN_TUTORIAL
  // Start
  // ^^^^^
  // Setting up to start using the RobotModel class is very easy. In
  // general, you will find that most higher-level components will
  // return a shared pointer to the RobotModel. You should always use
  // that when possible. In this example, we will start with such a
  // shared pointer and discuss only the basic API. You can have a
  // look at the actual code API for these classes to get more
  // information about how to use more features provided by these
  // classes.
  //
  // We will start by instantiating a
  // `RobotModelLoader`_
  // object, which will look up
  // the robot description on the ROS parameter server and construct a
  // :moveit_core:`RobotModel` for us to use.
  //
  // .. _RobotModelLoader:
  //     http://docs.ros.org/melodic/api/moveit_ros_planning/html/classrobot__model__loader_1_1RobotModelLoader.html
  robot_model_loader::RobotModelLoader robot_model_loader(robot_arm_ik_node, "robot_description");
  robot_model::RobotModelPtr kinematic_model = robot_model_loader.getModel();
  RCLCPP_INFO(LOGGER, "Model frame: %s", kinematic_model->getModelFrame().c_str());

  // Using the :moveit_core:`RobotModel`, we can construct a
  // :moveit_core:`RobotState` that maintains the configuration
  // of the robot. We will set all joints in the state to their
  // default values. We can then get a
  // :moveit_core:`JointModelGroup`, which represents the robot
  // model for a particular group, e.g. the "white_arm" of the Panda
  // robot.
  robot_state::RobotStatePtr kinematic_state(new robot_state::RobotState(kinematic_model));
  kinematic_state->setToDefaultValues();
  const robot_state::JointModelGroup* joint_model_group = kinematic_model->getJointModelGroup("panda_arm");

  // const std::vector<std::string>& joint_names = joint_model_group->getVariableNames();
  kinematic_state->printStatePositionsWithJointLimits(joint_model_group);
  // Get Joint Values
  // ^^^^^^^^^^^^^^^^
  // We can retreive the current set of joint values stored in the state for the Panda arm.
  std::vector<double> joint_values;
  kinematic_state->copyJointGroupPositions(joint_model_group, joint_values);
  RCLCPP_INFO(LOGGER, "Joint Value: %f,%f,%f,%f,%f", joint_values[0],joint_values[1],joint_values[2],joint_values[3],joint_values[4]);

  // Set to write_position
  kinematic_state->setToDefaultValues(joint_model_group,"write_position");
  kinematic_state->copyJointGroupPositions(joint_model_group, joint_values);
  RCLCPP_INFO(LOGGER, "Joint Value: %f,%f,%f,%f,%f", joint_values[0],joint_values[1],joint_values[2],joint_values[3],joint_values[4]);


  // Inverse Kinematics
  // ^^^^^^^^^^^^^^^^^^
  // We can now solve inverse kinematics (IK) for the Panda robot.
  // To solve IK, we will need the following:
  //
  //  * The desired pose of the end-effector (by default, this is the last link in the "white_arm" chain):
  //    end_effector_state that we computed in the step above.
  //  * The timeout: 0.1 s
  geometry_msgs::msg::Pose target_pose1;
  target_pose1.orientation.w = 1.0;
  double timeout = 0.1;

  //Write joint values to joint_position.txt
  std::string out_file_name = "/home/ubuntu/ws_ros2/src/moveit2/moveit_demo_nodes/run_move_group/scripts/joint_position.txt";
  std::ofstream out_file;
  out_file.open(out_file_name.c_str(),std::ios::app);

  rclcpp::Time start_time = robot_arm_ik_node->now();

  for(int i = 0; i < write_points_num; i++)
  {
    target_pose1.position.x = write_points[i].x;
    target_pose1.position.y = write_points[i].y;
    target_pose1.position.z = write_points[i].z;
    RCLCPP_INFO(LOGGER, "Target position: %f,%f,%f", target_pose1.position.x, target_pose1.position.y, target_pose1.position.z);
    bool found_ik = kinematic_state->setFromIK(joint_model_group, target_pose1, timeout);
    // Now, we can print out the IK solution (if found):
    if (found_ik)
    {
      kinematic_state->copyJointGroupPositions(joint_model_group, joint_values);
      out_file << joint_values[0] <<"," << joint_values[1] <<"," <<  joint_values[2] <<","  << joint_values[3] <<","  << joint_values[4] <<std::endl;
      RCLCPP_INFO(LOGGER, "Joint Value: %f,%f,%f,%f,%f", joint_values[0],joint_values[1],joint_values[2],joint_values[3],joint_values[4]);
    }
    else
    {
      RCLCPP_INFO(LOGGER, "Did not find IK solution");
    }
  }
  
  rclcpp::Time end_time = robot_arm_ik_node->now();
  rclcpp::Duration duration = end_time - start_time;
  RCLCPP_INFO(LOGGER, "IK Time :%f",duration.seconds());

  rclcpp::shutdown();
  return 0;
}
