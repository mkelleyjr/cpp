/* Michael L. Kelley Jr.
// December 14, 2021
// scorerater.cpp

// from beginning c++ game dev book
*/

#include <iostream>
using namespace std;

int main()
{
    if (true)
    cout << "This is always displayed.\n\n" << endl;

    if (false)
    cout << "This is never displayed.\n\n" << endl;
    
    int score = 1000;

    if (score)
        cout << "Okay, at least you didn't score zero.\n\n" << endl;

        if (score > 500)
            cout << "You scored over 500. Nice.\n\n" << endl;

            if (score == 1000)
            {
                cout << "You scored a perfectd 1000!\n" << endl;
                cout << "Now that's impressive.\n" << endl;
            }

            if (score > 500)
            {
                cout << "You scored at least 500.\n" << endl;
                if (score >= 1000)
                    cout << "You scored 1000 or more!\n" << endl;

            }
            
            return 0;
}

}