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
    int x;
    cin >> x;
    
    if (x % 2 == 0)
    {
        cout << "четное ";
    }
    else
    {
        cout << "нечетное ";
    }
    if (x / 10 == 0)
    {
        cout << "однозначное ";
    }
    else if (x / 10 < 10)
    {
        cout << "двузначное ";
    }
    else
    {
        cout << "трехзначное ";
    }
    cout << "число";
    return 0;
}