from setuptools import find_packages
from setuptools import setup

setup(
    name='target_state_pkg',
    version='0.0.0',
    packages=find_packages(
        include=('target_state_pkg', 'target_state_pkg.*')),
)
