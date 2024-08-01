cmake_minimum_required(VERSION 3.14.1)

project(trivial_cmake_lib C CXX)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

add_library(trivial_cmake_lib src/trivial_cmake_lib.cc)
target_include_directories(trivial_cmake_lib PUBLIC ${PROJECT_SOURCE_DIR}/src)
