/*COMMENTS
___________
ADRIAN DIAZ
CIS-5 ONLINE
JANUARY 26, 2023
PROGRAM 9A: THIS PROGRAM UTILIZES FUNCTIONS AND LOOPS TO SERVE AS A COIN FLIP GAME.*/

#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;
string getDecision();
string getGuess();
string flipCoin();
double winOrLose(string guess, string coin, double bank);

int main()
{
	double bank = 15.00;
	string decision;
	string guess;
	string coin;
	int seed = time(NULL);
	srand(seed);

	cout << "Welcome to The Coin Flip Game!\n";
	cout << "Your balance starts at $15.\n";
	cout << "It costs $1 to play.\n";
	decision = getDecision();

	while ((decision == "Y" && bank > 0))
	{
		getGuess();
		coin = flipCoin();
		winOrLose(guess, coin, bank);
		cout << "Do you wish to run The Coin Flip Game again? Please enter Y or N \n";
		cin >> decision;
	} 

	cout << "Thank you from the bank. Your bank balance is: " << bank << "\n.";
		return 0;
}

string getDecision()
{
	string decision;
	cout << "Hello! Do you wish to play the coin flip game? Please enter Y or N.\n";
	cin >> decision;
	return decision;
}

string getGuess()
{
	string guess;
	cout << "Enter a guess: (H or T) \n";
	cin >> guess;
	return guess;

}

string flipCoin()
{
		int rand_num = rand() % 2 + 1;
		string coin;

		if (rand_num == 1)
		{
			cout << "The coin landed on heads.\n";
			return "H";
		}
		else if (rand_num == 2)
		{
			cout << "The coin landed on tails.\n";
			return "T";
		}

}

double winOrLose(string guess, string coin, double bank)
{

	if (guess == coin)
	{
		cout << "You guessed correct. You have kept your bet and earned $1.\n";
		bank = bank + 1.00;
		cout << "BANK BALANCE: $" << bank << "\n";
		return bank;
	}
	else if (guess != coin)
	{
		cout << "You guessed incorrectly. You have lost $1.\n";
		bank = bank - 1.00;
		cout << "BANK BALANCE: $" << bank << "\n";
		return bank;
	}

}