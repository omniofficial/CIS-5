/*COMMENTS
___________
ADRIAN DIAZ
CIS-5 ONLINE
February 2, 2023
PROGRAM 13C: THIS PROGRAM SERVES AS A GRADEBOOK WITH FUNCTIONS AND 2D ARRAYS. */

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

struct Person
{
	std::string name;
	int age;
	float height;
	std::string eyeColor;
};



int main()
{
	Person CIS5[3];
	int seed = time(0);
	srand(seed);

	for (int i = 0; i < 3; i++)
	{
		cout << "Student Number " << i + 1 << endl;
		cout << "Name: ";
		cin >> CIS5[i].name;
	}
	
	int max = 2;
	int min = 0;
	int index = (rand() % (max - min + 1)) + min;
	cout << CIS5[index].name;

	for (int i = 0; i < 3; i++)
	{
		cout << "Student #" << i + 1 << " " << CIS5[i].name << ", age = " << CIS5[i].age << ", your height is" <<
			CIS5[i].height << ", your eye color is " << CIS5[i].eyeColor << endl << endl;
	}
}

