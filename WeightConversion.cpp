// This program prompts the user for a weight in pounds and converts the weight to kilograms.

#include <iostream>
using namespace std;

int main()
{
    double pounds = 0; // Weight in pounds will be provided by the user
    const double CONVERSION = 2.21;
    double kilograms = 0; // Weight in kilograms

    cout << "Enter the weight in pounds: ";
    cin >> pounds;

    kilograms = pounds / CONVERSION; // Will convert to kilograms

    cout << pounds << " pounds "
         << "is " << kilograms << " in kilograms. ";

    system("pause");
    return 0;
};

/*
Output Generated:
Enter the weight in pounds: 140
140 pounds is 63.3484 in kilograms.
*/