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
    int a, b, c, s;
    cin >> a >> b >> c;
    if (a < b && a < c)
    {
       s = b + c; 
    }
    if (b < a && b < c)
    {
        s = a + c;
    }
    if (c < a && c < b)
    {
        s = a + b;
    }
    cout << s;
    return 0;
}