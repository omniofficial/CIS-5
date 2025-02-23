/*COMMENTS
___________
ADRIAN DIAZ
CIS-5 ONLINE
JANUARY 20, 2023
PROGRAM 7C: THIS PROGRAM IS AN UPDATED VERSION OF A GRADE BOOK PROGRAM THAT UTILIZES NESTED FOR LOOPS.*/

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
    string choice;
    int student_amount;
	string name;
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

    cout << "How many students are in the class? (Must be a number between 1-35):\n";
    cin >> student_amount;

    while (student_amount < 1 || student_amount > 35)
    {
        cout << "Please try again. Enter the number of students in your class: ";
        cin >> student_amount;
    }

    cout << "\nGreat! The amount of students in your class are " << student_amount << ".\n";
	cout << "Do you wish to run our gradebook program? Please enter Y or N \n";
	cin >> choice;

	do
	{
		for (int i = 1; i <= student_amount; i++)
		{
			double sumof_scores = 0.0;
			double average;
			int test_score;
			int test_amount;
			string grade;
			const double A_GRADE = 90.00;
			const double B_GRADE = 80.00;
			const double C_GRADE = 70.00;
			const double D_GRADE = 60.00;
			const double F_GRADE = 60.00;
			

			cout << "\nEnter the student name: \n";
			cin >> name;
			cout << "\n";
			cout << name << ", enter the amount of test scores between 2 and 5:\n";
			cin >> test_amount;
			while (test_amount < 2 || test_amount > 5)
			{
				cout << "Please try again. Enter the amount of test scores between 2 and 5: ";
				cin >> test_amount;
			}

			for (int j = 1; j <= test_amount; j++)
			{
				cout << "\nEnter the test score of test " << j << ".\n";
				cin >> test_score;
				while (test_score < 0 || test_score > 100)
				{
					cout << "Please try again. Enter the test score of test " << j << " .\n";
					cin >> test_score;
				}

				sumof_scores += test_score;
				average = (sumof_scores) / test_amount;
	
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
			}
			cout << "\n";
			cout << "NAME: " << name << "\tAVERAGE: " << average << "\tGRADE: " << grade << "\n\n";
			cout << "_______________________________________________________\n";
			break;

		}

	} while (choice != "N");

	cout << "You have exited the gradebook program.\n";
	system("pause");
	return 0;
    
}