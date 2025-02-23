/*COMMENTS
___________
ADRIAN DIAZ
CIS-5 ONLINE
FEBRUARY 2, 2023
REVISED PROGRAM 9C: THIS PROGRAM IS A REVISED VERSION OF PROGRAM 9C.*/

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

bool isValid(int num, int min, int max);
int mainmenu();
int sidemenu();
void goodburger(double& total);
void goodpizza(double& total);
void gooddog(double& total);
void goodchicken(double& total);



int main()
{
	int choice;
	double total = 0;
	double finaltotal = 0;

	do
	{
		choice = mainmenu();
		switch (choice)
		{
			/*-----------GoodBurger-----------*/
		case 1:
			goodburger(total);
			break;
			/*-----------GoodPizza-----------*/
		case 2:
			goodpizza(total);
			break;
			/*-----------GoodDog-----------*/
		case 3:
			gooddog(total);
			break;
			/*-----------GoodChicken-----------*/
		case 4:
			goodchicken(total);
			break;
			/*-----------QUIT-----------*/
		case 5:
			cout << "You have chose to quit the program.\n";
			break;
		default:
			cout << "ERROR!";
		}

		finaltotal += total;
		cout << "Your accumulated total is " << finaltotal;
	} while (choice != 5);
	return 0;

}

int mainmenu()
{
	int choice;
	int min = 1;
	int max = 4;
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
	cout << endl;

	while (!isValid(choice, 1, 5))
	{
		cin >> choice;
	}

	return choice;
}

int sidemenu()
{
	int choice;
	int min = 1;
	int max = 4;

	cout << "Please select one of the following:\n";
	cout << "1: Fries ........." << "\n";
	cout << "2: Soda ........." << "\n";
	cout << "3: Coleslaw ........." << "\n";
	cout << "4: Just the item ........." << "\n";

	cin >> choice;

	while (!isValid(choice, min, max))
	{
		cin >> choice;
	}

	return choice;
}

void goodburger(double& total)
{
	//MENU ITEMS
	double const GOODBURGER_COST = 8.00;
	double const GOODPIZZA_COST = 12.00;
	double const GOODDOG_COST = 6.00;
	double const GOODCHICKEN_COST = 7.00;

	//ADD ON ITEMS
	double const FRIES_PRICE = 2.00;
	double const SODA_PRICE = 2.50;
	double const COLESLAW_PRICE = 5.75;

	int choice;
	int min = 1;
	int max = 4;

	choice = sidemenu();
	if (choice == 1)
	{
		total = total + GOODBURGER_COST + FRIES_PRICE;
	}
	else if (choice == 2)
	{
		total = total + GOODBURGER_COST + SODA_PRICE;
	}
	else if (choice == 3)
	{
		total = total + GOODBURGER_COST + COLESLAW_PRICE;
	}
	else if (choice == 4)
	{
		total = total + GOODBURGER_COST;
	}

	cout << "Your total is $" << total << "\n\n";

	while (!isValid(choice, min, max))
	{
		cout << "Please input the correct input (a number 1-4)\n";
	}
}

void goodpizza(double& total)
{
	//MENU ITEMS
	double const GOODBURGER_COST = 8.00;
	double const GOODPIZZA_COST = 12.00;
	double const GOODDOG_COST = 6.00;
	double const GOODCHICKEN_COST = 7.00;

	//ADD ON ITEMS
	double const FRIES_PRICE = 2.00;
	double const SODA_PRICE = 2.50;
	double const COLESLAW_PRICE = 5.75;

	int choice;
	int min = 1;
	int max = 4;

	choice = sidemenu();
	if (choice == 1)
	{
		total = total + GOODPIZZA_COST + FRIES_PRICE;
	}
	else if (choice == 2)
	{
		total = total + GOODPIZZA_COST + SODA_PRICE;
	}
	else if (choice == 3)
	{
		total = total + GOODPIZZA_COST + COLESLAW_PRICE;
	}
	else if (choice == 4)
	{
		total = total + GOODPIZZA_COST;
	}

	cout << "Your total is $" << total << "\n\n";

	while (!isValid(choice, min, max))
	{
		cout << "Please input the correct input (a number 1-4)\n";
	}

}

void gooddog(double& total)
{
	//MENU ITEMS
	double const GOODBURGER_COST = 8.00;
	double const GOODPIZZA_COST = 12.00;
	double const GOODDOG_COST = 6.00;
	double const GOODCHICKEN_COST = 7.00;

	//ADD ON ITEMS
	double const FRIES_PRICE = 2.00;
	double const SODA_PRICE = 2.50;
	double const COLESLAW_PRICE = 5.75;

	int choice;
	int min = 1;
	int max = 4;

	choice = sidemenu();
	if (choice == 1)
	{
		total = total + GOODDOG_COST + FRIES_PRICE;
	}
	else if (choice == 2)
	{
		total = total + GOODDOG_COST + SODA_PRICE;
	}
	else if (choice == 3)
	{
		total = total + GOODDOG_COST + COLESLAW_PRICE;
	}
	else if (choice == 4)
	{
		total = total + GOODDOG_COST;
	}

	cout << "Your total is $" << total << "\n\n";

	while (!isValid(choice, min, max))
	{
		cout << "Please input the correct input (a number 1-4)\n";
	}
}

void goodchicken(double& total)
{
	//MENU ITEMS
	double const GOODBURGER_COST = 8.00;
	double const GOODPIZZA_COST = 12.00;
	double const GOODDOG_COST = 6.00;
	double const GOODCHICKEN_COST = 7.00;

	//ADD ON ITEMS
	double const FRIES_PRICE = 2.00;
	double const SODA_PRICE = 2.50;
	double const COLESLAW_PRICE = 5.75;

	int choice;
	int min = 1;
	int max = 4;

	choice = sidemenu();
	if (choice == 1)
	{
		total = total + GOODCHICKEN_COST + FRIES_PRICE;
	}
	else if (choice == 2)
	{
		total = total + GOODCHICKEN_COST + SODA_PRICE;
	}
	else if (choice == 3)
	{
		total = total + GOODCHICKEN_COST + COLESLAW_PRICE;
	}
	else if (choice == 4)
	{
		total = total + GOODCHICKEN_COST;
	}

	cout << "Your total is $" << total << "\n\n";

	while (!isValid(choice, min, max))
	{
		cout << "Please input the correct input (a number 1-4)\n";
	}
}