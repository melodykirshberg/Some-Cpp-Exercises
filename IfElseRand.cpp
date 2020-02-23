// This program determines ticket price based on age by using a if...else if statement

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    int age = 0;
    double price = 0.0;
    int seed = time(0);

    cout << "Movie Ticket Calculator\n";

    // Prompt for their age
    cout << "What is your age? ";
    cin >> age;

    // Prompt for price of ticket
    cout << "Enter the ticket price: ";
    cin >> price;
    cout << endl;

    // Calculat the ticket prices
    if (age <= 5)
    {
        price = 0.0;
        cout << "You get in for free kiddo!";
    }
    else if (age <= 18)
    {
        price *= 0.5;
        cout << "You pay half price.";
    }
    else
    {
        cout << "You pay full price.";
    }
    cout << fixed << setprecision(2);
    cout << "\nYour ticket price is " << price << endl;
    system("pause");
    return 0;
}

/*
Output:
Movie Ticket Calculator
What is your age? 4
Enter the ticket price: 9

You get in for free kiddo!
Your ticket price is 0.00
**************************
Output:
Movie Ticket Calculator
What is your age? 18
Enter the ticket price: 7

You pay half price.
Your ticket price is 3.50
***************************
Output:
Movie Ticket Calculator
What is your age? 24
Enter the ticket price: 13.65

You pay full price.
Your ticket price is 13.65
*/