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
    int a, b, c, tmp;
    std::cin >> a >> b >> c;
    tmp = b;
    b = a;
    a = tmp;
    tmp = c;
    c = a;
    a = tmp;
    std::cout << a << " " << b << " " << c;
    
    return 0;
}
