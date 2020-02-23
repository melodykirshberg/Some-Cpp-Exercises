// This program calculates how many miles per gallon a vehicle gets by using rand() and stores the first and last name of the driver.

#include <iostream> // used for cout
#include <string>   // used for string datatype
#include <cstdlib>  // used for rand
#include <ctime>    // used for time function
#include <iomanip>  // used for formatting
using namespace std;

int main()
{
    // Define variables:
    double gallons; // Gas tank capacity in gallons
    double miles;   // Miles driven on one tank
    double mpg;     // Milespergallon
    string lname;
    string fname;
    unsigned seed;

    // Prompt the user for the driver's name
    cout << "Enter the driver's first name: ";
    getline(cin, fname);
    cout << "Enter the driver's last name: ";
    getline(cin, lname);

    // Prompt user for gas tank capacity
    cout << "Enter gas tank capacity in gallons: ";
    cin >> gallons;

    // Randomly generate the miles driven. Must be a number between 100 - 200;
    miles = rand() % 101 + 100;

    // Calculate mpg
    mpg = miles / gallons;

    // Displays result with only 2 decimal places
    cout << fixed << setprecision(2);
    cout << endl
         << fname << " " << lname << " drove " << miles << " miles on " << gallons << " gallons of gas.\n";

    cout << "The car got " << mpg << " miles per gallon.\n\n";

    system("pause");
    return 0;
}

/*
Output:
Enter the driver's first name: Belisarius
Enter the driver's last name: Arius
Enter gas tank capacity in gallons: 30

Belisarius Arius drove 132.00 miles on 30.00 gallons of gas.
The car got 4.40 miles per gallon.
*/