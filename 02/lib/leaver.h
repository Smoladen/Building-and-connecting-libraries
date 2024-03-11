#pragma once

#ifndef LEAVER_H
	#define LEAVER_LIB_API __deslspec(dllexport)
#else
	#define LEAVER_LIB_API __deslspec(dllimport)
#endif

#include <string>

class Leaver {
public:
    static std::string leave(const std::string& name);
};

