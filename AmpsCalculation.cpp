// This program prompts the user for two double variables, thevoltage (V) and resistence (R) which will then calculate and display the current amps (I) and the power dissipation in watts (P).

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
    double V, R;
    double dAmps, dPower;

    cout << "Enter the voltage: ";
    cin >> V;
    cout << "Enter the resistance: ";
    cin >> R;
    cout << endl;
    dAmps = (V) / (R);          //Calculate and display the currentin amps(I).
    dPower = pow(dAmps, 2) * R; //Displays the power dissipation in watts (P).
    cout << "Given a voltage of: " << V << " and resistance of: " << R << endl;
    cout << endl;
    cout << fixed << setprecision(2) << "The amps are: " << dAmps << endl;
    cout << endl;
    cout << fixed << setprecision(2) << "The power is: " << dPower << endl;
    cout << endl;

    system("pause");
    return 0;
}

/*
Output:
Enter the voltage: 120
Enter the resistance: 9.29
Given a voltage of: 120 and resistance of: 9.29
The amps are: 12.92
The power is: 1550.05
*/