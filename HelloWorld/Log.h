#pragma once

// Internal Funciton - Do not link this function with other .obj files.
static void Alt_Log(const char* msg)
{
	std::cout << msg << std::endl;
}

// Inline Function - Replaces Inline
inline void Log(const char* msg)
{
	std::cout << msg << std::endl;
}
