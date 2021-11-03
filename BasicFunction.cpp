/* Michael L. Kelley Jr.
// November 2, 2021
// BasicFunction.cpp

// Basic example of a function in C++
// Use function to add 2 numbers picked by user 
*/

#include<iostream>
using namespace std;

int main()
{

int Addition(int a, int b);

int Number1;
int Number2; 
int Add; 

cout << "Enter your 1st number:" << endl;
cin >> Number1;
cout << "Enter your 2nd number:" << endl;
cin >> Number2;

Add = Addition(Number1, Number2);

cout << "Addition is: " << Add << endl; 

return 0;

}

int Addition(int a, int b)
{
    return (a+b); 
    
}