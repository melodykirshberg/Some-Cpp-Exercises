// This program generates two random integer numbers between 10 and 49 that are displayed as an addition problem. The program waits for the user's input and displays a message is it is correct. If the input is incorrect it notifies the user as well as displaying the correct answer.

#include <iostream> //needed for cout and cin
#include <iomanip>  //needed for formatting
#include <cstdlib>
using namespace std;

int main()
{
    int a, b, answer, guess;
    int max = 49;
    int min = 10;

    cout << "Math Flash Card" << endl;
    cout << "---------------" << endl;
    cout << "\n";
    {
        srand(time(NULL));
        a = rand() % (max - min + 1) + min;
        b = rand() % (max - min + 1) + min;

        cout << setw(6) << a << endl;
        cout << "+" << endl;
        cout << setw(6) << b << endl;
        cout << setw(6) << "----" << endl;
        cout << "    ";
        cin >> guess;

        answer = a + b;

        while (answer != guess)
        {
            cout << "Sorry, the correct answer is " << answer << endl;
            break;
        }
        if (answer == guess)
            cout << "Congrats! That is correct!" << endl;
    }
    system("pause");
    return 0;
}

/*
Output 1:
Math Flash Card
---------------

    12
+
    26
  ----
    38
Congrats! That is correct!

Output 2:
Math Flash Card
---------------

    28
+
    27
  ----
    56
Sorry, the correct answer is 55
*/