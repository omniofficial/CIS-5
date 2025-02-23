/*COMMENTS
___________
ADRIAN DIAZ
CIS-5 ONLINE
JANUARY 14, 2023
PROGRAM 4B: THIS PROGRAM ACTS AS A GRADEBOOK.*/

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
int main()
{
	string name;
	int test1, test2, test3;
	int numTests = 3;
	float avg;
	char answer, grade;
	bool isActive;
	/*A GRADE IS AN AVG >= 90.00*/
	const float A_GRADE = 90.00;
	/*B GRADE IS AN AVG >= 80.00*/
	const float B_GRADE = 80.00;
	/*C GRADE IS AN AVG >= 70.00*/
	const float C_GRADE = 70.00;
	/*D GRADE IS AN AVG >= 60.00*/
	const float D_GRADE = 60.00;
	/*F GRADE IS AN AVG >= 50.00 OR AN AVG < 50.00*/
	const float F_GRADE = 50.00;

	/*USER INPUT*/
	cout << "Enter the student name: ";
	getline(cin, name);

	cout << "Is " << name << " actively participating in the course? Answer Y or N. ";
	cin >> answer;

	if (answer == 'Y' || answer == 'y')
		isActive = true;
	else if (answer == 'N' || answer == 'n')
		isActive = false;
	else
	{
		cout << "Input error. Program ending \n";
		exit(0);
	}

	cout << "Enter three test scores between 0 and 100: ";
	cin >> test1 >> test2 >> test3;
		avg = static_cast<float>(test1 + test2 + test3) / numTests;  

	/*LOGIC*/
	cout << fixed << showpoint << setprecision(1);
	cout << endl << endl << name << "'s average = " << avg << endl;

	if ((avg >= A_GRADE) && (isActive == true))
	{
		grade = 'A';
		cout << "Congratulations! You are awesome. \n";
	}
	else if ((avg >= B_GRADE) && (isActive == true))
	{
		grade = 'B';
		cout << "Good job. You are brilliant. \n";
	}
	else if ((avg >= C_GRADE) && (isActive == true))
	{
		grade = 'C';
		cout << "You are an average student. \n";
	}
	else if ((avg >= D_GRADE) && (isActive == true))
	{
		grade = 'D';
		cout << "You are a below average student. \n";
	}
	else if ((avg >= F_GRADE || avg <= F_GRADE) && (isActive == true))
	{
		grade = 'F';
		cout << "You have failed the course. \n";
	}

	/*SAFETY LOGIC*/
	else if (isActive == false)
	{
		grade = 'W';
		cout << "Student has been withdrawn from the course. \n";
	}
	else
	{
		grade = 'X';
		cout << " INVALID LOGIC. CHECK YOUR CODE. \n";
	}

	/*FINAL OUTPUT*/
	cout << endl;
	if (grade != 'X' && grade != 'W')
	{
		cout << name << ", you earned a grade of " << grade << " in the course.\n";
			cout << "Please see your counselor to register for next semester. \n\n\n";
	}
	return 0;
}