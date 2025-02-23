/*COMMENTS
___________
ADRIAN DIAZ
CIS-5 ONLINE
February 2, 2023
PROGRAM 14E: GRADEBOOK WITH STRUCTS*/

#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
#include "Student.h"
using namespace std;

void getInput(Student x[]);
void assignGrade(Student x[]);
double calcClassAverage(Student x[]);
void displayResults(Student s[], double);


int main()
{
	Student CIS5[STUDENTS];
	double classaverage;

	cout << "Welcome to the GRADEBOOK with functions program!\n";
	cout << "-----------------------------------------------\n\n";
	getInput(CIS5);
	assignGrade(CIS5);
	classaverage = calcClassAverage(CIS5);
	displayResults(CIS5, classaverage);

	system("pause");
	return 0;
}

void getInput(Student x[])
{
	for (int i = 0; i < STUDENTS; i++)
	{
		// GET STUDENT NAME
		cout << "Input the student name and press enter: ";
		cin >> (x[i].name);
		cout << "\n";

		// GET STUDENT ID
		cout << "Input the student ID and press enter: ";
		cin >> (x[i].identification);
		cout << "\n";

		for (int j = 0; j < TESTS; j++)
		{
			// GET STUDENT TEST SCORE
			cout << "Input the test scores: \n";
			cin >> (x[i].info[j]);
			cin.ignore();
			cout << "\n";
		}
	}
}

void assignGrade(Student x[])
{
	int sum;
	int hiIndex[STUDENTS];
	int lowIndex[STUDENTS];

	for (int i = 0; i < STUDENTS; i++)
	{
		sum = 0;
		hiIndex[i] = 0;
		lowIndex[i] = 0;

		for (int j = 0; j < TESTS; j++)
		{
			// FIND HIGH
			if (x[i].info[hiIndex[i]] < x[i].info[j])
			{
				hiIndex[i] = j;
			}

			// FIND LOW
			if (x[i].info[lowIndex[i]] > x[i].info[j])
			{
				lowIndex[i] = j;
			}
			sum += x[i].info[j];
		}
		// CALCULATE AVERAGE
		sum = sum - x[i].info[hiIndex[i]] - x[i].info[lowIndex[i]];
		x[i].average = static_cast<float>(sum) / (TESTS - 2);

		// ASSIGN GRADES
		double A_GRADE = 90.00;
		double B_GRADE = 80.00;
		double C_GRADE = 70.00;
		double D_GRADE = 60.00;
		double F_GRADE = 60.00;

		if (x[i].average >= A_GRADE)
		{
			x[i].grade = 'A';
		}
		else if (x[i].average >= B_GRADE)
		{
			x[i].grade = 'B';
		}
		else if (x[i].average >= C_GRADE)
		{
			x[i].grade = 'C';
		}
		else if (x[i].average >= D_GRADE)
		{
			x[i].grade = 'D';
		}
		else if (x[i].average <= F_GRADE)
		{
			x[i].grade = 'F';
		}
	}
}

double calcClassAverage(Student x[])
{
	// CALCULATE CLASS AVERAGE
	double average;
	int sum = 0;

	for (int i = 0; i < STUDENTS; i++)
	{
		sum += x[i].average;
	}
	average = sum / STUDENTS;
	return average;
}

void displayResults(Student x[], double classaverage)
{
	// DISPLAY RESULTS HEADER
	cout << setw(11) << "STUDENT NAME";
	cout << setw(9) << "ID";
	cout << setw(18) << "TEST SCORES";
	cout << setw(14) << "AVERAGE";
	cout << setw(8) << "GRADE\n";
	cout << setw(47) << "-------------------------------------------------------------\n\n";

	// NESTED FOR LOOP TO DISPLAY ALL RESULTS OF STUDENTS
	for (int i = 0; i < STUDENTS; i++)
	{
		cout << setw(10) << x[i].name << " ";
		cout << setw(10) << x[i].identification << " ";

		for (int j = 0; j < TESTS; j++)
		{
			cout << setw(4) << x[i].info[j] << " ";
		}
		cout << showpoint << fixed << setprecision(1);
		cout << setw(6) << x[i].average << " " << setw(6) << x[i].grade << "\n\n";
	}
	cout << showpoint << fixed << setprecision(1);
	cout << "CLASS AVERAGE: " << classaverage << "\n";
}