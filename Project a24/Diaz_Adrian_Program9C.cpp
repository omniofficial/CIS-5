/*COMMENTS
___________
ADRIAN DIAZ
CIS-5 ONLINE
JANUARY 26, 2023
PROGRAM 9C: THIS PROGRAM IS AN UPDATED VERSION OF A RESTAURANT MENU THAT UTLILIZES LOOPS AND FUNCTIONS.*/

#include <iostream>
#include <string>
using namespace std;
bool isValid(int num, int min, int max);
int displaymenu();
double goodburger(double total_cost, double GOODBURGER_COST, double FRIES_S_PRICE, double FRIES_M_PRICE, double FRIES_L_PRICE, double SODA_S_PRICE, double SODA_M_PRICE, double SODA_L_PRICE, double COLESLAW_S_PRICE, double COLESLAW_M_PRICE, double COLESLAW_L_PRICE);
double goodpizza(double total_cost, double GOODPIZZA_COST, double FRIES_S_PRICE, double FRIES_M_PRICE, double FRIES_L_PRICE, double SODA_S_PRICE, double SODA_M_PRICE, double SODA_L_PRICE, double COLESLAW_S_PRICE, double COLESLAW_M_PRICE, double COLESLAW_L_PRICE);
double gooddog(double total_cost, double GOODDOG_COST, double FRIES_S_PRICE, double FRIES_M_PRICE, double FRIES_L_PRICE, double SODA_S_PRICE, double SODA_M_PRICE, double SODA_L_PRICE, double COLESLAW_S_PRICE, double COLESLAW_M_PRICE, double COLESLAW_L_PRICE);
double goodchicken(double total_cost, double GOODCHICKEN_COST, double FRIES_S_PRICE, double FRIES_M_PRICE, double FRIES_L_PRICE, double SODA_S_PRICE, double SODA_M_PRICE, double SODA_L_PRICE, double COLESLAW_S_PRICE, double COLESLAW_M_PRICE, double COLESLAW_L_PRICE);

int main()
{
	double const GOODBURGER_COST = 8.00;
	double const GOODPIZZA_COST = 12.00;
	double const GOODDOG_COST = 6.00;
	double const GOODCHICKEN_COST = 7.00;

	double const FRIES_S_PRICE = 1.00;
	double const FRIES_M_PRICE = 2.00;
	double const FRIES_L_PRICE = 3.00;

	double const SODA_S_PRICE = 1.50;
	double const SODA_M_PRICE = 2.50;
	double const SODA_L_PRICE = 3.50;

	double const COLESLAW_S_PRICE = 4.75;
	double const COLESLAW_M_PRICE = 5.75;
	double const COLESLAW_L_PRICE = 6.75;


	double final_total = 0;
	double total_cost = 0;
	int choice;

	do
	{
		choice = displaymenu();
		switch (choice)
		{
		default:
			bool isValid();
			/*-----------GoodBurger-----------*/
		case 1:
			final_total = goodburger(total_cost, GOODBURGER_COST, FRIES_S_PRICE, FRIES_M_PRICE, FRIES_L_PRICE, SODA_S_PRICE, SODA_M_PRICE, SODA_L_PRICE, COLESLAW_S_PRICE, COLESLAW_M_PRICE, COLESLAW_L_PRICE);
			break;
			/*-----------GoodPizza-----------*/
		case 2:
			final_total = goodpizza(total_cost, GOODPIZZA_COST, FRIES_S_PRICE, FRIES_M_PRICE, FRIES_L_PRICE, SODA_S_PRICE, SODA_M_PRICE, SODA_L_PRICE, COLESLAW_S_PRICE, COLESLAW_M_PRICE, COLESLAW_L_PRICE);
			break;
			/*-----------GoodDog-----------*/
		case 3:
			final_total = gooddog(total_cost, GOODDOG_COST, FRIES_S_PRICE, FRIES_M_PRICE, FRIES_L_PRICE, SODA_S_PRICE, SODA_M_PRICE, SODA_L_PRICE, COLESLAW_S_PRICE, COLESLAW_M_PRICE, COLESLAW_L_PRICE);
			break;
			/*-----------GoodChicken-----------*/
		case 4:
			final_total = goodchicken(total_cost, GOODCHICKEN_COST, FRIES_S_PRICE, FRIES_M_PRICE, FRIES_L_PRICE, SODA_S_PRICE, SODA_M_PRICE, SODA_L_PRICE, COLESLAW_S_PRICE, COLESLAW_M_PRICE, COLESLAW_L_PRICE);
			break;
			/*-----------QUIT-----------*/
		case 5:
			cout << "You have chose to quit the program.\n";
			break;


		}
	} while (choice != 5);

	cout << "Thank you for shopping at GoodBurger. We hope we were of help." << "\n";

	system("pause");
	return 0;
}


int displaymenu()
{
	int choice;
	double const GOODBURGER_COST = 8.00;
	double const GOODPIZZA_COST = 12.00;
	double const GOODDOG_COST = 6.00;
	double const GOODCHICKEN_COST = 7.00;

	cout << "Welcome to GOODFOOD, home of the GOODFOOD. Please select a number based on what you would like to order:\n";
	cout << "1: GoodBurger ......... $" << GOODBURGER_COST << "\n";
	cout << "2: GoodPizza ......... $" << GOODPIZZA_COST << "\n";
	cout << "3: GoodDog ......... $" << GOODDOG_COST << "\n";
	cout << "4: GoodChicken ......... $" << GOODCHICKEN_COST << "\n";
	cout << "5: QUIT\n";
	cin >> choice;
	cout << "\n";

	while (!isValid(choice, 1, 5))
	{
		cin >> choice;
	}

	return(choice);
}

double goodburger(double total_cost, double GOODBURGER_COST, double FRIES_S_PRICE, double FRIES_M_PRICE, double FRIES_L_PRICE, double SODA_S_PRICE, double SODA_M_PRICE, double SODA_L_PRICE, double COLESLAW_S_PRICE, double COLESLAW_M_PRICE, double COLESLAW_L_PRICE)
{
	string verify;
	
	do
	{
		double total_cost;
		int choice;
		cout << "Please select one of the following:\n";
		cout << "1: Fries ........." << "\n";
		cout << "2: Soda ........." << "\n";
		cout << "3: Coleslaw ........." << "\n";
		cout << "4: Just the item ........." << "\n";

		cin >> choice;
		cout << "\n";


		/*-----------FRIES-----------*/
		if (choice == 1)
		{
			cout << "Which size would you like this item?\n";
			cout << "1. Small\n";
			cout << "2. Medium\n";
			cout << "3. Large\n";
			cin >> choice;
			cout << "\n";

			if (choice == 1)
			{
				total_cost = GOODBURGER_COST + FRIES_S_PRICE;
				cout << "Your total is $" << total_cost << "\n";
			}
			else if (choice == 2)
			{
				total_cost = GOODBURGER_COST + FRIES_M_PRICE;
				cout << "Your total is $" << total_cost << "\n";
			}
			else if (choice == 3)
			{
				total_cost = GOODBURGER_COST + FRIES_L_PRICE;
				cout << "Your total is $" << total_cost << "\n";
			}
			else
			{
				cout << "Invalid input. Please try again. \n";
			}

		}

		/*-----------SODA-----------*/
		else if (choice == 2)
		{
			cout << "Which size would you like this item?\n";
			cout << "1. Small\n";
			cout << "2. Medium\n";
			cout << "3. Large\n";
			cin >> choice;
			cout << "\n";

			if (choice == 1)
			{
				total_cost = GOODBURGER_COST + SODA_S_PRICE;
				cout << "Your total is $" << total_cost << "\n";
			}
			else if (choice == 2)
			{
				total_cost = GOODBURGER_COST + SODA_M_PRICE;
				cout << "Your total is $" << total_cost << "\n";
			}
			else if (choice == 3)
			{
				total_cost = GOODBURGER_COST + SODA_L_PRICE;
				cout << "Your total is $" << total_cost << "\n";
			}
			else
			{
				cout << "Invalid input. Please try again. \n";
			}

		}

		/*-----------COLESLAW-----------*/
		else if (choice == 3)
		{
			cout << "Which size would you like this item?\n";
			cout << "1. Small\n";
			cout << "2. Medium\n";
			cout << "3. Large\n";
			cin >> choice;
			cout << "\n";

			if (choice == 1)
			{
				total_cost = GOODBURGER_COST + COLESLAW_S_PRICE;
				cout << "Your total is $" << total_cost << "\n";
			}
			else if (choice == 2)
			{
				total_cost = GOODBURGER_COST + COLESLAW_M_PRICE;
				cout << "Your total is $" << total_cost << "\n";
			}
			else if (choice == 3)
			{
				total_cost = GOODBURGER_COST + COLESLAW_L_PRICE;
				cout << "Your total is $" << total_cost << "\n";
			}
			else
			{
				cout << "Invalid input. Please try again. \n";
			}

		}

		/*-----------ITEM ONLY-----------*/
		else if (choice == 4)
		{
			total_cost = GOODBURGER_COST;
			cout << "Your total is $" << total_cost << "\n";
		}

		cout << "Do you wish to add any additional add ons? (Y or N)\n";
		cin >> verify;
		cout << "\n";

	} while (verify == "Y" || verify == "y");
	return total_cost;
}

double goodpizza(double total_cost, double GOODPIZZA_COST, double FRIES_S_PRICE, double FRIES_M_PRICE, double FRIES_L_PRICE, double SODA_S_PRICE, double SODA_M_PRICE, double SODA_L_PRICE, double COLESLAW_S_PRICE, double COLESLAW_M_PRICE, double COLESLAW_L_PRICE)
{
	string verify;

	do
	{
		double total_cost;
		int choice;
		cout << "Please select one of the following:\n";
		cout << "1: Fries ........." << "\n";
		cout << "2: Soda ........." << "\n";
		cout << "3: Coleslaw ........." << "\n";
		cout << "4: Just the item ........." << "\n";

		cin >> choice;
		cout << "\n";

		/*-----------FRIES-----------*/
		if (choice == 1)
		{
			cout << "Which size would you like this item?\n";
			cout << "1. Small\n";
			cout << "2. Medium\n";
			cout << "3. Large\n";
			cin >> choice;
			cout << "\n";

			if (choice == 1)
			{
				total_cost = GOODPIZZA_COST + FRIES_S_PRICE;
				cout << "Your total is $" << total_cost << "\n";
			}
			else if (choice == 2)
			{
				total_cost = GOODPIZZA_COST + FRIES_M_PRICE;
				cout << "Your total is $" << total_cost << "\n";
			}
			else if (choice == 3)
			{
				total_cost = GOODPIZZA_COST + FRIES_L_PRICE;
				cout << "Your total is $" << total_cost << "\n";
			}
			else
			{
				cout << "Invalid input. Please try again. \n";
			}

		}

		/*-----------SODA-----------*/
		else if (choice == 2)
		{
			cout << "Which size would you like this item?\n";
			cout << "1. Small\n";
			cout << "2. Medium\n";
			cout << "3. Large\n";
			cin >> choice;
			cout << "\n";

			if (choice == 1)
			{
				total_cost = GOODPIZZA_COST + SODA_S_PRICE;
				cout << "Your total is $" << total_cost << "\n";
			}
			else if (choice == 2)
			{
				total_cost = GOODPIZZA_COST + SODA_M_PRICE;
				cout << "Your total is $" << total_cost << "\n";
			}
			else if (choice == 3)
			{
				total_cost = GOODPIZZA_COST + SODA_L_PRICE;
				cout << "Your total is $" << total_cost << "\n";
			}
			else
			{
				cout << "Invalid input. Please try again. \n";
			}

		}

		/*-----------SANDWICH-----------*/
		else if (choice == 3)
		{
			cout << "Which size would you like this item?\n";
			cout << "1. Small\n";
			cout << "2. Medium\n";
			cout << "3. Large\n";
			cin >> choice;
			cout << "\n";

			if (choice == 1)
			{
				total_cost = GOODPIZZA_COST + COLESLAW_S_PRICE;
				cout << "Your total is $" << total_cost << "\n";
			}
			else if (choice == 2)
			{
				total_cost = GOODPIZZA_COST + COLESLAW_M_PRICE;
				cout << "Your total is $" << total_cost << "\n";
			}
			else if (choice == 3)
			{
				total_cost = GOODPIZZA_COST + COLESLAW_L_PRICE;
				cout << "Your total is $" << total_cost << "\n";
			}
			else
			{
				cout << "Invalid input. Please try again. \n";
			}

		}

		/*-----------JUST ITEM-----------*/
		else if (choice == 4)
		{
			total_cost = GOODPIZZA_COST;
			cout << "Your total is $" << total_cost << "\n";
		}

		cout << "Do you wish to add any additional add ons? (Y or N)\n";
		cin >> verify;
		cout << "\n";

	} while (verify == "Y" || verify == "y");
	return total_cost;
}

double gooddog(double total_cost, double GOODDOG_COST, double FRIES_S_PRICE, double FRIES_M_PRICE, double FRIES_L_PRICE, double SODA_S_PRICE, double SODA_M_PRICE, double SODA_L_PRICE, double COLESLAW_S_PRICE, double COLESLAW_M_PRICE, double COLESLAW_L_PRICE)
{
	string verify;

	do
	{
		double total_cost;
		int choice;
		cout << "Please select one of the following:\n";
		cout << "1: Fries ........." << "\n";
		cout << "2: Soda ........." << "\n";
		cout << "3: Coleslaw ........." << "\n";
		cout << "4: Just the item ........." << "\n";

		cin >> choice;
		cout << "\n";

		/*-----------FRIES-----------*/
		if (choice == 1)
		{
			cout << "Which size would you like this item?\n";
			cout << "1. Small\n";
			cout << "2. Medium\n";
			cout << "3. Large\n";
			cin >> choice;
			cout << "\n";

			if (choice == 1)
			{
				total_cost = GOODDOG_COST + FRIES_S_PRICE;
				cout << "Your total is $" << total_cost << "\n";
			}
			else if (choice == 2)
			{
				total_cost = GOODDOG_COST + FRIES_M_PRICE;
				cout << "Your total is $" << total_cost << "\n";
			}
			else if (choice == 3)
			{
				total_cost = GOODDOG_COST + FRIES_L_PRICE;
				cout << "Your total is $" << total_cost << "\n";
			}
			else
			{
				cout << "Invalid input. Please try again. \n";
			}

		}

		/*-----------SODA-----------*/
		else if (choice == 2)
		{
			cout << "Which size would you like this item?\n";
			cout << "1. Small\n";
			cout << "2. Medium\n";
			cout << "3. Large\n";
			cin >> choice;
			cout << "\n";

			if (choice == 1)
			{
				total_cost = GOODDOG_COST + SODA_S_PRICE;
				cout << "Your total is $" << total_cost << "\n";
			}
			else if (choice == 2)
			{
				total_cost = GOODDOG_COST + SODA_M_PRICE;
				cout << "Your total is $" << total_cost << "\n";
			}
			else if (choice == 3)
			{
				total_cost = GOODDOG_COST + SODA_L_PRICE;
				cout << "Your total is $" << total_cost << "\n";
			}
			else
			{
				cout << "Invalid input. Please try again. \n";
			}

		}

		/*-----------COLESLAW-----------*/
		else if (choice == 3)
		{
			cout << "Which size would you like this item?\n";
			cout << "1. Small\n";
			cout << "2. Medium\n";
			cout << "3. Large\n";
			cin >> choice;
			cout << "\n";

			if (choice == 1)
			{
				total_cost = GOODDOG_COST + COLESLAW_S_PRICE;
				cout << "Your total is $" << total_cost << "\n";
			}
			else if (choice == 2)
			{
				total_cost = GOODDOG_COST + COLESLAW_M_PRICE;
				cout << "Your total is $" << total_cost << "\n";
			}
			else if (choice == 3)
			{
				total_cost = GOODDOG_COST + COLESLAW_L_PRICE;
				cout << "Your total is $" << total_cost << "\n";
			}
			else
			{
				cout << "Invalid input. Please try again. \n";
			}

		}

		/*-----------ITEM ONLY-----------*/
		else if (choice == 4)
		{
			total_cost = GOODDOG_COST;
			cout << "Your total is $" << total_cost << "\n";
		}

		cout << "Do you wish to add any additional add ons? (Y or N)\n";
		cin >> verify;
		cout << "\n";

	} while (verify == "Y" || verify == "y");
	return total_cost;
}

double goodchicken(double total_cost, double GOODCHICKEN_COST, double FRIES_S_PRICE, double FRIES_M_PRICE, double FRIES_L_PRICE, double SODA_S_PRICE, double SODA_M_PRICE, double SODA_L_PRICE, double COLESLAW_S_PRICE, double COLESLAW_M_PRICE, double COLESLAW_L_PRICE)
{
	string verify;

	do
	{
		double total_cost;
		int choice;
		cout << "GoodBurger works.\n";
		cout << "Please select one of the following:\n";
		cout << "1: Fries ........." << "\n";
		cout << "2: Soda ........." << "\n";
		cout << "3: Coleslaw ........." << "\n";
		cout << "4: Just the item ........." << "\n";

		cin >> choice;
		cout << "\n";

		/*-----------FRIES-----------*/
		if (choice == 1)
		{
			cout << "Which size would you like this item?\n";
			cout << "1. Small\n";
			cout << "2. Medium\n";
			cout << "3. Large\n";
			cin >> choice;
			cout << "\n";

			if (choice == 1)
			{
				total_cost = GOODCHICKEN_COST + FRIES_S_PRICE;
				cout << "Your total is $" << total_cost << "\n";
			}
			else if (choice == 2)
			{
				total_cost = GOODCHICKEN_COST + FRIES_M_PRICE;
				cout << "Your total is $" << total_cost << "\n";
			}
			else if (choice == 3)
			{
				total_cost = GOODCHICKEN_COST + FRIES_L_PRICE;
				cout << "Your total is $" << total_cost << "\n";
			}
			else
			{
				cout << "Invalid input. Please try again. \n";
			}

		}

		/*-----------SODA-----------*/
		else if (choice == 2)
		{
			cout << "Which size would you like this item?\n";
			cout << "1. Small\n";
			cout << "2. Medium\n";
			cout << "3. Large\n";
			cin >> choice;
			cout << "\n";

			if (choice == 1)
			{
				total_cost = GOODCHICKEN_COST + SODA_S_PRICE;
				cout << "Your total is $" << total_cost << "\n";
			}
			else if (choice == 2)
			{
				total_cost = GOODCHICKEN_COST + SODA_M_PRICE;
				cout << "Your total is $" << total_cost << "\n";
			}
			else if (choice == 3)
			{
				total_cost = GOODCHICKEN_COST + SODA_L_PRICE;
				cout << "Your total is $" << total_cost << "\n";
			}
			else
			{
				cout << "Invalid input. Please try again. \n";
			}

		}

		/*-----------COLESLAW-----------*/
		else if (choice == 3)
		{
			cout << "Which size would you like this item?\n";
			cout << "1. Small\n";
			cout << "2. Medium\n";
			cout << "3. Large\n";
			cin >> choice;
			cout << "\n";

			if (choice == 1)
			{
				total_cost = GOODCHICKEN_COST + COLESLAW_S_PRICE;
				cout << "Your total is $" << total_cost << "\n";
			}
			else if (choice == 2)
			{
				total_cost = GOODCHICKEN_COST + COLESLAW_M_PRICE;
				cout << "Your total is $" << total_cost << "\n";
			}
			else if (choice == 3)
			{
				total_cost = GOODCHICKEN_COST + COLESLAW_L_PRICE;
				cout << "Your total is $" << total_cost << "\n";
			}
			else
			{
				cout << "Invalid input. Please try again. \n";
			}

		}

		/*-----------ITEM ONLY-----------*/
		else if (choice == 4)
		{
			total_cost = GOODCHICKEN_COST;
			cout << "Your total is $" << total_cost << "\n";
		}

		cout << "Do you wish to add any additional add ons? (Y or N)\n";
		cin >> verify;
		cout << "\n";

	} while (verify == "Y" || verify == "y");
	return total_cost;
}