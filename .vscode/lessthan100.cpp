/* Michael L. Kelley Jr.
// November 17, 2021
// lessthan100.cpp

// function to get 2 numbers and test if over/under 100 
*/

#include<iostream>
using namespace std;

void
lessThan100 ()
{
  int a;
  int b;

  cout << "Enter int a" << endl;
  cin >> a;
  cout << "Enter int b" << endl;
  cin >> b;

  int c = a + b;

  if (c <= 99)
    {
      cout << "Number is less than 100!" << endl;

    }

  else if (c >= 100)
    {
      cout << "Number is over 100!" << endl;

    }

}

int
main ()
{
  lessThan100 ();

  return 0;
}
