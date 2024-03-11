cmake_minimum_required(VERSION 3.5)
project(stat_lib_greeter)

set(source_stat greeter.h greeter.cpp)

add_library(stat_lib_greeter STATIC ${source_stat})

