from setuptools import find_packages
from setuptools import setup

setup(
    name='base_interfaces_demo',
    version='0.0.0',
    packages=find_packages(
        include=('base_interfaces_demo', 'base_interfaces_demo.*')),
)
