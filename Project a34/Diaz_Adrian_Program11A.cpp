/*COMMENTS
___________
ADRIAN DIAZ
CIS - 5 ONLINE
February 2, 2023
PROGRAM 11A: THIS PROGRAM SERVES AS A NUMBER STATS CALCULATOR */

#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>
using namespace std;

int main()
{
	const int SIZE = 199;
	int number[SIZE];
	int current_number;
	int total = 0;
	int average;
	int high_number;
	int low_number;


	ifstream inputFile;
	inputFile.open("Random.txt");

	ofstream outputFile;
	outputFile.open("Output.txt");

	while (inputFile >> current_number)
	{
		// READING DATA
		for (int i = 0; i < SIZE; i++)
		{
			inputFile >> number[i];
			total += number[i];
			average = total / SIZE;
		}

		low_number = number[0];
		high_number = number[0];

		// CALCULATING HIGH AND LOW NUMBER
		for (int i = 1; i < SIZE; i++)
		{
			if (number[i] > high_number)
			{
				high_number = number[i];
			}
			if (number[i] < low_number)
			{
				low_number = number[i];
			}
		}

		// ECHOING OUTPUT
		outputFile << "Count: " << SIZE + 1 << endl;
		outputFile << "Total: " << total << endl;
		outputFile << "Average: " << average << endl;
		outputFile << "High Number: " << high_number << endl;
		outputFile << "Low Number: " << low_number << endl;

		// DISPLAY
		cout << "Count: " << SIZE + 1;
		cout << "\n";
		cout << "Total: " << total;
		cout << "\n";
		cout << "Average: " << average;
		cout << "\n";
		cout << "High Number: " << high_number;
		cout << "\n";
		cout << "Low Number: " << low_number;
		cout << "\n";

	} inputFile.close();
	outputFile.close();
	system("pause");
	return 0;
}