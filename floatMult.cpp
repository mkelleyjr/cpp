/* Michael L. Kelley Jr.
// January 11, 2022
// floatMult.cpp
// floating point multiplier
*/

#include <iostream>
using namespace std;

int main()
{
    // Variables we need
    float a;
    float b;
    float c;

    // Get 2 floats from the user 
    cout << "Enter 1st float:" << endl;
    cin >> a;
    cout << "Enter 2nd float" << endl;
    cin >> b;

    // Perform the math and display 
    c = a * b;
    cout << "The floats multiplied is: " << c << endl;

    return 0; 
}