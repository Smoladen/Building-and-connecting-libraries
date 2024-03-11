cmake_minimum_required(VERSION 3.5)

project(leaver LANGUAGES CXX)
set(source_dll leaver.h leaver.cpp)
add_library(dll_lib SHARED ${source_dll})

