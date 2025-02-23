/*COMMENTS
___________
ADRIAN DIAZ
CIS-5 ONLINE
February 5, 2023
PROGRAM 15C: POINTERS */

#include <iostream>
#include <string>
using namespace std;

int main()
{
	int* testScores;
	int size;

	// GET THE NUMBER OF TEST SCORES.
	cout << "How many test scores do you have? ";
	cin >> size;

	// CREATE THE ARRAY
	testScores = new int[size];


	for (int index = 0; index < size; index++)
	{
		cout << "Enter score number " << (index + 1) << ": ";
		cin >> testScores[index];
	}

	// WHEN FINISHED WITH THE DYNAMICALLY-ALLOCATED ARRAY...

	/* 
	delete [] testScores;
	testScores = 0; 
	*/


}