/*COMMENTS
___________
ADRIAN DIAZ
CIS-5 ONLINE
JANUARY 20, 2023
PROGRAM 6E: THIS PROGRAM IS A MODIFICATION OF A PREVIOUS MATH TUTOR PROGRAM THAT USES LOOPS TO CONTINUE TO DISPLAY PROBLEMS UNTIL THE USER DECIDES TO QUIT. */

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

	do
	{
	
		switch (choice)
		{
		default:
			cout << "ERROR." << endl;
			cout << "Which of the following would you like to practice? \n";
			cout << "1: Addition" << "\n";
			cout << "2: Subtraction" << "\n";
			cout << "3: Multiplication" << "\n";
			cout << "4: Division" << "\n";
			cout << "5: Quit" << "\n\n";
			cin >> choice;
			cout << "\n";
			break;
			/*-----------ADDITION-----------*/
		case 1:
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
			cout << "You have chosen Addition." << "\n";
			cout << "Input your answer: " << "\n";
			cout << setw(5) << num_1 << "\n";
			cout << "+  " << num_2 << "\n";
			cout << "______" << "\n";
			cin >> answer;
			result = num_1 + num_2;

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
			cout << "Which of the following would you like to practice? \n";
			cout << "1: Addition" << "\n";
			cout << "2: Subtraction" << "\n";
			cout << "3: Multiplication" << "\n";
			cout << "4: Division" << "\n";
			cout << "5: Quit" << "\n\n";
			cin >> choice;
			cout << "\n";
			break;


			/*-----------SUBTRACTION-----------*/
		case 2:
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
			cout << "\nYou have chosen Subtraction." << "\n";
			cout << "Input your answer: " << "\n";
			cout << setw(5) << num_1 << "\n";
			cout << "-  " << num_2 << "\n";
			cout << "______" << "\n";
			cin >> answer;
			result = num_1 - num_2;

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
			cout << "Which of the following would you like to practice? \n";
			cout << "1: Addition" << "\n";
			cout << "2: Subtraction" << "\n";
			cout << "3: Multiplication" << "\n";
			cout << "4: Division" << "\n";
			cout << "5: Quit" << "\n\n";
			cin >> choice;
			cout << "\n";
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
			cout << "Which of the following would you like to practice? \n";
			cout << "1: Addition" << "\n";
			cout << "2: Subtraction" << "\n";
			cout << "3: Multiplication" << "\n";
			cout << "4: Division" << "\n";
			cout << "5: Quit" << "\n\n";
			cin >> choice;
			cout << "\n";
			break;


			/*-----------DIVISION-----------*/
		case 4:
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
			cout << "\nYou have chosen Division." << "\n";
			cout << "Input your answer: " << "\n";
			cout << setw(5) << num_1 << "\n";
			cout << "/  " << num_2 << "\n";
			cout << "______" << "\n";
			cin >> answer;
			result = num_1 / num_2;
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
			cout << "Which of the following would you like to practice? \n";
			cout << "1: Addition" << "\n";
			cout << "2: Subtraction" << "\n";
			cout << "3: Multiplication" << "\n";
			cout << "4: Division" << "\n";
			cout << "5: Quit" << "\n\n";
			cin >> choice;
			cout << "\n";
			break;
		}
			
		
	} while (choice != 5);


	cout << "You chose to quit the program." << "\n";

	cout << "Thank you for using Math Tutor. We hope we were of help. \n";
	system("pause");
	return 0;
}