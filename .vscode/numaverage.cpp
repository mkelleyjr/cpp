/* Michael L. Kelley Jr.
// November 22, 2021
// numaverage.cpp

// get 4 numbers and return the total and average of them 
*/

#include<iostream>
using namespace std;

int main()
{
    // Variables we need 
    int a;
    int b;
    int c;
    int d; 
    int total; 
    float average; 

    // get 4 numbers to average from user 
    cout << "Enter 1st number:" << endl;
    cin >> a;
    cout << "Enter 2nd number:" << endl;
    cin >> b;
    cout << "Enter 3rd number:" << endl;
    cin >> c;
    cout << "Enter 4th number:" << endl;
    cin >> d;
    
    // get the total 
    total = a+b+c+d;
    cout << "The total of the numbers is: " << total << endl;

    // get the average and return the result 
    average = total / 4; 
    cout << "The average of those numbers is: " << average << endl;

    return 0; 

}