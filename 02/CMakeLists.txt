cmake_minimum_required(VERSION 3.5)

project(02 LANGUAGES CXX)
include_directories(lib)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(02 main.cpp)
add_subdirectory(lib)
target_link_libraries(02 dll_lib)
