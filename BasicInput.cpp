/* Michael L. Kelley Jr.
// November 3, 2021
// BasicInput.cpp
// Basic user input
*/

#include<iostream>
using namespace std;

int main()
{
    // Variables to hold a string and an integer 
    string UserName; 
    int UserNumber;

    // Ask the user for their name and process it 
    cout << "Enter your name:" << endl;
    cin >> UserName;
    cout << "Hello, there " << UserName << endl;

    // Ask the user for a number and process it 
    cout << "Enter a number:" << endl;
    cin >> UserNumber;
    cout << "Oh, you picked: " << UserNumber << endl;

    return 0;
}