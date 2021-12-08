/* password generator .cpp
/  this program can generate a password of
/  any specified length using the valid
/  characters for most of the websites
*/

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

static const char alphanumber[] =
"0123456789"
"!@#$%^*"
"ABCDEFGHIJKLMNOPQRSTUVWXYZ"
"abcdefghijklmnopqrstuvwxyz";

int size = sizeof(alphanumber) - 1;

int main()
{
    // password length
    int length = 10;

    srand(time(0));
    cout << "your password is : " << endl;
    for(int i = 0; i<length; i++)
    {
        cout << alphanumber[rand() % ::size]; // scope resolution operator :: makes it possible to access global variable size
    }

    return 0;
}
