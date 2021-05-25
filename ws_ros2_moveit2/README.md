# AISR Calligraphy using MoveIt 2

- Environment Requirement

  - Ubuntu 20.04
  - MoveIt 2

- Realized with move_group class(more steps, heavier, but with GUI)

  - Specify the executable in the launch file(run_move_group_interface.launch.py);

    ```python
    def generate_launch_description():
        # planning_context
        robot_description_config = load_file('moveit_resources_panda_description', 'urdf/panda.urdf')
        robot_description = {'robot_description': robot_description_config}
    
        robot_description_semantic_config = load_file('moveit_resources_panda_moveit_config', 'config/panda.srdf')
        robot_description_semantic = {'robot_description_semantic': robot_description_semantic_config}
    
        kinematics_yaml = load_yaml('moveit_resources_panda_moveit_config', 'config/kinematics.yaml')
    
        # MoveGroupInterface demo executable
        run_move_group_demo = Node(name='calligraphy', # specify name
                                   package='run_move_group',
                                   executable='calligraphy', #specify executable
                                #    prefix='xterm -e',
                                   output='screen',
                                   parameters=[robot_description,
                                               robot_description_semantic,
                                               kinematics_yaml])
    
        return LaunchDescription([run_move_group_demo])
    ```

  - Build the workspace

    ```
    $ cd /src
    $ colcon build
    ```

  - Launch MoveIt and its GUI;

    ``` 
    $ ros2 launch run_move_group.launch.py
    ```

  - In the GUI, move the white arm to its write_pos；
  ![](AISR.png)

  - Start the node of calligraphy_sub, listening to topic /arm_stroke;
    
    ```  
    $ ros2 launch run_move_group_interface.launch.py
    ```

  - Run the arm control script, which subscribe to /joint_states and control the white arm's joint angles according to the messages in this topic (The situation of arm not connected is dealt with. If the arm is not connected, it will only print logs and the arm remains still. Can be used as testing);
    
    ```
    $ cd run_move_group/scripts
    $ python3 arm_control_by_subscription.py
    ```

  - Start calligraphy_pub node, publishing the end effector positions to the topic /arm_stroke;

    ```
    $ python3 calligraphy_pub.py
    ```

  - In the GUI, the right arm will start moving, if the real robot is connected, the arm will be moving as it does in the GUI.

- Realized with robot_model and robot_state classes (less steps, lighter)

  - Specify the executable in the launch file(run_move_group_interface.launch.py);

    ```python
    def generate_launch_description():
        # planning_context
        robot_description_config = load_file('moveit_resources_panda_description', 'urdf/panda.urdf')
        robot_description = {'robot_description': robot_description_config}
    
        robot_description_semantic_config = load_file('moveit_resources_panda_moveit_config', 'config/panda.srdf')
        robot_description_semantic = {'robot_description_semantic': robot_description_semantic_config}
    
        kinematics_yaml = load_yaml('moveit_resources_panda_moveit_config', 'config/kinematics.yaml')
    
        # MoveGroupInterface demo executable
        run_move_group_demo = Node(name='robot_arm_ik', # specify name
                                   package='run_move_group',
                                   executable='robot_arm_ik', # specify executable
                                #    prefix='xterm -e',
                                   output='screen',
                                   parameters=[robot_description,
                                               robot_description_semantic,
                                               kinematics_yaml])
    
        return LaunchDescription([run_move_group_demo])
    ```

  - Build the workspace

    ```
    $ cd /src
    $ colcon build
    ```
    
  - Run calligraphy_pub.py, write out the end effector's positions to write_point.txt;

    ```
    $ cd run_move_group/scripts
    $ python3 calligraphy_pub.py
    $ ls
    arm_control_by_reading_files.py arm_control_by_subscription.py calligraphy_pub.py write_point.txt
    ```

  - Start robot_arm_ik node by launching run_move_group_interface.launch.py, which will calculate the joint angles according to the end effector's positions using inverse kinematics algorithm and write out to joint_position.txt;
  ```
    $ ros2 launch run_move_group_interface.launch.py
    $ ls
    arm_control_by_reading_files.py arm_control_by_subscription.py calligraphy_pub.py joint_position.txt write_point.txt
  ```
  
  - Run arm_control_by_reading_files.py, read joint_position.txt and control the white arm according to the joint angles calculated in the above step (The situation of arm not connected is dealt with. If the arm is not connected, it will only print logs and the arm remains still. Can be used as testing);
  
    ```
    $ python3 arm_control_by_reading_files.py
    ```
  
  - If the robot is connected, the white arm will start moving; otherwise, the program will only pring logs in the console.
