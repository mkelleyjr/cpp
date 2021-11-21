/* Michael L. Kelley Jr.
// November 16, 2021
// arenumsequal.cpp

// get two numbers, compare them to see if equal 
*/

#include<iostream>
using namespace std;

int main()
{
    int num1;
    int num2;

    cout << "Enter the 1st number:" << endl;
    cin >> num1;

    cout << "Enter the 2nd number:" << endl;
    cin >> num2;

    if(num1 == num2)
    {
        cout << "Yes! Those numbers are equal" << endl;
    }
        else
        {
        cout << "Nope! Those numbers are not equal" << endl;
    }

}