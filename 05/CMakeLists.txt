cmake_minimum_required(VERSION 3.5)

project(05 LANGUAGES CXX)
include_directories(quadrilaterals triangles)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(05 main.cpp
    figure.cpp
    figure.h
)
add_subdirectory(quadrilaterals)
add_subdirectory(triangles)
target_link_libraries(05 dll_lib_triangle dll_lib_quad)

