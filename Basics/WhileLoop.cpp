// This program uses a while loop to print a message as many times as the limit is set to.

#include <iostream>
#include <string>
using namespace std;

int main()
{
    int limit = 0;
    int count = 0;
    int sum = 0;
    string evenOrOdd = "odd";

    cout << "How many times would you like to tell the people of Citadel that this is your favorite store? ";
    cin >> limit;

    count = 1;
    while (count <= limit)
    {
        // evenOrOdd = (count % 2 == 0)? "even": "odd";

        // Same as this
        if (count % 2 == 0)
            evenOrOdd = "even";
        else
            evenOrOdd = "odd";

        cout << count << " My name is commander shepard and this is my favorite store on the Citadel! " << evenOrOdd << endl;
        sum += count;
        count++;
    }
    cout << "You told the people of Citadel " << limit << " times." << endl;
    cout << "The sum of the numbers from 1 to " << limit << " is " << sum << endl;
    system("pause");
    return 0;
}

/*
Output:
How many times would you like to tell the people of Citadel that this is your favorite store? 5
1 My name is commander shepard and this is my favorite store on the Citadel! odd
2 My name is commander shepard and this is my favorite store on the Citadel! even
3 My name is commander shepard and this is my favorite store on the Citadel! odd
4 My name is commander shepard and this is my favorite store on the Citadel! even
5 My name is commander shepard and this is my favorite store on the Citadel! odd
You told the people of Citadel 5 times.
The sum of the numbers from 1 to 5 is 15
*/