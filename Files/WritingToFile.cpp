// This program writes 5 floating-point numbers to a file. You cpp file should be in the Resource folder of your project. Once built and debugged open the file of your project in your file explorer and navigate to the newly created txt document with the numbers that were entered.

#include <iostream>
#include <fstream> // Necessary header file to use files
using namespace std;

int main()
{
    // Define a file stream object
    ofstream outfile;

    double num1, num2, num3, num4, num5;

    // Open the output file
    outfile.open("randomNumbers.txt");

    // Use the file
    cout << "Enter five numbers, separated by blanks\n";
    cin >> num1 >> num2 >> num3 >> num4 >> num5;

    // Write the 5 scores to the file
    outfile << num1 << endl
            << num2 << endl
            << num3 << endl
            << num4 << endl
            << num5 << endl;

    // Write a message back notifying the user that the file has been created
    cout << "Your numbers have been written to the randomNumbers.txt file.\n";

    // Close the output file
    outfile.close();
    cout << "Goodbye\n";
    system("pause");
    return 0;
}

/* 
Output: 
Enter five numbers, separated by blanks
33 29 17 45 62
Your numbers have been written to the randomNumbers.txt file.
Goodbye
Press any key to continue . . .
*/