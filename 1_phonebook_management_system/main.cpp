#include "main.h"

using namespace std;

void mainMenuPrint()
{
	cout << "---------Main Menu---------\n";
	cout << "Please, enter your choice:\n";
	cout << "1 - add new phone record;\n";
	cout << "2 - show existing phone records;\n";
	cout << "3 - search a particular phone record;\n";
	cout << "4 - delete phone records;\n";
	cout << "5 - exit.\n";
}

void mainMenu()
{
	unsigned short status;
	while (status != 5)
	{
		mainMenuPrint();
		cin >> status;

		switch (status)
		{
			case 1:
				addNewPhoneRecord();
				break;
			case 2:
				break;
			case 3:
				break;
			case 4:
				break;
			case 5:
				cout << "Program closed\n";
				break;
			default:
				cout << "Please enter correct choice\n";
				break;
		}
	}
}

int main()
{
	mainMenu();
	return 0;
}
