cmake_minimum_required(VERSION 2.8.3)
project(pat_basic)

#SET(CMAKE_CXX_FLAGS "-std=c++11")

set(CMAKE_MODULE_PATH ${PROJECT_SOURCE_DIR}/cmake)

# find packages

# include dirs
include_directories(/usr/include )

add_executable(hello_world src/Basic/hello_world.cpp)
add_executable(1025 src/Basic/1025.cpp)
add_executable(1035 src/Basic/1035.cpp)
#add_executable(1045 src/Basic/1045.cpp)
#add_executable(1050 src/Basic/1050.cpp)
add_executable(0312a src/Test/0312a.cpp)