/*COMMENTS
___________
ADRIAN DIAZ
CIS-5 ONLINE
JANUARY 14, 2023
PROGRAM 4A: This program sorts three numbers from largest to greatest.*/

#include <iostream>
using namespace std;

int main()
{
	int integer_1;
	int integer_2;
	int integer_3;
	int small = 0;
	int medium = 0;
	int large= 0;

/*USER INPUT*/
	cout << "Please input the value of integer 1: \n";
	cin >> integer_1;
	cout << "\n";

	if (integer_1 < 1 || integer_1 > 500)
	{
		cout << "Not applicable. Please select a different number for integer 1.";
		system("pause");
		return 0;
	}

	else
	{
		cout << "Please input the value of integer 2: \n";
		cin >> integer_2;
		cout << "\n";

		if (integer_2 < 1 || integer_2 > 500)
		{
			cout << "Not applicable. Please select a different number for integer 2.";
			system("pause");
			return 0;
		}

		else
		{
			cout << "Please input the value of integer 3: \n";
			cin >> integer_3;
			cout << "\n";

			if (integer_3 < 1 || integer_3 > 500)
			{
				cout << "Not applicable. Please select a different number for integer 3.";
				system("pause");
				return 0;
			}
		}
	}
/*LOGIC*/
	/*Integer 1*/
	if (integer_1 > integer_2 && integer_1 > integer_3)
		large = integer_1;
	else if (integer_1 > integer_3 && integer_1 < integer_2)
		medium = integer_1;
	else if (integer_1 > integer_2 && integer_1 < integer_3)
		medium = integer_1;
	else if (integer_1 < integer_2 && integer_1 < integer_3)
		small = integer_1;

	/*Integer 2*/
	if (integer_2 > integer_3 && integer_2 > integer_1)
		large = integer_2;
	else if (integer_2 > integer_1 && integer_2 < integer_3)
		medium = integer_2;
	else if (integer_2 > integer_3 && integer_2 < integer_1)
		medium = integer_2;
	else if (integer_2 < integer_3 && integer_2 < integer_1)
		small = integer_2;

	/*Integer 3*/
	if (integer_3 > integer_2 && integer_3 > integer_1)
		large = integer_3;
	else if (integer_3 > integer_1 && integer_3 < integer_2)
		medium = integer_3;
	else if (integer_3 > integer_2 && integer_3 < integer_1)
		medium = integer_3;
	else if (integer_3 < integer_2 && integer_3 < integer_1)
		small = integer_3;

/*OUTPUT IN SMALLEST TO LARGEST:*/
	cout << "Smallest: " << small << "\n";
	cout << "Medium: " << medium << "\n";
	cout << "Largest: " << large << "\n";

	cout << "\n";
	system("pause");
	return 0;
}



