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