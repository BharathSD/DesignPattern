cmake_minimum_required(VERSION 3.12)
project(StaticDecorator)

set(CMAKE_CXX_STANDARD 14)

add_executable(StaticDecorator DecoratorMain.cpp ShapeInterface.h Shape.cpp Shape.h DecoratorImpl.h)