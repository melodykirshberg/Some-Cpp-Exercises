// This program reads 5 numbers from the previous file we made in the last activity with a bonus of giving us the average as well.

#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

int main()
{
    // Define a file stream object
    ifstream infile;

    double num1, num2, num3, num4, num5;
    double average;

    // Open the input file
    infile.open("randomNumbers.txt");

    // Use the file.
    infile >> num1 >> num2 >> num3 >> num4 >> num5;

    // Display the numbers
    cout << "The following numbers have been read in " << endl;
    cout << "from the data file called randomNumbers.txt:\n";
    cout << num1 << endl
         << num2 << endl
         << num3 << endl
         << num4 << endl
         << num5 << endl;

    // Calculate the average
    average = (num1 + num2 + num3 + num4 + num5) / 5.0;
    cout << fixed << setprecision(2);
    cout << "The average of the values is : " << average << endl;

    // Close the input file
    infile.close();
    cout << "Goodbye\n";
    system("pause");
    return 0;
}

/* 
Output: 
The following numbers have been read in
from the data file called randomNumbers.txt:
33
29
17
45
92
The average of the values is : 43.20
Goodbye
Press any key to continue . . .
*/