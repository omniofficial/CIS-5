/*COMMENTS
___________
ADRIAN DIAZ
CIS-5 ONLINE
JANUARY 20, 2023
PROGRAM 6D: THIS PROGRAM UTLIZES LOOPS TO FORM A NUMBER GUESSING GAME. */

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
	int guessed_num;
	int attempts;
	const int MIN = 1;
	const int MAX = 500;
	int seed = time(0);
	srand(seed);
	int rand_num = (rand() % (MAX - MIN + 1)) + MIN;

	cout << "Guess what number I've selected, between 1 and 500:\n";
	cout << "__________________________________________________\n";
	cin >> guessed_num;

	do
	{
		
		for (int i = 1; i <= 501; i++)
		{

			if (guessed_num > rand_num)
			{
				cout << "Too high! Please try again.\n";
				cout << "Number of guesses taken: " << i << ".\n\n\n";
				cout << "Guess what number I've selected, between 1 and 500:\n";
				cout << "__________________________________________________\n";
				cin >> guessed_num;
			}
			else if (guessed_num < rand_num)
			{
				cout << "Too low! Please try again.\n";
				cout << "Number of guesses taken: " << i << ".\n\n\n";
				cout << "Guess what number I've selected, between 1 and 500:\n";
				cout << "__________________________________________________\n";
				cin >> guessed_num;
			}

		}
	} while (guessed_num != rand_num);

	cout << "Congratulations! You guessed the right number!\n";

	system("pause");
	return 0;
}