/*COMMENTS
___________
ADRIAN DIAZ
CIS-5 ONLINE
JANUARY 14, 2023
PROGRAM 3A: FIND THE HYPOTENUSE - THIS INPUTS THE LENGTHS OF THE TWO SIDES OF A RIGHT TRIANGLE, THEN CALCULATES AND DISPLAYS THE LENGTH OF THE HYPOTENUSE.*/

#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
using namespace std;

int main()
{
double a;
double b;
double c;
string student_name;
string class_date;
string class_time;

/*USER INPUT*/
	cout << "Please input your name: \n";
	getline(cin, student_name);
	cout << "\n";

	cout << "What day does your class meet? \n";
	getline(cin, class_date);
	cout << "\n";

	cout << "What times does your class meet? \n";
	cin >> class_time;
	cout << "\n";

	cout << "Great! Now, please enter the length of side 1: \n";
	cin >> a;
	cout << "\n";

	cout << "Please enter the length of side 2: \n";
	cin >> b;
	cout << "\n\n";

/*LOGIC*/
	c = sqrt(pow(a, 2) + (pow(b, 2)));

/*DISPLAY THROUGH USE OF COLUMNS AND PRECISION*/
	cout << "Name: " << student_name << "\n";
	cout << "Class Date: " << class_date << "\n";
	cout << "Class Time: " << class_time << "\n";
	cout << "------------------------\n";

	cout << setw(8) << "SIDE 1" << setw(8) << "SIDE 2" << setw(8) << "SIDE 3";
	cout << "\n";

	cout << fixed << setprecision(2) << setw(8) << a; 

	cout << fixed << setprecision(2) << setw(8) << b;

	cout << fixed << setprecision(2) << setw(8) << c;

	cout << "\n";

	system("pause");
	return 0;
}