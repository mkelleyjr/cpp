/* Michael L. Kelley Jr.
// January 14, 2022
// metersconvert.cpp
// convert meters into feet 
*/

#include <iostream>
using namespace std;

int main()
{
    // Variables we need 
    float meters;
    float foot;
// Get amount of meters 
cout << "Enter meters to convert:" << endl;
cin >> meters;

// Convert it and print the answer 
foot = meters * 3.28084;
cout << "Converted to feet, that is: " << foot << " feet!" << endl;

return 0; 

}