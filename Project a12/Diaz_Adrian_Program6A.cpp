/*COMMENTS
___________
ADRIAN DIAZ
CIS-5 ONLINE
JANUARY 20, 2023
PROGRAM 6A: THIS PROGRAM UTILIZES WHILE LOOPS TO VALIDATE INPUTED NUMBERS.*/

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
	int integer;

	cout << "Please enter a number between 25 and 50.\n";
	cin >> integer;

	while (integer < 25 || integer > 50)
	{
		cout << "Please try again. Enter a number between 25 and 50: ";
		cin >> integer;
	}

	cout << "\nGreat! Your intput of " << integer << " is valid!\n";

	system("pause");
	return 0;
}