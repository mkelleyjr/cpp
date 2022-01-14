/* Michael L. Kelley Jr.
// January 14, 2022
// metersconvert.cpp
// convert meters into feet 
*/

#include <iostream>
using namespace std;

int main()
{
    float meters;
    float foot;

cout << "Enter meters to convert:" << endl;
cin >> meters;

foot = meters * 3.28084;

cout << "Converted to feet, that is: " << foot << " feet!" << endl;

return 0; 

}