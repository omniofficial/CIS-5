/*COMMENTS
___________
ADRIAN DIAZ
CIS-5 ONLINE
JANUARY 20, 2023
PROGRAM 6C: THIS PROGRAM UTILIZES FOR LOOPS TO PROVIDE TOTAL SALES AMOUNT GIVEN FOUR REPETITIONS. */

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
	double total_sales = 0.0;

	cout << "Welcome to our total sales calculator!\n\n";

	for (int i = 1; i <= 4; i++)
	{
		double sales;
		cout << "Please enter the sales for division " << i << ": \n";
		cin >> sales;
		total_sales += sales;
	}
	
	cout << "\nThe total sales for divisions 1-4 are $" << total_sales << ".\n";
	system("pause");
	return 0;
}