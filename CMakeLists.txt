cmake_minimum_required(VERSION 2.8.3)
project(apue)

# using cmaktools in vscode
include(CMakeToolsHelpers OPTIONAL)

# which cpp standard you use
#SET(CMAKE_CXX_FLAGS "-std=c++11")

# set before finding packages
list(APPEND CMAKE_MODULE_PATH ./cmake)

# find packages

# include dirs
include_directories(
    /usr/include
    ${PROJECT_SOURCE_DIR}/include
    ${PROJECT_SOURCE_DIR}/lib
    )

# add subdirectories
add_subdirectory("src/hello_world")

# add executable
