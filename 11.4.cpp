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
    int x, y;
    cin >> x >> y;
    if (x > 0 && y > 0)
    {
        cout << "1 четверть";
    }
    else if (x < 0 && y > 0)
    {
        cout << "2 четверть";
    }
    else if (x < 0 && y < 0)
    {
        cout << "3 четверть";
    }
    else if (x > 0 && y < 0)
    {
        cout << "4 четверть";
    }
    return 0;
}