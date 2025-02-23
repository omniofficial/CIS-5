/*COMMENTS
___________
ADRIAN DIAZ
CIS-5 ONLINE
February 2, 2023
PROGRAM 12B: GRADEBOOK WITH ARRAYS AND FUNCTIONS*/

#include <iostream>
#include <string>
using namespace std;

void getInput(string[], int[], int);
void assignGrade(int[], char[], int);
void displayResults(string[], int[], char[], int, int, int, int);
int findHi(int[], int);
int findLow(int[], int);
int calcAvg(int[], int, int);

int main()
{
	const int NUM_STUDENTS = 4;
	string name[NUM_STUDENTS];
	int test[NUM_STUDENTS];
	char grade[NUM_STUDENTS];
	int hiIndex;
	int lowIndex;
	int average;
	int total = 0;

	getInput(name, test, NUM_STUDENTS);
	assignGrade(test, grade, NUM_STUDENTS);
	average = calcAvg(test, NUM_STUDENTS, total);
	hiIndex = findHi(test, NUM_STUDENTS);
	lowIndex = findLow(test, NUM_STUDENTS);
	cout << "\n";
	displayResults(name, test, grade, NUM_STUDENTS, hiIndex, lowIndex, average);

	system("pause");
	return 0;
}

void getInput(string name[], int test[], int NUM_STUDENTS)
{
	for (int counter = 0; counter < NUM_STUDENTS; counter++)
	{
		// GET STUDENT NAME
		cout << "Input the student name and press enter: \n";
		getline(cin, name[counter]);

		// GET STUDENT TEST SCORE
		cout << "Input the score for the midterm test: \n";
		cin >> test[counter];
		cin.ignore();
	}
}

void assignGrade(int test[], char grade[], int NUM_STUDENTS)
{
	// ASSIGN LETTER GRADE
	for (int counter = 0; counter < NUM_STUDENTS; counter++)
	{
		if (test[counter] >= 90)
		{
			grade[counter] = 'A';
		}
		else if (test[counter] >= 80)
		{
			grade[counter] = 'B';
		}
		else if (test[counter] >= 70)
		{
			grade[counter] = 'C';
		}
		else if (test[counter] >= 60)
		{
			grade[counter] = 'D';
		}
		else
		{
			grade[counter] = 'F';
		}
	}
}

int calcAvg(int test[], int NUM_STUDENTS, int total)
{
	int average = 0;
	for (int counter = 0; counter < NUM_STUDENTS; counter++)
	{
		total += test[counter];
	}
	average = static_cast<float>(total) / NUM_STUDENTS;

	return average;
}

int findHi(int test[], int NUM_STUDENTS)
{
	int hiIndex = 0;
	for (int counter = 0; counter < NUM_STUDENTS; counter++)
	{
		if (test[hiIndex] < test[counter])
		{
			hiIndex = counter;
		}
	}
	return hiIndex;
}

int findLow(int test[], int NUM_STUDENTS)
{
	int lowIndex = 0;
	for (int counter = 0; counter < NUM_STUDENTS; counter++)
	{
		if (test[lowIndex] > test[counter])
		{
			lowIndex = counter;
		}
	}
	return lowIndex;
}

void displayResults(string name[], int test[], char grade[], int NUM_STUDENTS, int hiIndex, int lowIndex, int average)
{
	// DISPLAY RESULTS
	for (int counter = 0; counter < NUM_STUDENTS; counter++)
	{
		cout << name[counter] << ", your test score = " << test[counter] << ", your grade = " << grade[counter] << endl;
	}
	cout << "\nThe class average for this test = " << average << endl;
	cout << name[hiIndex] << " has the highest test score = " << test[hiIndex] << endl;
	cout << name[lowIndex] << " has the lowest test score = " << test[lowIndex] << endl;
}
