// This program prompts the user to enter a menu choice. Then based on the user's choice use a switch statement to display the information. Users will be able to calculate the area of a circle/rectangle/triangle or be able to quit. This exercise covers validation to check if the user inputs a number outside the choices in the menu as well as checking if the user is inputing a positive number for the value.

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
#include <string>
#include <math.h> //for pow
using namespace std;

int main()
{
    const double PI = 3.14159;
    int choice;
    double radius, length, width, base, height, area;

    cout << "***Geometry Calculator***" << endl;
    cout << "1. Calculate the area of a circle" << endl;
    cout << "2. Calculate the area of a rectangle" << endl;
    cout << "3. Calculate the area of a triangle" << endl;
    cout << "4. Quit" << endl;
    cout << "Enter your choice (1-4): ";
    cin >> choice;
    cout << endl;

    switch (choice)
    {
    case 1: // area of a circle
        cout << "Enter the circle's radius: ";
        cin >> radius;

        // validation
        if (radius < 0)
            cout << "Please only enter a positive value for the radius. " << endl;
        else
        {
            area = PI * pow(radius, 2);
            cout << "The area of the circle is " << area << endl;
        }
        break;
    case 2: // area of a rectangle
        cout << "Enter the rectangle's length: ";
        cin >> length;
        cout << "Enter the rectangle's width: ";
        cin >> width;

        // validation
        if (length < 0 || width < 0)
            cout << "Please only enter a positive value for the length and width. " << endl;
        else
        {
            area = length * width;
            cout << "The area of the rectangle is " << area << endl;
        }
        break;
    case 3: // area of a triangle
        cout << "Enter the length of the base: ";
        cin >> base;
        cout << "Enter the triangle's height: ";
        cin >> height;

        // validation
        if (base < 0 || height < 0)
            cout << "Please only enter a positve value for the base and height. ";
        else
        {
            area = length * height / 2;
            cout << "The area of the triangle is " << area << endl;
        }
        break;
    case 4: // quit
        cout << "Quiting the program now!" << endl;
        break;
    default:
        cout << "You can only enter 1, 2, 3, or 4. " << endl;
        break;
    }
    cout << "Thank you for using my Geometry Calculator!" << endl;
    system("pause");
    return 0;
}

/*
Ouput 1:
***Geometry Calculator***
1. Calculate the area of a circle
2. Calculate the area of a rectangle
3. Calculate the area of a triangle
4. Quit
Enter your choice (1-4): 1

Enter the circle's radius: -2
Please only enter a positive value for the radius. 
Thank you for using my Geometry Calculator!

------------- Rerun Code -------------

***Geometry Calculator***
1. Calculate the area of a circle
2. Calculate the area of a rectangle
3. Calculate the area of a triangle
4. Quit
Enter your choice (1-4): 1

Enter the circle's radius: 10
The area of the circle is 314.159
Thank you for using my Geometry Calculator!


Ouput 2:
***Geometry Calculator***
1. Calculate the area of a circle
2. Calculate the area of a rectangle
3. Calculate the area of a triangle
4. Quit
Enter your choice (1-4): 2

Enter the rectangle's length: 20
Enter the rectangle's width: 10
The area of the rectangle is 200
Thank you for using my Geometry Calculator!

------------- Rerun Code -------------

***Geometry Calculator***
1. Calculate the area of a circle
2. Calculate the area of a rectangle
3. Calculate the area of a triangle
4. Quit
Enter your choice (1-4): 2

Enter the rectangle's length: 10
Enter the rectangle's width: -2
Please only enter a positive value for the length and width. 
Thank you for using my Geometry Calculator!


Output 3:
***Geometry Calculator***
1. Calculate the area of a circle
2. Calculate the area of a rectangle
3. Calculate the area of a triangle
4. Quit
Enter your choice (1-4): 3

Enter the length of the base: -2
Enter the triangle's height: -4
Please only enter a positve value for the base and height. 
Thank you for using my Geometry Calculator!

------------- Rerun Code -------------

***Geometry Calculator***
1. Calculate the area of a circle
2. Calculate the area of a rectangle
3. Calculate the area of a triangle
4. Quit
Enter your choice (1-4): 3

Enter the length of the base: 2
Enter the triangle's height: 4
The area of the triangle is 4.14778e-317
Thank you for using my Geometry Calculator!


Output 4:
***Geometry Calculator***
1. Calculate the area of a circle
2. Calculate the area of a rectangle
3. Calculate the area of a triangle
4. Quit
Enter your choice (1-4): 4

Quiting the program now!
Thank you for using my Geometry Calculator!


Output 5:
***Geometry Calculator***
1. Calculate the area of a circle
2. Calculate the area of a rectangle
3. Calculate the area of a triangle
4. Quit
Enter your choice (1-4): 5

You can only enter 1, 2, 3, or 4. 
Thank you for using my Geometry Calculator!

*/