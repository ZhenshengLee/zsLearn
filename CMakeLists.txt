cmake_minimum_required(VERSION 3.7.2)
project(zsMinGW)

# using cmaktools in vscode
include(CMakeToolsHelpers OPTIONAL)

# predefine some variables
# options
option(BUILDWITHTEST "Builds the project with Unit Tests" ON)

# set output path
set(EXECUTABLE_OUTPUT_PATH ${PROJECT_BINARY_DIR}/bin)
set(LIBRARY_OUTPUT_PATH ${PROJECT_BINARY_DIR}/bin)

# set cpp standard
set(CMAKE_CXX_FLAGS "-std=c++11 -Wall")
# set(CMAKE_CXX_FLAGS_DEBUG "")
# set(CMAKE_CXX_FLAGS_RELEASE "-O2")
# set(CMAKE_CXX_FLAGS_RELWITHDEBINFO "-O2")

# set before finding packages
set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} "${CMAKE_SOURCE_DIR}/cmake")

# find packages
# find_package(Log4CXX REQUIRED)

# include dirs
include_directories(
    # /usr/include
    # ${log4cxx_INCLUDE_DIR}
    ${PROJECT_SOURCE_DIR}/include
    )

# add subdirectories
add_subdirectory("./lib")
add_subdirectory("src/helloWorld")

# add executable

# CTest
if(BUILDWITHTEST)
    message(STATUS "Build with Unit Tests")
    enable_testing()
    include(CTest)
    add_subdirectory("./gTest-1.8.0")
else()
    message(STATUS "Build without Unit Tests")
endif()
