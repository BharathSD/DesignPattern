cmake_minimum_required(VERSION 3.12)
project(PropertyProxy)

set(CMAKE_CXX_STANDARD 14)

add_executable(PropertyProxy main.cpp PropertyTemplate.h Creature.h)