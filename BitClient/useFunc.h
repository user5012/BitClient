#pragma once
#include <iostream>
#include <sys/stat.h>
class useFunc
{
public:
	void debug(const std::string message, bool bIsError, bool bIsMsgBox);
	void cls();
	std::wstring stringToLong(const std::string& str);
	std::string checkPath();
	void printPath();
	bool checkPathExists(const char* path);
};

