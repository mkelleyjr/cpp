// Michael L. Kelley Jr.
// November 1, 2021
// Under100.cpp

// Get user input and test if under 100
// Use if-else to display results back 

#include <iostream>
using namespace std;

int main()
{
    int UserInput; 

    // User input 
    cout << "Please enter a number:" << endl;
    cin >> UserInput;

    // Examine the input and display results back to user 
    if(UserInput >=100)
        cout << "Your number is 100 or over!" << endl;
        else
        cout << "Your number is under 100!" << endl;

        return 0;
}