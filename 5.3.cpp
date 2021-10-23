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
    int A, B, C, AC, BC, P;
    std::cin >> A >> C >> B;
    AC = abs(C - A);
    BC = abs(B - C);
    P = AC + BC;
    std::cout << AC << ' ' << BC << ' ' << P;

    return 0;
}
