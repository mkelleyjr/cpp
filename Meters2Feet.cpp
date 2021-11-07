/* Michael L. Kelley Jr.
// November 6, 2021
// Meters2Feet.cpp

// Convert user input of meters into feet
*/

#include<iostream>
using namespace std;

int main()
{
    double meters; 
    double feet; 

    cout << "Enter your number in meters:" << endl;
    cin >> meters;

    feet = meters * 3.28084;

    cout << "Converted to feet, that is: " << feet << endl;

    return 0;

}