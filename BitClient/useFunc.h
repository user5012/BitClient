#pragma once
#include <iostream>
class useFunc
{
public:
	void debug(const std::string message, bool bIsError, bool bIsMsgBox);

	std::wstring stringToLong(const std::string& str);
};

