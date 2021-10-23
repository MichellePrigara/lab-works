/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/

#include <iostream>
#include <math.h>

int main()
{
    int x1, y1, x2, y2, P, S, a, b;
    std::cin >> x1 >> y1 >> x2 >> y2;
    a = abs(x1 - x2);
    b = abs(y1 - y2);
    P = (a + b)*2;
    S = a*b;
    std::cout << P << ' ' << S;

    return 0;
}
