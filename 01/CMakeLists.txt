cmake_minimum_required(VERSION 3.5)

project(01 LANGUAGES CXX)

include_directories(lib)



set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(01 main.cpp)
add_subdirectory(lib)
target_link_libraries(01 stat_lib_greeter)

