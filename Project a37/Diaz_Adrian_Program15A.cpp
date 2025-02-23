/*COMMENTS
___________
ADRIAN DIAZ
CIS-5 ONLINE
February 5, 2023
PROGRAM 15A: CLASSES AND OBJECTS */

/*PART 1

Procedural programming - Peforms operations by executing statements that are in one or more procedures.
Object-oriented programming - Object Oriented programming is programming that is centered around creating objects.
Class - Code that describes an object. Describes the data an object can hold, and the actions and operations an objcet can perform.
Instance - An instance is like a struct variable, but in terms of objects.
Private - Members cannot be accessed from outside the class.
Public - Members can be accessed by code outside the class.
Constructor - A constructor is a amember function that is automatically executed when an object is created.
In Line Functions - A member function that is written inside a class declaration.
Member Functions - Are written outside the class declaration. Declared as members of a class.
*/


// PART 2
#include <iostream>
using namespace std;

class BankAccount
{
private:
	double balance;

public:
	BankAccount(double startingBal)
	{
		balance = startingBal;
	}

	void deposit(double amount)
	{
		balance += amount;
	}

	void withdraw(double amount)
	{
		balance -= amount;
	}

	double getBalance() const
	{
		return balance;
	}
};

int main()
{
	BankAccount savingsAccount(2500.0);
	BankAccount checkingsAccount(500.0);

	savingsAccount.deposit(500.0);
	checkingsAccount.withdraw(200.0);

	cout << "The savings account balance is $" << savingsAccount.getBalance() << endl;
	cout << "The checking account balance is $" << checkingsAccount.getBalance() << endl;

	return 0;
}