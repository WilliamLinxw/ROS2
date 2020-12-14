from setuptools import setup

package_name = 'xarm_sub'

setup(
    name=package_name,
    version='0.0.0',
    packages=[package_name],
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='caesar',
    maintainer_email='xiaowei.lin1997@gmail.com',
    description='xArm subscriber using rclpy',
    license='TODO: License declaration',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'xarm_listener = xarm_sub.xarm_sub:main'
        ],
    },
)