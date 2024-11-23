#include "menu.h"
#include "Globals.h"

void menu::Options()
{
	std::cout << opt << "\n";
	std::cin >> choice;

	switch (choice)
	{
	case(1):
		usef.cls();
		init.getPath();
		sett.addPath(Path);
		break;

	case(2):
		usef.cls();
		std::cout << "This feuture not available yet :( \n";
		break;

	case(3):
		usef.cls();
		usef.printPath();
		break;

	case(4):
		usef.cls();
		bRunning = false;
		break;
	default:
		usef.cls();
		break;
	}
}
