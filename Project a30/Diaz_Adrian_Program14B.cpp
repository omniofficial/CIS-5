/*COMMENTS
___________
ADRIAN DIAZ
CIS-5 ONLINE
February 2, 2023
PROGRAM 14B: ARRAYS OF STRUCTS*/

#include <iostream>
#include "Person.h"
using namespace std;

int main()
{
	Person CIS5[3];

	for (int i = 0; i < 3; i++)
	{
		cout << "Student Number " << i + 1 << endl;
		cout << "Name: ";
		cin >> CIS5[i].name;
		cout << "Age: ";
		cin >> CIS5[i].age;
		cout << "Height: ";
		cin >> CIS5[i].height;
		cout << "Eye Color: ";
		cin >> CIS5[i].eyeColor;
		cout << endl;
	}

	for (int i = 0; i < 3; i++)
	{
		cout << "Student #" << i + 1 << " " <<  CIS5[i].name << ", age = " << CIS5[i].age << ", your height is" <<
			CIS5[i].height << ", your eye color is " << CIS5[i].eyeColor << endl << endl;
	}



	system("pause");
	return 0;
}