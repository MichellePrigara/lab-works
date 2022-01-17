/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    if (a != b)
    {
        if (a > b)
        {
            b = a;
        }
        else
        {
            a = b;
        }
    }
    else
    {
        a = 0;
        b = 0;
    }
    
    cout << a <<" " << b;

    return 0;
}