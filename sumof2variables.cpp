/* Michael L. Kelley Jr.
// January 9, 2022
// sumof2variables.cpp
// print sum of 2 nums w variables
// w3resource #4 
*/

#include <iostream>
using namespace std;

int main()
{

    // Variables used in program 
    int a;
    int b;
    int c;

    // Get the 2 numbers to add 
    cout << "Enter 1st number:" << endl;
    cin >> a;

    cout << "Enter 2nd number:" << endl;
    cin >> b;

    // Calculate the total and print sum 
    // display the variables that were picked 
    c=a+b;
    cout << "The sum of " << a << " and " << b << " is: " << c << endl;

    return 0; 
}