/* Michael L. Kelley Jr.
// January 5, 2022
// simpleIO.cpp
// simple IO example in c++
*/

#include <iostream>
using namespace std;

int main()
{
    // Variables used 
    int number;
    char string[10];

    // Get a user number 
    cout << "Enter a number:" << endl;
    cin >> number;

    // Get a user string (allow up to 10 chars)
    cout << "Enter a string" << endl;
    cin >> string;

    // Output what they picked 
    cout << "Your number was " << number << " Your string was " << string << endl;

    return 0; 
}