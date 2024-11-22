#include "useFunc.h"
#include <Windows.h>
#include <string>
#include "Globals.h"

std::wstring useFunc::stringToLong(const std::string& str)
{
	return std::wstring(str.begin(), str.end());
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


