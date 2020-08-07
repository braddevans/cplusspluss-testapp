cmake_minimum_required(VERSION 3.17)
project(testapp)

set(CMAKE_CXX_STANDARD 20)

add_executable(testapp src/main.cpp src/headers/main.h src/utils/utils.cpp src/headers/utils/utils.h src/headers/enums.h)