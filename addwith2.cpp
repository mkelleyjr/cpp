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

    cout << "Enter 1st number:" << endl;
    cin >> a;

    cout << "Enter 2nd number:" << endl;
    cin >> b;

    cout << "Input 1st number: " << a << endl;
    cout << "Input 2nd number: " << b << endl;

    c = a + b; 
    cout << "The sum of the numbers is: " << c << endl;

    return 0;
}