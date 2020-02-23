// Computes the raise and new salary for an employee. The input to the program includes the current annual salary for the employee and a number indicating the performance rating (1=excellent, 2=good, and 3=poor). An employee with a rating of 1 will receive a 6% raise, an employee with a rating of 2 will receive a 4% raise, and one with a rating of 3 will receive a 1.5% raise. All other ratings are invalid and the raise will be set to 0 and a message of whether you are promoted will be displayed.

#include <iostream> //needed for cout and cin
#include <iomanip>  //needed for formatting
#include <cstdlib>  // needed for rand
#include <ctime>    // needed for time
#include <string>
using namespace std;
int main()
{
    double currentSalary = 0.0; // current annual salary
    int rating = 0;             // performance rating
    double raise = 0.0;         // dollar amount of the raise
    string message;
    bool isPromotable = false; //anything other than 0 is true

    // Get the current salary and performance rating
    cout << "Enter the current annual salary: ";
    cin >> currentSalary;
    cout << "Enter the performance rating: \n";
    cout << "1=excellent, 2=good, and 3=poor.  \nRating is : ";
    cin >> rating;

    // Compute the raise -- Use if ... else ...
    /*if (rating == 1)
    {
        raise = currentSalary * 0.06;
        }
        else if (rating == 2)
        {
            raise = currentSalary * 0.04;
            }
            else if (rating == 3)
            {
                raise = currentSalary * 0.015;
                }
                else  //default block
                {
                    cout << "Invalid rating. No raise calculated" << endl;
                    raise = 0.0;
                    }*/
    // now write as switch statement.
    switch (rating)
    {
    case 1:
        raise = currentSalary * 0.06;
        isPromotable = true;
        break;
    case 2:
        raise = currentSalary * 0.04;
        isPromotable = true;
        break;
    case 3:
        raise = currentSalary * 0.015;
        break;
    default:
        cout << "Invalid rating. No raise calculated" << endl;
        raise = 0.0;
        break;
    }
    if (isPromotable)
    {
        message = "You are getting promoted!";
    }
    else
    {
        {
            message = "You aren't getting promoted.";
        }
    }

    // Print the results
    cout << fixed << showpoint << setprecision(2);
    cout << "Amount of your current salary:\t$" << setw(9) << currentSalary << endl;
    cout << "Amount of your raise: \t\t$" << setw(9) << raise << endl;
    cout << "Your new expected salary: \t$" << setw(9) << (currentSalary + raise) << endl;
    cout << message << endl;
    system("pause");
    return 0;
}

/*
Output:
Enter the current annual salary: 87391
Enter the performance rating: 
1=excellent, 2=good, and 3=poor.  
Rating is : 2
Amount of your current salary:	$ 87391.00
Amount of your raise: 		$  3495.64
Your new expected salary: 	$ 90886.64
You are getting promoted!
 */