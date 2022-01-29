/* Michael L. Kelley Jr.
// January 16, 2022
// addwith2.cpp
// w3resource #12
*/

#include <iostream>
using namespace std;

int main()
{
    // Variables we need
    int a; 
    int b;
    int c;

    // Get 1st number 
    cout << "Enter 1st number:" << endl;
    cin >> a;

    // Get 2nd number 
    cout << "Enter 2nd number:" << endl;
    cin >> b;

    // Display the user's numbers 
    cout << "Input 1st number: " << a << endl;
    cout << "Input 2nd number: " << b << endl;

    // Calculate the sum 
    c = a + b; 
    cout << "The sum of the numbers is: " << c << endl;

    return 0;
}