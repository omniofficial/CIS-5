/*COMMENTS
___________
ADRIAN DIAZ
CIS-5 ONLINE
JANUARY 14, 2023
PROGRAM 5B: THIS PROGRAM DISPLAYS A MENU TO A USER AND PROMPTS THE USER TO SELECT VARIOUS FOOD ITEMS.*/

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
int choice;
const string item1 = "GoodBurger";
const string item2 = "GoodPizza";
const string item3 = "GoodDog";
const string item4 = "GoodChicken";

double const item_1_cost = 8.00;
double const item_2_cost = 12.00;
double const item_3_cost = 6.00;
double const item_4_cost = 7.00;




int add_on_amount;
double add_on_cost = 1.00;
double total_cost;

	cout << "Welcome to GOODFOOD, home of the GOODFOOD. Please select a number based on what you would like to order:\n";
	cout << "1: GoodBurger ......... $" << item_1_cost << "\n";
	cout << "2: GoodPizza ......... $" << item_2_cost << "\n";
	cout << "3: GoodDog ......... $" << item_3_cost << "\n";
	cout << "4: GoodChicken ......... $" << item_4_cost << "\n";
	cout << "#: ";
	cin >> choice;
	cout << "\n";

switch (choice)
{
	/*-----------GoodBurger-----------*/
case 1:
	cout << "Good choice with the " << item1 << ". It comes with ketchup, mustard, and cheese by default.\n";
	cout << "Below are some additional add-ons we offer, which each carry a $1 charge.\n\n";
	cout << "Lettuce\n";
	cout << "Tomato\n";
	cout << "Pickles\n\n";
	cout << "How many items would you like to add to your " << item1 << "?\n";
	cin >> add_on_amount;
	cout << "\n";

	total_cost = item_1_cost + (add_on_amount * add_on_cost);
	cout << "Good! Now, with the " << item1 << " and your " << add_on_amount << " additional add-ons, your total cost comes out to: $" << total_cost << ".";
	cout << "\n";

	break;
	/*-----------GoodPizza-----------*/
case 2:
	cout << "Good choice with the " << item2 << ". It comes with cheese and pepperoni as default. \n";
	cout << "Below are some additional add-ons we offer, which each carry a $1 charge.\n\n";
	cout << "Mushrooms\n";
	cout << "Pineapple\n";
	cout << "Basil\n\n";
	cout << "How many items would you like to add to your " << item2 << "?\n";
	cin >> add_on_amount;
	cout << "\n";

	total_cost = item_2_cost + (add_on_amount * add_on_cost);
	cout << "Good! Now, with the " << item2 << " and your " << add_on_amount << " additional add-ons, your total cost comes out to: $" << total_cost << ".";
	cout << "\n";

	break;
	/*-----------GoodDog-----------*/
case 3:
	cout << "Good choice with the " << item3 << ". It comes with onion, ketchup and mustard by default. \n";
	cout << "Below are some additional add-ons we offer, which each carry a $1 charge.\n\n";
	cout << "Cheese\n";
	cout << "Bacon\n";
	cout << "Ham\n\n";
	cout << "How many items would you like to add to your " << item3 << "?\n";
	cin >> add_on_amount;
	cout << "\n";

	total_cost = item_3_cost + (add_on_amount * add_on_cost);
	cout << "Good! Now, with the " << item3 << " and your " << add_on_amount << " additional add-ons, your total cost comes out to: $" << total_cost << ".";
	cout << "\n";

	break;
	/*-----------GoodChicken-----------*/
case 4:
	cout << "Good choice with the " << item4 << ". It comes with lettuce, our specialty sauce and tomato by default. \n";
	cout << "Below are some additional add-ons we offer, which each carry a $1 charge.\n\n";
	cout << "Honey Barbeque Sauce\n";
	cout << "Olives\n";
	cout << "Diced Potato\n\n";
	cout << "How many items would you like to add to your " << item4 << "?\n";
	cin >> add_on_amount;
	cout << "\n";

	total_cost = item_4_cost + (add_on_amount * add_on_cost);
	cout << "Good! Now, with the " << item4 << " and your " << add_on_amount << " additional add-ons, your total cost comes out to: $" << total_cost << ".";
	cout << "\n";
	break;
}

	cout << "\nThank you for eating at GoodFoods, home of the GoodFoods. Make sure to stop by next time!\n";
	system("pause");
	return 0;
}