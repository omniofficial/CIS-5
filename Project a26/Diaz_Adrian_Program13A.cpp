/*COMMENTS
___________
ADRIAN DIAZ
CIS-5 ONLINE
February 2, 2023
PROGRAM 13A: THIS PROGRAM OUTPUTS SALES BY DIVISION*/

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
	const int NUM_DIVS = 3;
	const int NUM_QTRS = 4;
	double sales[NUM_DIVS][NUM_QTRS];
	double divSALES[NUM_DIVS];
	double totalsales = 0;
	double divsales = 0;
	int count;
	int i;

	cout << "This program will calculate the division sales and total sales of all the company's divisions.\n";
	cout << "Enter the following sales information:\n";

	for (count = 0; count < NUM_DIVS; count++)
	{
		cout << "Division " << (count + 1);
		cout << "\n____________";
		cout << "\n";

		for (i = 0; i < NUM_QTRS; i++)
		{
			cout << "Quarter " << (i + 1);
			cout << ": ";
			cin >> sales[count][i];
			cout << "\n";
		}
	}

	for (count = 0; count < NUM_DIVS; count++)
	{
		divsales = 0;
		for (i = 0; i < NUM_QTRS; i++)
		{
			totalsales += sales[count][i];
			divsales += sales[count][i];
		}
		cout << "Sales for Division " << (count + 1) << " is $" << divsales;
		cout << "\n";
	}



	cout << "The total sales for the company are: $" << totalsales;
	cout << "\n";
	system("pause");
	return 0;
}