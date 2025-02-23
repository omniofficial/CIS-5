/*COMMENTS
___________
ADRIAN DIAZ
CIS-5 ONLINE
JANUARY 20, 2023
PROGRAM 7B: THIS PROGRAM GENERATES A MULTIPLICATION TABLE USING MULTIPLICATION AND FOR LOOPS. ANSWERS ARE GENERATED USING NESTED FOR LOOPS. */

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{

    cout << setw(11) << "1\t" << " 2\t" << " 3\t" << " 4\t" << " 5\t" << " 6\t" << " 7\t" << " 8\t" << " 9\t" << "10\t\n";
    cout << "-----------------------------------------------------------------------------------\n";
    for (int row = 1; row < 11; row++)
    {
        cout << setw(2) << row << " |\t";

        for (int column = 1; column < 11; column++)
        {
            cout << setw(2) << column * row << "\t";
        }
        cout << endl;
    }
    system("pause");
    return 0;
}