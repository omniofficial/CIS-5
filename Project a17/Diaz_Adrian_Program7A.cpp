/*COMMENTS
___________
ADRIAN DIAZ
CIS-5 ONLINE
JANUARY 20, 2023
PROGRAM 7A: THIS PROGRAM UTILIZES NESTED FOR LOOPS AND IS FOLLOWED ALONG VIA VIDEO. */

#include <iostream>
using namespace std;

int main()
{
	const int MAX = 10;

/*INNER LOOP*/	for (int i = 1; i <= MAX; i++)
	{
/*OUTER LOOP*/		for (int j = 1; j <= MAX - i + 1; j++)
		{
			cout << "*";
		}
		cout << endl;
	}

	return 0;
}