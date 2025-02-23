/*COMMENTS
___________
ADRIAN DIAZ
CIS-5 ONLINE
JANUARY 26, 2023
PROGRAM 11B: THIS PROGRAM VERIFIES USER LOGIN VIA A TEXT FILE.*/

#include <iostream>
#include <fstream>
#include <string>
using namespace std;
void login(string username, string password);
bool checkCredentials(string username, string password);

void login(string username, string password)
{
	string guessed_username;
	string guessed_password;
	int attempt;

	cout << "Please enter your guessed login information below.\n";
	cout << "Username: ";
	cin >> guessed_username;
	cout << "Password: ";
	cin >> guessed_password;


	attempt = 2;
	while (guessed_username != username && guessed_password != password && attempt > 0)
	{
		cout << "Unfortunately, that is not correct. Try again\n";
		cout << "You have " << attempt << " attempts remaining.\n";

		cout << "Please enter your guessed login information below.\n";
		cout << "Username: ";
		cin >> guessed_username;
		cout << "Password: ";
		cin >> guessed_password;
		cout << "\n";
		attempt--;
	}

	if (guessed_username == username && guessed_password == password)
	{
		cout << "Nice work! Your guesses are correct!\n\n";
	}

	else
	{
		cout << "Unfortunately, the username is " << username << " and the password is " << password << ".\n";
	}

}

bool checkCredentials(string username, string password)
{
	if (username != "Adrian" || username != "Diaz")
	{
		return false;
	}
	else
	{
		return true;
	}
}


int main()
{
	ifstream inputFile;
	string username;
	string password;
	int attempt;

	inputFile.open("correctData.txt");
	inputFile >> username;
	inputFile >> password;
	login(username, password);

	cout << "You are back in main. Thank you for using our username and password guessing program.\n";
	return 0;
}