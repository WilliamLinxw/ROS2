# 开发板平台搭建说明
## 1. 安装系统
系统:Ubuntu 18.04

### 1.1 nvidia相关的Ubuntu系统安装
nvidia下的tx2与xavier的cpu架构为arm64

下载sdk manager: https://developer.nvidia.com/embedded/jetpack

安装参考链接: https://blog.csdn.net/huiyuanliyan/article/details/90300163

## 2. 设置apt-get sourcelist
	
	#!/bin/bash

	function set_amd64_sourcelist()
	{
		echo 'deb https://mirrors.tuna.tsinghua.edu.cn/ubuntu/ bionic main restricted universe multiverse' > /etc/apt/sources.list \
		&&  echo 'deb-src https://mirrors.tuna.tsinghua.edu.cn/ubuntu/ bionic main restricted universe multiverse' >> /etc/apt/sources.list \
		&&  echo 'deb https://mirrors.tuna.tsinghua.edu.cn/ubuntu/ bionic-updates main restricted universe multiverse' >> /etc/apt/sources.list \
		&&  echo 'deb-src https://mirrors.tuna.tsinghua.edu.cn/ubuntu/ bionic-updates main restricted universe multiverse' >> /etc/apt/sources.list \
		&&  echo 'deb https://mirrors.tuna.tsinghua.edu.cn/ubuntu/ bionic-backports main restricted universe multiverse' >> /etc/apt/sources.list \
		&&  echo 'deb-src https://mirrors.tuna.tsinghua.edu.cn/ubuntu/ bionic-backports main restricted universe multiverse' >> /etc/apt/sources.list \
		&&  echo 'deb https://mirrors.tuna.tsinghua.edu.cn/ubuntu/ bionic-security main restricted universe multiverse' >> /etc/apt/sources.list \
		&&  echo 'deb-src https://mirrors.tuna.tsinghua.edu.cn/ubuntu/ bionic-security main restricted universe multiverse' >> /etc/apt/sources.list \
		&&  echo 'deb https://mirrors.tuna.tsinghua.edu.cn/ubuntu/ bionic-proposed main restricted universe multiverse' >> /etc/apt/sources.list \
		&&  echo 'deb-src https://mirrors.tuna.tsinghua.edu.cn/ubuntu/ bionic-proposed main restricted universe multiverse' >> /etc/apt/sources.list
	}

	function set_arm64_sourcelist()
	{
		echo 'deb http://mirrors.ustc.edu.cn/ubuntu-ports/ bionic-updates main restricted universe multiverse' > /etc/apt/sources.list \
		&&  echo 'deb-src http://mirrors.ustc.edu.cn/ubuntu-ports/ bionic-updates main restricted universe multiverse' >> /etc/apt/sources.list \
		&&  echo 'deb http://mirrors.ustc.edu.cn/ubuntu-ports/ bionic-security main restricted universe multiverse' >> /etc/apt/sources.list \
		&&  echo 'deb-src http://mirrors.ustc.edu.cn/ubuntu-ports/ bionic-security main restricted universe multiverse' >> /etc/apt/sources.list \
		&&  echo 'deb http://mirrors.ustc.edu.cn/ubuntu-ports/ bionic-backports main restricted universe multiverse' >> /etc/apt/sources.list \
		&&  echo 'deb-src http://mirrors.ustc.edu.cn/ubuntu-ports/ bionic-backports main restricted universe multiverse' >> /etc/apt/sources.list \
		&&  echo 'deb http://mirrors.ustc.edu.cn/ubuntu-ports/ bionic main universe restricted' >> /etc/apt/sources.list \
		&&  echo 'deb-src http://mirrors.ustc.edu.cn/ubuntu-ports/ bionic main universe restricted' >> /etc/apt/sources.list
	}

	architecture=`dpkg --print-architecture`
	if [ $architecture == "amd64" ];then
		echo 'set sourcelist of amd64'
		set_amd64_sourcelist
	elif [ $architecture == "arm64" ];then
		echo 'set sourcelist of arm64'
		set_arm64_sourcelist
	else
		echo 'set nothing'
	fi

## 3. 依赖环境--docker
docker, 安装脚本:

	#!/bin/bash

	function docker_install_arm64()
	{
		apt-get update
		apt-get install -y apt-transport-https ca-certificates curl gnupg-agent software-properties-common
		curl -fsSL https://mirrors.ustc.edu.cn/docker-ce/linux/ubuntu/gpg | apt-key add -
		add-apt-repository "deb [arch=arm64] https://mirrors.ustc.edu.cn/docker-ce/linux/ubuntu $(lsb_release -cs) stable"
		apt-get update
		apt-get install -y docker-ce docker-ce-cli containerd.io
		usermod -aG docker $username
	}

	function docker_install_amd64()
	{
		apt-get update
		apt-get install -y apt-transport-https ca-certificates curl gnupg-agent software-properties-common
		curl -fsSL https://mirrors.ustc.edu.cn/docker-ce/linux/ubuntu/gpg | apt-key add -
		add-apt-repository "deb [arch=amd64] https://mirrors.ustc.edu.cn/docker-ce/linux/ubuntu $(lsb_release -cs) stable"
		apt-get update
		apt-get install -y docker-ce docker-ce-cli containerd.io
		usermod -aG docker $username
	}

	username=`whoami`
	architecture=`dpkg --print-architecture`
	if [ $architecture == "amd64" ];then
		echo 'architecture of this board is amd64\n'
		docker_install_amd64
	elif [ $architecture == "arm64" ];then
		echo 'architecture of this board is amd64\n'
		docker_install_arm64
	else
		echo 'architecture of this board is not known\n'
	fi

## 4. 依赖环境--ros2

### 4.1 安装脚本

	#!/bin/bash

	apt-get update && apt-get install -y locales vim curl gnupg2 lsb-release build-essential python3-pip cmake git wget

	locale-gen en_US en_US.UTF-8 && update-locale LC_ALL=en_US.UTF-8 LANG=en_US.UTF-8

	export LANG=en_US.UTF-8
	export CHOOSE_ROS_DISTRO=dashing
	export DEBIAN_FRONTEND=noninteractive TZ=Asia/Shanghai

	curl http://repo.ros2.org/repos.key | apt-key add - \
	&& sh -c 'echo "deb [arch=amd64,arm64] http://packages.ros.org/ros2/ubuntu `lsb_release -cs` main" > /etc/apt/sources.list.d/ros2-latest.list' \
	&& apt-get update \
	&& apt-get install -y ros-$CHOOSE_ROS_DISTRO-rmw-opensplice-cpp \
	&& apt-get install -y ros-$CHOOSE_ROS_DISTRO-desktop \
	&& apt-get install -y python3-argcomplete python3-colcon-common-extensions python3-lark-parser python-rosdep python3-vcstool \
	&& echo "\n# for ros2" >> ~/.bashrc \
	&& echo "source /opt/ros/$CHOOSE_ROS_DISTRO/setup.bash" >> ~/.bashrc \
	&& echo "# export RMW_IMPLEMENTATION=rmw_opensplice_cpp" >> ~/.bashrc

	# echo "deb http://mirrors.ustc.edu.cn/ros/ubuntu $(lsb_release -sc) main" > /etc/apt/sources.list.d/ros-latest.list \
	# && apt-key adv --keyserver 'hkp://keyserver.ubuntu.com:80' --recv-key C1CF6E31E6BADE8868B172B4F42ED6FBAB17C654 \
	# && apt-get update \
	# && apt-get install -y ros-melodic-desktop-full \
	# && echo "\n# for ros1" >> ~/.bashrc \
	# && echo "# source /opt/ros/melodic/setup.bash" >> ~/.bashrc

	# apt-get install -y ros-$CHOOSE_ROS_DISTRO-ros1-bridge
	rosdep init && rosdep update

### 4.2 参考链接
安装教程:  https://index.ros.org/doc/ros2/Installation/Dashing/
ros2的官方教程:  https://index.ros.org/doc/ros2/Tutorials/Colcon-Tutorial/
ros2节点的官方示例: https://github.com/ros2/examples