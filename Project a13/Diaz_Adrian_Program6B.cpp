/*COMMENTS
___________
ADRIAN DIAZ
CIS-5 ONLINE
JANUARY 20, 2023
PROGRAM 6B: THIS PROGRAM UTILIZES DO WHILE LOOPS TO REDISPLAY A MENU TO THE USER. */

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
	int choice;

	cout << "Which of the following is your favorite superhero? \n";
	cout << "1: Superman" << "\n";
	cout << "2: Batman" << "\n";
	cout << "3: The Notorious RBG" << "\n";
	cout << "4: Quit" << "\n\n";
	cin >> choice;

	do
	{
		switch (choice)

		{
		case 1:
		{
			cout << "\tSuperman, superman, fly fly away!\n\n";
			break;
		}

		case 2:
		{
			cout << "\tIts a dog, its a plane, its Batman!\n\n";
			break;
		}

		case 3:
		{
			cout << "\tYou can't spell TRUTH without RUTH.\n\n";
			break;
		}

		}

		cout << "_________________________________________________\n";
		cout << "Which of the following is your favorite superhero? \n";
		cout << "1: Superman" << "\n";
		cout << "2: Batman" << "\n";
		cout << "3: The Notorious RBG" << "\n";
		cout << "4: Quit" << "\n\n";
		cin >> choice;

	} while (choice != 4);

	cout << "You have quit the program.\n";
	system("pause");
	return 0;
}