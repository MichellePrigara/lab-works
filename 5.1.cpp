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
    int x1, x2, y1, y2, l;
    std::cin >> x1 >> y1 >> x2 >> y2;
    l = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
    std::cout << l;

    return 0;
}
