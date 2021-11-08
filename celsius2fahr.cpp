/* Michael L. Kelley Jr.
// November 8, 20201
// celsius2fahr.cpp

// convert user input tempature in celsius over to fahrenheit
*/

#include<iostream>
using namespace std;

int main()
{
    double CelTemp;
    double FahrenheitTemp; 

    cout << "Enter the temperature in celsius:" << endl;
    cin >> CelTemp;

    FahrenheitTemp = (CelTemp * 9/5) + 32; 

    cout << "That temperature converted to fahrenheit is: " << FahrenheitTemp << endl;

    return 0;

}
