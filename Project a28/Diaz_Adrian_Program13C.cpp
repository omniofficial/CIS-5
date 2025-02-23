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

const int STUDENTS = 3;
const int TESTS = 5;

bool isValid(int);
void getInput(int[][TESTS], string[], int);
void assignGrade(int[][TESTS], char[], double[]);
double calcAverage(int, int);
void displayResults(int[][TESTS], string[], char[], double[], int);


int main()
{
	string name[STUDENTS];
	int info[STUDENTS][TESTS];
	char grade[STUDENTS];
	double average[STUDENTS];

	cout << "Welcome to the GRADEBOOK with functions program!\n";
	cout << "-----------------------------------------------\n\n";

	getInput(info, name, STUDENTS);
	assignGrade(info, grade, average);
	displayResults(info, name, grade, average, STUDENTS);

	system("pause");
	return 0;
}

void getInput(int info[][TESTS], string name[], int STUDENTS)
{
	for (int i = 0; i < STUDENTS; i++)
	{
		// GET STUDENT NAME
		cout << name[i] << "Input the student name and press enter: ";
		getline(cin, name[i]);
		cout << "\n";

		for (int j = 0; j < TESTS; j++)
		{
			// GET STUDENT TEST SCORE
			cout << "Input the test scores: \n";
			cin >> info[i][j];
			cin.ignore();
			cout << "\n";

			while (!isValid(info[i][j]))
			{
				cout << "Invalid input. Please enter a number between 1-100.";
				cin >> info[i][j];
				cin.ignore();
				cout << "\n";

			}
		}
	}
}

bool isValid(int info)
{
	if (info < 0 || info > 100)
	{
		return false;
	}
	else
	{
		return true;
	}
}

void assignGrade(int info[][TESTS], char grade[], double average[])
{
	for (int i = 0; i < STUDENTS; i++)
	{
		int sum = 0;
		int hiIndex = 0;
		int lowIndex = 101;

		for (int j = 0; j < TESTS; j++)
		{
			// FIND HIGH
			if (info[i][j] < lowIndex)
			{
				lowIndex = info[i][j];
			}

			// FIND LOW
			if (info[i][j] > hiIndex)
			{
				hiIndex = info[i][j];
			}
			sum += info[i][j];
		}

		// CALCULATE AVERAGE

		sum = sum - lowIndex - hiIndex;
		average[i] = calcAverage(sum, TESTS);

		// ASSIGN GRADES
		double A_GRADE = 90.00;
		double B_GRADE = 80.00;
		double C_GRADE = 70.00;
		double D_GRADE = 60.00;
		double F_GRADE = 60.00;

		if (average[i] >= A_GRADE)
		{
			grade[i] = 'A';
		}
		else if (average[i] >= B_GRADE)
		{
			grade[i] = 'B';
		}
		else if (average[i] >= C_GRADE)
		{
			grade[i] = 'C';
		}
		else if (average[i] >= D_GRADE)
		{
			grade[i] = 'D';
		}
		else if (average[i] <= F_GRADE)
		{
			grade[i] = 'F';
		}
	}
}

double calcAverage(int sum, int TESTS)
{
	//CALCUlATING AVERAGE WITH LOWEST AND HIGHEST SCORE DROPPED
	double average = 0;
	average = static_cast<float>(sum) / (TESTS - 2);
	return average;
}

void displayResults(int info[][TESTS], string name[], char grade[], double average[], int STUDENTS)
{
	//DISPLAY
	cout << setw(11) << "STUDENT NAME";
	cout << setw(18) << "TEST SCORES";
	cout << setw(14) << "AVERAGE";
	cout << setw(8) << "GRADE\n";
	cout << setw(47) << "----------------------------------------------------\n\n";

	for (int i = 0; i < STUDENTS; i++)
	{
		cout << setw(10) << name[i] << " ";

		for (int j = 0; j < TESTS; j++)
		{
			cout << setw(4) << info[i][j] << " ";
		}

		cout << setw(6) << average[i] << " " << setw(6) << grade[i] << "\n\n";
	}
}