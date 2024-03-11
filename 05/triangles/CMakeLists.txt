cmake_minimum_required(VERSION 3.5)

project(triangles LANGUAGES CXX)
set(triangles_dll triangle.cpp triangle.h
	RightTriangle.cpp RightTriangle.h
	IsoTriangle.cpp IsoTriangle.h
	EquilateralTriangle.cpp EquilateralTriangle.h)
add_library(dll_lib_triangle SHARED ${triangles_dll})

