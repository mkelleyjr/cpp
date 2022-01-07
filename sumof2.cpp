/* Michael L. Kelley Jr.
// January 7, 2022
// sumof2.cpp
// print sum of 2 nums 
*/

#include <iostream>
using namespace std;

int main()
{

    // Variables used 
    int a;
    int b;
    int c;

    // Get the 2 numbers to add 
    cout << "Enter 1st number:" << endl;
    cin >> a;

    cout << "Enter 2nd number:" << endl;
    cin >> b;

    // Calculate the total and print 
    c=a+b;
    cout << "The sum of those numbers is: " << c << endl;

    return 0; 
}