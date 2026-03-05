from setuptools import find_packages, setup

package_name = 'status_topics'

setup(
    name=package_name,
    version='0.0.0',
    packages=find_packages(exclude=['test']),
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='zjq',
    maintainer_email='chengziduotang@qq.com',
    description='TODO: Package description',
    license='Apache-2.0',
    extras_require={
        'test': [
            'pytest',
        ],
    },
    entry_points={
        'console_scripts': [
            'sys_status_pub=status_topics.sys_status_pub:main',
            'sys_status_trans=status_topics.sys_status_trans:main',
            'sys_status_sub=status_topics.sys_status_sub:main',
        ],
    },
)
