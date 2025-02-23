/*COMMENTS
___________
ADRIAN DIAZ
CIS-5 ONLINE
JANUARY 10, 2023
PROGRAM 2B: LASER WARS CANTINA - THIS PROGRAM CALCULATES THE TOTAL DUE FOR A RESTAURANT BILL.*/

#include <iostream>
using namespace std;
int main()
{
/*DECLARING VARIABLES*/
double bill_total;
const double TAX = 0.05;
const double TIP = 0.15;
double final_tax;
double final_tip;
double final_total;

/*USER INPUT*/
	cout << "Please enter your bill total: ";
	cin >> bill_total;

/*LOGIC*/
final_tax = bill_total * TAX;
final_tip = bill_total * TIP;
final_total = bill_total + final_tax + final_tip;

/*OUTPUT*/
cout << "\n\tBILL SUMMARY\n";
cout << "Food Items: $" << bill_total << "\n";
cout << "Tax 5%: $" << final_tax << "\n";
cout << "Tip 15%: $" << final_tip << "\n";
cout << "-------------------------\n";
cout << "Total: $" << final_total << "\n\n";


	system("pause");
	return 0;
}