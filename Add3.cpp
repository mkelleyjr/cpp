/* Michael L. Kelley Jr.
// November 4, 2021
// Add3.cpp

// Add 3 user picked integers, showing how input can be read in succession 
// in c++
*/

#include<iostream>
using namespace std;

int main()
{

// Define variables to be used 
int a, b, c;
int ans; 

// Ask for the 3 integers and continuously read them in at once 
cout << "Enter 3 integers to be added (Seperated by a space):" << endl;
cin >> a >> b >> c; 

// Process and dislay the sum back to the user 
ans = a+b+c;
cout << "The sum of the 3 integers is: " << ans << endl;

return 0; 
}