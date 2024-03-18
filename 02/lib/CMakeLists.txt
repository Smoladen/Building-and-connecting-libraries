cmake_minimum_required(VERSION 3.5)

project(Class_leaver LANGUAGES CXX)
set(source_dll leaver.h leaver.cpp)
set(CMAKE_WINDOWS_EXPORT_ALL_SYMBOLS ON)
add_library(dll_lib SHARED ${source_dll})

