/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int a1, a2, b1, b2, c1, c2, ab, ac;
    cin >> a1 >> a2 >> b1 >> b2 >> c1 >> c2;
    ab = sqrt(pow(b1 - a1, 2) + pow(b2 - a1, 2));
    ac = sqrt(pow(c1 - a1, 2) + pow(c2 - a1, 2));
    if (ac < ab)
    {
        cout << "C" << ac;
    }
    else
    {
        cout << "B" << " " << ab;
    }
    return 0;
}