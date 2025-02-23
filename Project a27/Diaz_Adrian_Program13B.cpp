/*COMMENTS
___________
ADRIAN DIAZ
CIS-5 ONLINE
February 2, 2023
PROGRAM 13B: Form a 2D Array as Paramater via video.*/

#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>
using namespace std;

const int NUM_ROWS = 4;
const int NUM_COLS = 3;

void fillNameArray(string name[][NUM_COLS]);
void displaySeatingChart(string name[][NUM_COLS]);

int main()
{
	string name[NUM_ROWS][NUM_COLS];

	fillNameArray(name);
	displaySeatingChart(name);

	system("pause");
	return 0;
}

void fillNameArray(string name[][NUM_COLS])
{
	fstream nameFile;
	nameFile.open("students.txt");

	for (int i = 0; i < NUM_ROWS; i++)
	{
		for (int j = 0; j < NUM_COLS; j++)
		{
			nameFile >> name[i][j];
		}
	}
	nameFile.close();
}

void displaySeatingChart(string name[][NUM_COLS])
{
	for (int i = 0; i < NUM_ROWS; i++)
	{
		for (int j = 0; j < NUM_COLS; j++)
		{
			cout << setw(10) << name[i][j];
		}
		cout << endl;
	}
}