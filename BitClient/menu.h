#pragma once
#include <iostream>
class menu
{
public:
	void Options();

private:
	std::string opt = "[1] change Download Path   [2] download file path    [3] view selected Path  [4] EXIT";
	int choice;
};

