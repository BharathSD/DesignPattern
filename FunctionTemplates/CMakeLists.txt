cmake_minimum_required(VERSION 3.12)
project(FunctionTemplates)

set(CMAKE_CXX_STANDARD 14)

add_executable(FunctionTemplates FunctinTemplatesMain.cpp SimpleLogger.h TemplatedLogger.h TemplatedLoggerAllFuncs.h)