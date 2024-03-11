cmake_minimum_required(VERSION 3.5)

project(quadrilaterals LANGUAGES CXX)
set(quad_dll Quadrilaterals.cpp Quadrilateral.h
	Square.cpp Square.h
	Rhombus.cpp Rhombus.h
	Rectangle.cpp Rectangle.h
    	Parallelogram.cpp Parallelogram.h
)
add_library(dll_lib_quad SHARED ${quad_dll})

