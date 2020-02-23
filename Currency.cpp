// This program will convert U.S. dollar amounts to Japanese yen and to Euros.

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    float dollar;
    cout << "Enter amount in dollars($): ";
    cin >> dollar;
    cout << endl;

    cout << fixed << setprecision(2) << "$" << dollar << " = " << dollar * 111.36 << " Yen" << endl;
    cout << fixed << setprecision(2) << "$" << dollar << " = " << dollar * 0.92 << " Euros" << endl;

    system("pause");
    return 0;
}

/*
Output:
Enter amount in dollars($): 167.92

$167.92 = 18699.57 Yen
$167.92 = 154.49 Euros
*/