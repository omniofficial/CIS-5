/*COMMENTS
___________
ADRIAN DIAZ
CIS-5 ONLINE
JANUARY 20, 2023
PROGRAM 8A (REVISED): THIS PROGRAM IS AN UPDATED VERSION OF A MATH TUTOR PROGRAM THAT PROVIDES HEADERS, A BOOLEAN FUNCTION AND A DISPLAY MENU FUNCTION.*/

#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
using namespace std;

int displaymenu();
void addition();
void subtraction();
void multiplication();
void division();
bool isValid(int num, int min, int max);

int main()
{
	string name;
	int choice;
	int seed = time(0);
	srand(seed);

	do
	{
		choice = displaymenu();
		switch (choice)
		{
		default:
			cout << "Error";
			/*-----------ADDITION-----------*/
		case 1:
			addition();
			break;
			/*-----------SUBTRACTION-----------*/
		case 2:
			subtraction();
			break;
			/*-----------MULTIPLICATION-----------*/
		case 3:
			multiplication();
			break;
			/*-----------DIVISION-----------*/
		case 4:
			division();
			break;
			/*-----------QUIT-----------*/
		case 5:
			cout << "You have chose to quit the program";
			break;

		}
	} while (choice != 5);

	cout << "Thank you for using Math Tutor. We hope we were of help." << "\n";




	system("pause");
	return 0;
}

int displaymenu()
{
	int choice;

	cout << "Welcome to Math Tutor! I will help you test your addition, subtraction, multiplication, or division skills. \n";
	cout << "Which of the following would you like to practice? \n";
	cout << "1: Addition" << "\n";
	cout << "2: Subtraction" << "\n";
	cout << "3: Multiplication" << "\n";
	cout << "4: Division" << "\n";
	cout << "5: Quit" << "\n\n";
	cin >> choice;

	while (!isValid(choice, 1, 5))
	{
		cin >> choice;
	}

	return(choice);
}

void addition()
{
	int num_1, num_2, min, max, answer, result, attempt;

	/*Top Number*/
	min = 2;
	max = 500;
	num_1 = (rand() % (max - min + 1)) + min;

	/*Bottom Number*/
	min = 1;
	max = 99;
	num_2 = (rand() % (max - min + 1)) + min;

	while (num_2 > num_1)
	{
		cout << "Unfortunately. Number 2 is greater than Number 1. Continuing to loop to satisfy requirements...\n";
		/*Top Number*/
		min = 2;
		max = 500;
		num_1 = (rand() % (max - min + 1)) + min;

		/*Bottom Number*/
		min = 1;
		max = 99;
		num_2 = (rand() % (max - min + 1)) + min;
	}

	/*Addition Output*/
	cout << "You have chosen Addition. You have 3 attempts." << "\n";
	cout << "Input your answer: " << "\n";
	cout << setw(5) << num_1 << "\n";
	cout << "+  " << num_2 << "\n";
	cout << "______" << "\n";
	result = num_1 + num_2;
	cin >> answer;
	cout << "\n";
	/*Confirm answer*/
	attempt = 2;

	while (answer != result && attempt > 0)
	{
		cout << "Unfortunately, that is not correct. Review your notes and try again.\n";
		cout << "You have " << attempt << " attempts remaining.\n";
		cout << setw(5) << num_1 << "\n";
		cout << "+  " << num_2 << "\n";
		cout << "______" << "\n";
		cin >> answer;
		cout << "\n";
		attempt--;
	}

	if (answer == result)
	{
		cout << "Nice work! Your answer is correct!\n\n";
	}

	else
	{
		cout << "Unfortunately, the answer is " << result << ".\n\n";
	}
}


void subtraction()
{
	int num_1, num_2, min, max, answer, result, attempt;

	/*Top Number*/
	min = 2;
	max = 500;
	num_1 = (rand() % (max - min + 1)) + min;

	/*Bottom Number*/
	min = 1;
	max = 500;
	num_2 = (rand() % (max - min + 1)) + min;

	while (num_2 > num_1)
	{
		cout << "\tUnfortunately. Number 2 is greater than Number 1. Continuing to loop to satisfy requirements...\n";
		/*Top Number*/
		min = 2;
		max = 500;
		num_1 = (rand() % (max - min + 1)) + min;

		/*Bottom Number*/
		min = 1;
		max = 500;
		num_2 = (rand() % (max - min + 1)) + min;
	}
	/*Subtraction Output*/
	cout << "\nYou have chosen Subtraction. You have 3 attempts." << "\n";
	cout << "Input your answer: " << "\n";
	cout << setw(5) << num_1 << "\n";
	cout << "-  " << num_2 << "\n";
	cout << "______" << "\n";
	cin >> answer;
	result = num_1 - num_2;
	cout << "\n";

	/*Confirm answer*/
	attempt = 2;

	while (answer != result && attempt > 0)
	{
		cout << "Unfortunately, that is not correct. Review your notes and try again.\n";
		cout << "You have " << attempt << " attempts remaining.\n";
		cout << setw(5) << num_1 << "\n";
		cout << "-  " << num_2 << "\n";
		cout << "______" << "\n";
		cin >> answer;
		cout << "\n";
		attempt--;
	}

	if (answer == result)
	{
		cout << "Nice work! Your answer is correct!\n\n";
	}

	else
	{
		cout << "Unfortunately, the answer is " << result << ".\n\n";
	}
}


void multiplication()
{
	int num_1, num_2, min, max, answer, result, attempt;

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
	cout << "You have chosen Multiplication. You have 3 attempts." << "\n";
	cout << "Input your answer: " << "\n";
	cout << setw(5) << num_1 << "\n";
	cout << "x  " << num_2 << "\n";
	cout << "______" << "\n";
	cin >> answer;
	cout << "\n";

	/*Confirm answer*/
	attempt = 2;

	while (answer != result && attempt > 0)
	{
		cout << "Unfortunately, that is not correct. Review your notes and try again.\n";
		cout << "You have " << attempt << " attempts remaining.\n";
		cout << setw(5) << num_1 << "\n";
		cout << "x  " << num_2 << "\n";
		cout << "______" << "\n";
		cin >> answer;
		cout << "\n";
		attempt--;
	}

	if (answer == result)
	{
		cout << "Nice work! Your answer is correct!\n\n";
	}

	else
	{
		cout << "Unfortunately, the answer is " << result << ".\n\n";
	}
}


void division()
{
	int num_1, num_2, min, max, answer, result, attempt;

	/*Top Number*/
	min = 1;
	max = 999;
	num_1 = (rand() % (max - min + 1)) + min;

	/*Bottom Number*/
	min = 1;
	max = 9;
	num_2 = (rand() % (max - min + 1)) + min;

	while ((num_1 % num_2) != 0)
	{
		cout << "\tGenerating another number 2 due to a remainder present...\n";
		/*Bottom Number*/
		min = 1;
		max = 9;
		num_2 = (rand() % (max - min + 1)) + min;
	}

	/*Division Output*/
	cout << "\nYou have chosen Division. You have 3 attempts." << "\n";
	cout << "Input your answer: " << "\n";
	cout << setw(5) << num_1 << "\n";
	cout << "/  " << num_2 << "\n";
	cout << "______" << "\n";
	cin >> answer;
	result = num_1 / num_2;
	cout << "\n";

	/*Confirm answer*/
	attempt = 2;

	while (answer != result && attempt > 0)
	{
		cout << "Unfortunately, that is not correct. Review your notes and try again.\n";
		cout << "You have " << attempt << " attempts remaining.\n";
		cout << setw(5) << num_1 << "\n";
		cout << "/  " << num_2 << "\n";
		cout << "______" << "\n";
		cin >> answer;
		cout << "\n";
		attempt--;
	}

	if (answer == result)
	{
		cout << "Nice work! Your answer is correct!\n\n";
	}

	else
	{
		cout << "Unfortunately, the answer is " << result << ".\n\n";
	}
}

bool isValid(int num, int min, int max)
{
	if (num < min || num > max)
	{
		cout << "ERROR! Please try again.\n";
		cout << "Which of the following would you like to practice? \n";
		cout << "1: Addition" << "\n";
		cout << "2: Subtraction" << "\n";
		cout << "3: Multiplication" << "\n";
		cout << "4: Division" << "\n";
		cout << "5: Quit" << "\n\n";
		return false;
	}
	else
	{
		return true;
	}
}