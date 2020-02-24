// This program takes the previous two file activities and combines them into one where we will also include a while loop to check if the file was correctly opened or not

#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
using namespace std;

int main()
{
    // Define a file stream object
    ifstream infile;
    ofstream outfile;
    double num = 0; //value read in from the file
    double num1 = 0;
    double num2 = 0;
    double num3 = 0;
    double num4 = 0;
    double num5 = 0;
    double sum = 0;
    double average = 0; //average of all values read from the file
    int i = 0;          //used to count how many values read from the file
    string lName = "  ";
    string fName = "  ";

    cout << "SSV Normandy Crew Test" << endl;
    cout << "-----------------------------------" << endl;

    // Open the file
    infile.open("scores.txt");
    outfile.open("specialReport.txt");

    // Use the file.
    if (infile) //successfully opened file
    {
        i = 0;
        sum = 0;
        while (infile >> fName >> lName >> num1 >> num2 >> num3 >> num4 >> num5)
        {
            average = (num1 + num2 + num3 + num4 + num5) / 5.0;
            cout << setprecision(4) << fName << " " << lName << " has an average of " << average << endl;
            outfile << setprecision(4) << fName << " " << lName << " has an average of " << average << endl;
            sum += num;
            i++;
        }
        outfile << "  " << endl;
        cout << "  " << endl;
        outfile << "There were " << i << " squad members in the file." << endl;
        cout << "There were " << i << " squad members in the file." << endl;
        cout << " " << endl;
        cout << " Garrus Vakarian: "
             << "A turian who was responsible for the investigation in Saren Arterius and eventually joins Commander Shepard's team to help defeat Saren and the geth." << endl;
        cout << " Tali Zorah: "
             << "A quarian who Commander Shepard meets when on her pilgrimage and eventually becomes the mechanical genius on Shepards crew." << endl;
        cout << " Liara T'Soni: "
             << "A asari researcher who has studied Prothean technology and culture giving her great insight as well as a user of biotics on Shepard's team." << endl;
        cout << " Mordin Solus: "
             << "A salarian geneticist/professor/operative who participated in the genophage. He is recruited by Shepard to assist in missions against the Collectors." << endl;
        cout << " Thane Krios: "
             << "A drell assassin and biotic user, considered one of the best assassins in the galaxy, who joins Shepard's suicide mission against the Collectors due to his Kepral's Syndrome." << endl;
        cout << "  " << endl;
        cout << "All files are closed and your report is written. Goodbye!" << endl;
    }
    else //problem opening the file
    {
        cout << "Error opening file." << endl;
    }
    // Step 5. Close the file.
    infile.close();
    outfile.close();

    system("pause");
    return 0;
}

/*
Ouput:
SSV Normandy Crew Test
-----------------------------------
Garrus Vakarian has an average of 94.78
Tali Zorah has an average of 88.4
Liara T'Soni has an average of 99.4
Mordin Solus has an average of 99.98
Thane Krios has an average of 92.8

There were 5 squad members in the file.

 Garrus Vakarian: A turian who was responsible for the investigation in Saren Arterius and eventually joins Commander Shepard's team to help defeat Saren and the geth.
 Tali Zorah: A quarian who Commander Shepard meets when on her pilgrimage and eventually becomes the mechanical genius on Shepards crew.
 Liara T'Soni: A asari researcher who has studied Prothean technology and culture giving her great insight as well as a user of biotics on Shepard's team.
 Mordin Solus: A salarian geneticist/professor/operative who participated in the genophage. He is recruited by Shepard to assist in missions against the Collectors.
 Thane Krios: A drell assassin and biotic user, considered one of the best assassins in the galaxy, who joins Shepard's suicide mission against the Collectors due to his Kepral's Syndrome.

All files are closed and your report is written. Goodbye!
Press any key to continue . . .
*/