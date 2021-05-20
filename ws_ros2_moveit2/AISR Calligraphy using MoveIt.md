# AISR Calligraphy using MoveIt

- 若需环境

  - Ubuntu 20.04
  - MoveIt 2

- 通过move_group实现（较繁琐，体积较大，但是可以通过GUI实现运行结果可视化）

  - 在launch文件中声明可执行文件（run_move_group_interface.launch.py）；

    ```python
    def generate_launch_description():
        # planning_context
        robot_description_config = load_file('moveit_resources_panda_description', 'urdf/panda.urdf')
        robot_description = {'robot_description': robot_description_config}
    
        robot_description_semantic_config = load_file('moveit_resources_panda_moveit_config', 'config/panda.srdf')
        robot_description_semantic = {'robot_description_semantic': robot_description_semantic_config}
    
        kinematics_yaml = load_yaml('moveit_resources_panda_moveit_config', 'config/kinematics.yaml')
    
        # MoveGroupInterface demo executable
        run_move_group_demo = Node(name='calligraphy', # 修改name
                                   package='run_move_group',
                                   executable='calligraphy', #修改executable
                                #    prefix='xterm -e',
                                   output='screen',
                                   parameters=[robot_description,
                                               robot_description_semantic,
                                               kinematics_yaml])
    
        return LaunchDescription([run_move_group_demo])
    ```

  - 启动MoveIt及其GUI；

    ``` 
    $ ros2 launch run_move_group.launch.py
    ```

  - 先在GUI中把白手驱动到准备写字姿势；

  - 通过run_move_group_interface.launch.py启动calligraphy_sub节点，收听/arm_stroke话题等待数据；

    ```  
    $ ros2 launch run_move_group_interface.launch.py
    ```

  - 运行机械臂控制程序，收听/joint_states话题，根据话题中信息的变化对白手关节角度位置进行控制（对机械臂是否连接的情况已做处理，若未连接，calligraphy节点收到消息后只会打印log，机械臂静止，不会报错，可用于测试）；

    ```
    $ cd run_move_group/scripts
    $ python3 arm_control_by_subscription.py
    ```

  - 启动calligraphy_pub节点，将写字过程中末端的信息通过话题arm_stroke发布；

    ```
    $ python3 calligraphy_pub.py
    ```

  - 在GUI中可看到机械臂的运动，若连接了白手，白手关节会根据GUI中机械臂关节角度的变化而运动。

- 通过robot_model和robot_state实现（步骤较少，体积较小）

  - 在launch文件中声明可执行文件（run_move_group_interface.launch.py）；

    ```python
    def generate_launch_description():
        # planning_context
        robot_description_config = load_file('moveit_resources_panda_description', 'urdf/panda.urdf')
        robot_description = {'robot_description': robot_description_config}
    
        robot_description_semantic_config = load_file('moveit_resources_panda_moveit_config', 'config/panda.srdf')
        robot_description_semantic = {'robot_description_semantic': robot_description_semantic_config}
    
        kinematics_yaml = load_yaml('moveit_resources_panda_moveit_config', 'config/kinematics.yaml')
    
        # MoveGroupInterface demo executable
        run_move_group_demo = Node(name='robot_arm_ik', # 修改name
                                   package='run_move_group',
                                   executable='robot_arm_ik', #修改executable
                                #    prefix='xterm -e',
                                   output='screen',
                                   parameters=[robot_description,
                                               robot_description_semantic,
                                               kinematics_yaml])
    
        return LaunchDescription([run_move_group_demo])
    ```

  - 运行calligraphy_pub.py，将写字过程中末端位置序列写出至write_point.txt中；

    ```
    $ cd run_move_group/scripts
    $ python3 calligraphy_pub.py
    $ ls
    arm_control_by_reading_files.py arm_control_by_subscription.py calligraphy_pub.py write_point.txt
    ```

  - 通过run_move_group_interface.launch.py运行robot_arm_ik节点，根据末端位置序列利用逆运动学解算法算出各末端位置所对应的关节角度，并写出至joint_position.txt中；

    ```
    $ ros2 launch run_move_group_interface.launch.py
    $ ls
    arm_control_by_reading_files.py arm_control_by_subscription.py calligraphy_pub.py joint_position.txt write_point.txt
    ```

  - 运行arm_control_by_reading_files.py，读取joint_position.txt中关节角度的数据对白手关节角度进行控制对机械臂是否连接的情况已做处理，若未连接，calligraphy节点收到消息后只会打印log，机械臂静止，不会报错，可用于测试）；

    ```
    $ python3 arm_control_by_reading_files.py
    ```

  - 若连接白手，白手会根据数据运动，若未连接，则打印log。