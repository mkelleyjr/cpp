/* Michael L. Kelley Jr.
// January 3, 2022
// DateAdd.cpp

// Add 2 dates together and show result
*/

#include <iostream>
using namespace std;

int main()
{
    // define the variables we need 
    int date1;
    int date2;
    int date3;

    // get 2 dates from the user 
    cout << "Enter 1st date:" << endl;
    cin >> date1;

    cout << "Enter 2nd date:" << endl;
    cin >> date2;

    // add them and display 
    date3 = date1+date2;

    cout << "The date would be: " << date3 << endl;

    return 0; 
}