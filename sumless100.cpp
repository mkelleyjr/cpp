/* Michael L. Kelley Jr.
// January 12, 2022
// sumless100.cpp
// is the sum os 2 numbers < 100
*/

#include <iostream>
using namespace std;

int main()
{
    // Variables needed
    int a;
    int b;
    int c;

    // Get 2 ints from user
     cout << "Please enter 1st number:" << endl;
     cin >> a;
     cout << "Please enter 2nd number:" << endl;
     cin >> b; 
    
    // Math to get sum of the ints
    c = a + b; 

    // If-else loop to test sum against 100 
    if (c < 100)
    {
        cout << "Sum is less than 100!" << endl;
    }
        else if (c >= 100)
        {
        cout << "Sum is 100 or greater!" << endl; 
        }

    return 0; 
}