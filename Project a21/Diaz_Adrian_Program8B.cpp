/*COMMENTS
___________
ADRIAN DIAZ
CIS-5 ONLINE
JANUARY 20, 2023
PROGRAM 8B (REVISED): THIS PROGRAM IS AN UPDATED VERSION OF A GRADEBOOK PROGRAM. IT INCLUDES A STUDENT NAME FUNCTION, LETTER GRADE FUNCTION, AND ASKS IF THE STUDENT WISHES TO REPEAT THE PROGRAM.*/

#include <iostream>
#include <string>
using namespace std;

string student_name();
double testScores();
double calculate(double test_1, double test_2, double test_3);
double assignGrade(double average);
void displayResults(string name, double average, char grade);
bool isValid(int num, int min, int max);

int main()
{
	string choice;
	string name;
	double test_1, test_2, test_3;
	double average;
	char grade;

	do
	{
		name = student_name();
		test_1 = testScores();
		test_2 = testScores();
		test_3 = testScores();
		average = calculate(test_1, test_2, test_3);
		grade = assignGrade(average);
		displayResults(name, average, grade);
		cout << "Do you wish to run our gradebook program again? Please enter Y or N \n";
		cin >> choice;

		while (choice != "Y" && choice != "y" && choice != "N" && choice != "n")
		{
			cout << "Invalid input. Please try again.\n";
			cin >> choice;
		}

	} while (choice == "Y" || choice == "y");
	cout << "You have exited the gradebook program.\n";
	system("pause");
	return 0;
}

string student_name()
{
	string name;

	cout << "\nEnter the student name: \n";
	cin >> name;
	cout << "\n";
	return name;
}

double testScores()
{
	double score;
	cout << "\nEnter a test score:\n";
	cin >> score;
	return score;
}

double calculate(double test_1, double test_2, double test_3)
{
	double average;
	average = (test_1 + test_2 + test_3) / 3.00;
	return average;

}

double assignGrade(double average)
{
	char grade;

	double A_GRADE = 90.00;
	double B_GRADE = 80.00;
	double C_GRADE = 70.00;
	double D_GRADE = 60.00;
	double F_GRADE = 60.00;

	if (average >= A_GRADE)
	{
		grade = 'A';
	}
	else if (average >= B_GRADE)
	{
		grade = 'B';
	}
	else if (average >= C_GRADE)
	{
		grade = 'C';
	}
	else if (average >= D_GRADE)
	{
		grade = 'D';
	}
	else if (average <= F_GRADE)
	{
		grade = 'F';
	}
	return grade;
}

void displayResults(string name, double average, char grade)
{
	cout << "\n";
	cout << "NAME: " << name << "\tAVERAGE: " << average << "\tGRADE: " << grade << "\n\n";
	cout << "_______________________________________________________\n";
}

bool isValid(int num, int min, int max)
{
	if (num < min || num > max)
	{
		return false;
	}
	else
	{
		return true;
	}
}