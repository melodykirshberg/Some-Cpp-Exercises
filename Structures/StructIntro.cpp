// This activity shows us how to use a struct declaration and the basic example of how these are used.

#include <iostream>
#include <string>
using namespace std;

struct BeingInfo
{
    string name;
    string race;
    int age;

    BeingInfo()
    {
        name = "unknown";
        race = "unknown";
        age = 0;
    }
};

void main()
{
    int humanAge = 0;

    BeingInfo anAlien;
    anAlien.name = "Javik";
    anAlien.age = 50000;
    anAlien.race = "Prothean";
    humanAge = anAlien.age / 1999;

    cout << anAlien.name << " is a " << anAlien.race << " who is " << anAlien.age << " years old which is " << humanAge << " in human years. " << endl;

    BeingInfo anElf;
    anElf.name = "Nerevarine";
    anElf.age = 25;
    anElf.race = "Dunmer";

    cout << anElf.name << " is a " << anElf.race << " who is " << anElf.age << " years old. " << endl;

    if (anAlien.age == anElf.age)
        cout << "They are both the same age." << endl;
    else if (humanAge == anElf.age)
        cout << "They are the same age in human years!" << endl;
    else
        cout << "They do not have the same age" << endl;
    system("pause");
}

/*
Output:
Javik is a Prothean who is 50000 years old which is 25 in human years.
Nerevarine is a Dunmer who is 25 years old.
They are the same age in human years!
Press any key to continue . . .
*/