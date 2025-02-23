/*COMMENTS
___________
ADRIAN DIAZ
CIS-5 ONLINE
JANUARY 14, 2023
PROGRAM 5A: THIS PROGRAM WILL CREATE A SIMPLE MATH TUTOR PROGRAM TO HELP WITH ADDITION, SUBTRACTION, AND MULTIPLICATION.*/

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
string name;
int choice;
int min;
int max;
int num_1;
int num_2;
int result;
int answer;
int seed = time(0);
srand(seed);

	cout << "Hello! First off, what is your name?\n";
	getline(cin, name);
	cout << "\n";

	cout << "Welcome " << name << " to Math Tutor! I will help you test your addition, subtraction, multiplication, or division skills. \n";
	cout << "Which of the following would you like to practice? \n";
	cout << "1: Addition" << "\n";
	cout << "2: Subtraction" << "\n";
	cout << "3: Multiplication" << "\n";
	cout << "4: Division" << "\n";
	cout << "5: Quit" << "\n\n";
	cin >> choice;
	cout << "\n";

	switch (choice)
	{
		/*-----------ADDITION-----------*/
		case 1:
			/*Top Number*/
			min = 100;
			max = 999;
			num_1 = (rand() % (max - min + 1)) + min;

			/*Bottom Number*/
			min = 10;
			max = 99;
			num_2 = (rand() % (max - min + 1)) + min;
			
			result = num_1 + num_2;

			/*Addition Output*/
			cout << "You have chosen Addition." << "\n";
			cout << "Input your answer: " << "\n";
			cout << setw(5) << num_1 << "\n";
			cout << "+  " << num_2 << "\n";
			cout << "______" << "\n";
			cin >> answer;

			/*Confirm answer*/
			if (answer == result)
			{
				cout << "\nGreat work, " << name << "! You are correct. \n\n";
			}
			else if (answer != result)
			{
				cout << "\nUnfortunately, that is not correct, " << name << ". The correct answer is " << result << "."
					<< "\nReview your notes and try again." << "\n\n";
			}

			break;


		/*-----------SUBTRACTION-----------*/
		case 2:
			/*Top Number*/
			min = 10;
			max = 99;
			num_1 = (rand() % (max - min + 1)) + min;

			/*Bottom Number*/
			min = 1;
			max = 9;
			num_2 = (rand() % (max - min + 1)) + min;

			result = num_1 - num_2;

			/*Subtraction Output*/
			cout << "You have chosen Subtraction." << "\n";
			cout << "Input your answer: " << "\n";
			cout << setw(5) << num_1 << "\n";
			cout << "-  " << num_2 << "\n";
			cout << "______" << "\n";
			cin >> answer;

			/*Confirm answer*/
			if (answer == result)
			{
				cout << "\nGreat work, " << name << "! You are correct. \n\n";
			}
			else if (answer != result)
			{
				cout << "\nUnfortunately, that is not correct, " << name << ". The correct answer is " << result << "."
					<< "\n Review your notes and try again." << "\n\n";
			}

			break;


		/*-----------MULTIPLICATION-----------*/
		case 3:
			/*Top Number*/
			min = 1;
			max = 12;
			num_1 = (rand() % (max - min + 1)) + min;

			/*Bottom Number*/
			min = 1;
			max = 12;
			num_2 = (rand() % (max - min + 1)) + min;

			result = num_1 * num_2;

			/*Multiplication Output*/
			cout << "You have chosen Multiplication." << "\n";
			cout << "Input your answer: " << "\n";
			cout << setw(5) << num_1 << "\n";
			cout << "x  " << num_2 << "\n";
			cout << "______" << "\n";
			cin >> answer;

			/*Confirm answer*/
			if (answer == result)
			{
				cout << "\nGreat work, " << name << "! You are correct. \n\n";
			}
			else if (answer != result)
			{
				cout << "\nUnfortunately, that is not correct, " << name << ". The correct answer is " << result << "."
					<< "\n Review your notes and try again." << "\n\n";
			}

			break;

			/*-----------DIVISION-----------*/
		case 4:
			cout << "Division is not available at the moment. Please come back later.\n";
			break;

			/*-----------QUIT-----------*/
		case 5:
			cout << "\nYou chose to quit the program. " << "\n";
			break;

			/*-----------INVALID CHOICE-----------*/
		default:
			cout << "ERROR" << endl;
			break;
	}
	cout << "Thank you for using Math Tutor. We hope we were of help. \n";
	system("pause");
	return 0;
}