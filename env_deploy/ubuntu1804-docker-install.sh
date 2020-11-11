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

