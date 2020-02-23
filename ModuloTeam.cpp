// This program calculates the number of people a team will create with the number of leftover players. This is to show how a modulo works as well as data validation.

#include <iostream>
using namespace std;

int main()
{
    // Declare the variables for the number of available players, desired for each team, number of teams, and number of players left over.
    int players, teamP, numTeams, leftOver;

    // Prompt user for number of players per team
    cout << "How many players do you want on your team? \n";
    cout << "Enter a value between 9 - 19: ";
    cin >> teamP;

    // Validate
    while (teamP < 9 || teamP > 19)
    {
        cout << "Players must be between 9 - 19.\n"
             << "Please re-enter the amount of players you want on your team: ";
        cin >> teamP;
    }

    // Get number of players available
    cout << "How many players are available? ";
    cin >> players;

    // Validate
    while (players <= 0)
    {
        cout << "Please re-enter the amount of players available: ";
        cin >> players;
    }

    // Calculate number of teams
    numTeams = players / teamP;

    // Calculate leftover players
    leftOver = players % teamP;

    // Display
    cout << "\nThere will be " << numTeams << " teams with " << leftOver << " players left over.\n";

    system("pause");
    return 0;
}

/*
Output:
How many players do you want on your team? 
Enter a value between 9 - 19: 8
Players must be between 9 - 19.
Please re-enter the amount of players you want on your team: 20
Players must be between 9 - 19.
Please re-enter the amount of players you want on your team: 10
How many players are available? 15

There will be 1 teams with 5 players left over. 
*/