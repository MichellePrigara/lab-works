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
    float x1, y1, x2, y2, x3, y3, p, P, S, a, b, c;
    std::cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
    a = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
    b = sqrt(pow(x2 - x3, 2) + pow(y2 - y3, 2));
    c = sqrt(pow(x3 - x1, 2) + pow(y3 - y1, 2));
    P = a + b + c;
    p = P / 2;
    S = sqrt(p*(p-a)*(p-b)*(p-c));
    std::cout << P << ' ' << S;

    return 0;
}
