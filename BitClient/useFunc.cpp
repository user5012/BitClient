#include "useFunc.h"
#include <Windows.h>
#include <string>
#include "Globals.h"
#include <fstream>

std::wstring useFunc::stringToLong(const std::string& str)
{
	return std::wstring(str.begin(), str.end());
}

std::string useFunc::checkPath()
{
	std::ifstream file(pFile);
	std::string path;
	if (file.is_open()) {
		std::getline(file, path);
		file.close();
	}
	return path;
}

void useFunc::printPath()
{
	std::string p = checkPath();
	std::cout << "Path: " + p + "\n";
}

bool useFunc::checkPathExists(const char* path)
{
	struct stat sb;

	if (stat(path, &sb) == 0) {
		debug("path is valid", false, false);
		return true;
	}
	else {
		debug("path does not exist", true, false);
		return false;
	}
}

void useFunc::debug(const std::string message, bool bIsError, bool bIsMsgBox)
{
	if (!bIsMsgBox) {
		if (!bIsError) {
			std::cout << "#DEBUG: " + GREEN + message + RESET + "\n";
		}
		else {
			std::cout << "#DEBUG: " + RED+ "Error: " + message + RESET + "\n";
		}
	}
	else {
		std::wstring msg = stringToLong(message);
		if (!bIsError) {

			MessageBox(0, msg.c_str(), L"BitClient", MB_OK);
		}
		else {
			std::wstring emsg = L"Error " + msg;
			MessageBox(0, emsg.c_str(), L"BitClient", MB_OK);
		}
	}
}

void useFunc::cls()
{
	std::cout << "\033[2J\033[1;1H";
}


