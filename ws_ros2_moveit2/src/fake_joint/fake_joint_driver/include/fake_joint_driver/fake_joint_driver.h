/**
 * @file fake_joint_driver.h
 * @author Ryosuke Tajima
 * @copyright 2016, 2017, Tokyo Opensource Robotics Kyokai Association
 * @license http://www.apache.org/licenses/LICENSE-2.0 Apache-2.0
 *
 * FakeJointDriver class (only do loopback from command to status)
 * derived from the hardware_interface class
 */
#include <rclcpp/rclcpp.hpp>

#include <hardware_interface/joint_command_handle.hpp>
#include <hardware_interface/joint_state_handle.hpp>
#include <hardware_interface/robot_hardware.hpp>

class FakeJointDriver : public hardware_interface::RobotHardware
{
private:
  std::vector<hardware_interface::JointStateHandle> joint_state_handles_;
  std::vector<hardware_interface::JointCommandHandle> joint_command_handles_;
  std::vector<hardware_interface::OperationModeHandle> joint_mode_handles_;

  std::vector<double> cmd_dis;
  std::vector<double> act_dis;
  std::vector<double> act_vel;
  std::vector<double> act_eff;
  std::vector<hardware_interface::OperationMode> op_mode;

  std::vector<std::string> joint_names_;
  bool use_description_;
  std::vector<std::string> include_joints_;
  std::vector<std::string> exclude_joints_;

public:
  FakeJointDriver(const rclcpp::Node::SharedPtr& node);
  ~FakeJointDriver();
  hardware_interface::hardware_interface_ret_t init() override
  {
    return hardware_interface::return_type::OK;
  }
  void update();
  hardware_interface::hardware_interface_ret_t read() override
  {
    return hardware_interface::return_type::OK;
  }
  hardware_interface::hardware_interface_ret_t write() override
  {
    return hardware_interface::return_type::OK;
  }
};
