/* Michael L. Kelley Jr.
// November 9, 2021
// stringtoupper.cpp

// convert a lowercase string to uppercase
*/

// note this version uses boost library 

#include<iostream>
#include <boost/algorithm/string.hpp>
using namespace std;


int main()
{
    string userstring; 

    cout <<"Enter a lowercase string to examine:" << endl;
    cin >> userstring;

    // use boost to convert to uppercase 
    boost::to_upper(string);
    cout << userstring << endl;

    return 0; 
}