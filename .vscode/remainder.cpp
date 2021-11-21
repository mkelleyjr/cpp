/* Michael L. Kelley Jr.
// November 15, 2021
// remainder.cpp

// get 2 user numbers and return the remainder 
// https://edabit.com/challenge/bTrM8t39vjrAtYytA
*/

#include<iostream>
using namespace std;

int main()
{
    int num1;
    int num2;
    int remainder;

    cout << "Enter 1st number:" << endl;
    cin >> num1;
    cout << "Enter 2nd number:" << endl;
    cin >> num2;

    remainder = num1 % num2;
    cout << "The remainder of the 1st number % 2nd number is: " << remainder << endl;

    return 0; 
}