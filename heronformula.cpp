/* Michael L. Kelley Jr. 
// January 18, 2022
// heronformula.cpp
// w3resource problem #18
*/

#include <iostream>
#include <math.h> 
using namespace std;

int main()
{
    // Variables used 
    float a; 
    float b;
    float c;
    float area;
    float s; 

    // Get the 3 lenghts of triangle from user 
    cout << "Enter the length of 1st side of triangle:" << endl;
    cin >> a;
    cout << "Enter the length of 2nd side of the triangle:" << endl;
    cin >> b;
    cout << "Enter the length of 3rd side of hte triangle:" << endl;
    cin >> c;

    // Calculate the area using formulas 
    s = (a + b + c)/2;
    area = sqrt(s*(s-a)*(s-b)*(s-c));

    // Display to the user the area 
    cout << "The area of the triangle is : " << area << endl;
    cout << endl;
    return 0; 

}