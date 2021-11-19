/* Michael L. Kelley Jr.
// November 19, 2021
// swapint.cpp

// get 2 integers and swap their values using STL swap() 
*/

#include<iostream>
using namespace std;

int main()
{

    int a;
    int b;

    cout << "Enter 1st integer:" << endl;
    cin >> a;
    cout << "Enter 2nd integer:" << endl;
    cin >> b;

    cout << "1st is " << a << endl;
    cout << "2nd is " << b << endl;
    
    // use standard fucnctioin swap to switch them 
    swap(a, b)
    cout << "1st is now " << a << endl;
    cout << "2nd is now " << b << endl;

    return 0; 
}