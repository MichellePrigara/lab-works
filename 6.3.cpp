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
    int A = 10;
    int B = 5;
    int C = 8;
    int temp1;
    
    temp1 = B;
    B = A;
    A = temp1;
    
    temp1 = B;
    B = C;
    C = temp1;
    
    cout << A << " " << B << " " << C;
    
    return 0;
}