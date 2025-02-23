/*COMMENTS
___________
ADRIAN DIAZ
CIS-5 ONLINE
February 2, 2023
PROGRAM 14D: SOCCER SCORES*/

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

const int NUM_PLAYERS = 12;

struct Player
{
    string name;
    int number;       
    int points;      
};

void getPlayerInfo(Player&);
void showInfo(Player);
int  getTotalPoints(Player[], int);
void showHighest(Player[], int);


int main()
{
    Player team[NUM_PLAYERS];
    int index;
    double total_points;
   
    // GET PLAYER INFO
    for (index = 0; index < NUM_PLAYERS; index++)
    {
        cout << "\nPLAYER #" << (index + 1) << "\n";
        cout << "---------\n";
        getPlayerInfo(team[index]);
        cin.get();
    }
    
    // DISPLAY TEAM INFO
    cout << setw(20) << left << "\nNAME";
    cout << setw(10) << "NUMBER";
    cout << setw(10) << "POINTS SCORED\n";
    cout << setw(10) << "------------------------------------------\n";
   
    for (index = 0; index < NUM_PLAYERS; index++)
    {
        showInfo(team[index]);
    }
    
    // DISPLAY TOTAL POINTS
    cout << "\nTOTAL POINTS: "; 
    total_points = getTotalPoints(team, NUM_PLAYERS);
    cout << total_points;
    cout << "\n";
       
    // DISPLAY HIGHEST SCORER
    showHighest(team, NUM_PLAYERS);

    cout << "\n";
    system("pause");
    return 0;
}

void getPlayerInfo(Player& p)
{
    // WHILE LOOPS FOR INPUT VALIDATION
    cout << "Name: ";
    cin >> p.name;
    cout << "\n";

    cout << "Number: ";
    cin >> p.number;

    while (p.number < 0 || p.number > 99)
    {
        cout <<  "Invalid input for player number. Please enter a number between 0 - 99: ";
        cin >> p.number;
    }
    cout << "\n";

    cout << "Points Scored: ";
    cin >> p.points;

    while (p.points < 0 || p.points > 100)
    {
        cout << "Invalid input for player points. Please enter a number between 0 - 100: ";
        cin >> p.points;
    }
    cout << "\n";

}

void showInfo(Player p)
{
    cout << setw(20) << left << p.name << setw(10) << p.number << setw(10) << p.points << "\n";
}

int getTotalPoints(Player p[], int NUM_PLAYERS)
{
    // FIND TOTAL POINTS
    int total = 0;
    for (int i = 0; i < NUM_PLAYERS; i++)
    {
        total = total + p[i].points;
    }

    return total;
}

void showHighest(Player p[], int size)
{
    // FIND HI INDEX
    int hiIndex = 0;
    for (int i = 0; i < NUM_PLAYERS; i++)
    {
           if (p[hiIndex].points < p[i].points)
           {
               hiIndex = i;
           }
    }
    cout << p[hiIndex].name << " is the highest scorer with " << p[hiIndex].points << " points.";
}