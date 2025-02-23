/*COMMENTS
___________
ADRIAN DIAZ
CIS-5 ONLINE
JANUARY 10, 2023
PROGRAM 2A: FULL NAME - THIS PROGRAM ACCEPTS THE USER'S FIRST AND LAST NAME FROM THE KEYBOARD AND DISPLAYS A MESSAGE TO THE USER.*/

#include <iostream>
using namespace std;
int main()
{
string first_name;
string last_name;

	cout << "Greetings. What is your first name?\n";
	cin >> first_name;

	cout << "Great! Now, what is your last name?\n";
	cin >> last_name;

	cout << "Welcome to C++ programming, " << first_name << " " << last_name << ". I applaud your choice to learn code and increase your technical skills.\n";
	system("pause");
	return 0;
}