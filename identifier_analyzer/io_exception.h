#pragma once
#include <exception>

class io_exception : std::exception
{
public:
	io_exception(const char* message) : std::exception(message) {}
};
