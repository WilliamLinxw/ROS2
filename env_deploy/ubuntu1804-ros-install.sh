#!/bin/bash

apt-get update && apt-get install -y locales vim curl gnupg2 lsb-release build-essential python3-pip cmake git wget

locale-gen en_US en_US.UTF-8 && update-locale LC_ALL=en_US.UTF-8 LANG=en_US.UTF-8

export LANG=en_US.UTF-8
export CHOOSE_ROS_DISTRO=dashing
export DEBIAN_FRONTEND=noninteractive TZ=Asia/Shanghai

curl http://repo.ros2.org/repos.key | apt-key add - \
&& sh -c 'echo "deb http://mirror.tuna.tsinghua.edu.cn/ros2/ubuntu `lsb_release -cs` main" > /etc/apt/sources.list.d/ros2-latest.list' \
&& apt-get update \
&& apt-get install -y ros-$CHOOSE_ROS_DISTRO-rmw-opensplice-cpp \
&& apt-get install -y ros-$CHOOSE_ROS_DISTRO-desktop \
&& apt-get install -y python3-argcomplete python3-colcon-common-extensions python3-lark-parser python-rosdep python3-vcstool \
&& echo "# for ros2" >> ~/.bashrc \
&& echo "source /opt/ros/$CHOOSE_ROS_DISTRO/setup.bash" >> ~/.bashrc \
&& echo "# export RMW_IMPLEMENTATION=rmw_opensplice_cpp" >> ~/.bashrc

# echo "deb http://mirrors.ustc.edu.cn/ros/ubuntu $(lsb_release -sc) main" > /etc/apt/sources.list.d/ros-latest.list \
# && apt-key adv --keyserver 'hkp://keyserver.ubuntu.com:80' --recv-key C1CF6E31E6BADE8868B172B4F42ED6FBAB17C654 \
# && apt-get update \
# && apt-get install -y ros-melodic-desktop-full \
# && echo "# for ros1" >> ~/.bashrc \
# && echo "# source /opt/ros/melodic/setup.bash" >> ~/.bashrc

# apt-get install -y ros-$CHOOSE_ROS_DISTRO-ros1-bridge
rosdep init && rosdep update

