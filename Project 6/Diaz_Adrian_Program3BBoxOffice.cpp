/*COMMENTS
___________
ADRIAN DIAZ
CIS-5 ONLINE
JANUARY 14, 2023
PROGRAM 3B: This program calculates a theather's gross and net box office profit for a night.*/


#include <iostream>
#include <iomanip>
#include <stdio.h>
#include <string>
using namespace std;

int main()
{
string movie_name;
const double adult_ticketprice = 10.00;
const double child_ticketprice = 6.00;
const double percentage_kept = 0.20;
int adult_ticketnum;
int child_ticketnum;
double gross_profit;
double net_profit;
double distributor_profit;

/*USER INPUT*/
	cout << "What is the name of the movie?\n";
	getline(cin,movie_name);
	cout << "\n";

	cout << "How many adult tickets were sold?\n";
	cin >> adult_ticketnum;
	cout << "\n";

	cout << "How many child tickets were sold?\n";
	cin >> child_ticketnum;
	cout << "\n";

/*LOGIC*/
	gross_profit = (adult_ticketprice * adult_ticketnum) + (child_ticketprice * child_ticketnum);
	net_profit = gross_profit * percentage_kept;
	distributor_profit = gross_profit - net_profit;

/*OUTPUT*/
	cout << "Movie Name:" << setw(22) << movie_name << "\n";
	cout << "Adult Tickets Sold:" << setw(19) << adult_ticketnum << "\n";
	cout << "Child Tickets Sold:" << setw(19) << child_ticketnum << "\n\n";
	
	cout << fixed << setprecision(2);
	
	cout << "Gross Box Office Profit: " << setw(5) <<  "$ " << right << setw(10) << gross_profit << "\n";
	cout << "Net Box Office Profit: " << setw(7) << "$ " << right << setw(10) << net_profit << "\n";
	cout << "Amount Paid to Distributor: " << "$ " << right << setw(10) << distributor_profit << "\n";
	
	cout << "\n";
	system("pause");
	return 0;
}