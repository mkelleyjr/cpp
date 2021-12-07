/* Michael L. Kelley Jr.
// November 25, 2021
// gamestats.cpp

// Game stats program from beginning c++ game programming book 
*/

#include<iostream>
using namespace std;

int main()
{

// Variables used 
int stageNumber; 
int bonusLives; 
double distance;
char playAgain;
bool shieldUp;

short lives;

score = 0;
distance = 1200.76;
playAgain = 'y';
shieldUp = true;
lives = 3;
aliensKilled = 10;
bonusLives = 3; 


double engineTemp = 6563.89;

// Use the variables 

cout << "\nScore: " << score << endl; 
cout << "distance: " << distance << endl;
cout << "playAgain: " << playAgain << endl;
cout << "lives: " << lives << endl;

// ushort example 
typedef unsigned int short int ushort;
ushort bonus = 10; 
cout << "\nbonus: " << bonus << endl; 

score = 3434343434;
cout << "'\nscore: " << score << endl;
++score;
cout << "score: " << score << endl;

return 0; 

}