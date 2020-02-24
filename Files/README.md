# Using Files

## Table of Contents
* [WritingToFile](#writingtofile)
* [ReadingToFile](#readingtofile)
* [WriteAndRead](#writeandread)

### [WritingToFile](./WritingToFile.cpp)  
This program writes 5 floating-point numbers to a file. You cpp file should be in the Resource folder of your project. Once built and debugged open the file of your project in your file explorer and navigate to the newly created txt document with the numbers that were entered.  
Output:  
```
Enter five numbers, separated by blanks
33 29 17 45 62
Your numbers have been written to the randomNumbers.txt file.
Goodbye
Press any key to continue . . .
```
### [ReadingToFile](./ReadingToFile.cpp)  
This program reads 5 numbers from the previous file we made in the last activity with a bonus of giving us the average as well.  
Output:  
```
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
```
### [WriteAndRead](./WriteAndRead.cpp)
This program takes the previous two file activities and combines them into one where we will also include a while loop to check if the file was correctly opened or not. We should start out with a premade file called "scores.txt" which stores:  
```
Garrus Vakarian 98 89 92 95 99.9
Tali Zorah 87 89 96 88 82
Liara T'Soni 100 100 99.98 99 98
Mordin Solus 100 100 100 100 99.9
Thane Krios 98 89 97 87 93
``` 
Then when the code runs it should create a new file called "specialReport.txt" that displays the names of the crew and their average scores.  

Output:  
```
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

```