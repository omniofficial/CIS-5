/*COMMENTS
___________
ADRIAN DIAZ
CIS-5 ONLINE
February 2, 2023
PROGRAM 12A: */

#include <iostream>
#include <string>
using namespace std;

int main()
{
	const int NUM_STUDENTS = 4;
	string name[NUM_STUDENTS];
	int test[NUM_STUDENTS];
	char grade[NUM_STUDENTS];
	float avg;
	int total = 0;
	int hiIndex = 0;
	int lowIndex = 0;

	for (int counter = 0; counter < NUM_STUDENTS; counter++)
	{
		// GET STUDENT NAME
		cout << "Input the student name and press enter: \n";
		getline(cin, name[counter]);

		// GET STUDENT TEST SCORE
		cout << "Input the score for the midterm test: \n";
		cin >> test[counter];
		cin.ignore();

		// (ACCUMULATE SCORES) TOTAL ALL SCORES
		total += test[counter];

		// ASSIGN LETTER GRADE
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

		// FIND THE INDEX OF THE STUDENT WITH THE HIGHEST SCORE
		if (test[hiIndex] < test[counter])
		{
			hiIndex = counter;
		}

		// FIND THE INDEX OF THE STUDENT WITH THE LOWEST SCORE
		if (test[lowIndex] > test[counter])
		{
			lowIndex = counter;
		}
	}
		// CALCULATE THE CLASS AVERAGE
		avg = static_cast<float>(total) / NUM_STUDENTS;

		// DISPLAY RESULTS
		for (int counter = 0; counter < NUM_STUDENTS; counter++)
		{
			cout << name[counter] << ", your test score = " << test[counter] << ", your grade = " << grade[counter] << endl;
		}

		cout << "\n\n The class average for this test = " << avg << endl << endl;
		cout << name[hiIndex] << " has the highest test score = " << test[hiIndex] << endl;
		cout << name[lowIndex] << " has the lowest test score = " << test[lowIndex] << endl;



	system("pause");
	return 0;
}