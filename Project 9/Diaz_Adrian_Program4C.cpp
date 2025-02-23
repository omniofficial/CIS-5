/*COMMENTS
___________
ADRIAN DIAZ
CIS-5 ONLINE
JANUARY 14, 2023
PROGRAM 4C: THIS PROGRAM ASKS FOR THE NUMBER OF FACEMASKS ORDERED ONLINE AND COMPUTES THE TOTAL COST OF THE PURCHASE.*/

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
int facemask_sales;
const int facemask_price = 13.00;
double discount;
double amount_saved;
double prediscounted_cost;
double discounted_cost;
int discount_percentage;

	cout << "Hello! How many facemasks were ordered online? \n";
	cin >> facemask_sales;
	cout << "\n";

	if (facemask_sales < 0 || facemask_sales >= 10000)
	{
		cout << "Facemask sales must be greater than 0 and less than 10000. Please select a different number of facemask sales.";
		system("pause");
		return 0;
	}

	else
	{
		if (facemask_sales >= 10 && facemask_sales <= 49)
			discount = 0.20;
		else if (facemask_sales >= 50 && facemask_sales <= 199)
			discount = 0.30;
		else if (facemask_sales >= 200 && facemask_sales <= 499)
			discount = 0.40;
		else if (facemask_sales >= 500 && facemask_sales <= 10000)
			discount = 0.50;
	}
	
	if (discount == 0.20)
		discount_percentage = 20;
	else if (discount == 0.30)
		discount_percentage = 30;
	else if (discount == 0.40)
		discount_percentage = 40;
	else if (discount == 0.50)
		discount_percentage = 50;



/*LOGIC*/
	prediscounted_cost = facemask_sales * facemask_price;
	amount_saved = prediscounted_cost * discount;
	discounted_cost = prediscounted_cost - (amount_saved);

/*OUTPUT*/


	cout << fixed << setprecision(2);
	cout << "Price per facemask: $" << facemask_price << "\n";
	cout << "Discount received: " << discount_percentage << "%" << "\n\n";

	cout << fixed << setprecision(2);
	cout << "Total Facemasks Ordered: " << facemask_sales << "\n";
	cout << "Prediscounted Cost: " << prediscounted_cost << "\n";
	cout << "Amount saved: " << amount_saved << "\n";
	cout << "Total cost " << discounted_cost << "\n";

}