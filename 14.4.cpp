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
    float P, N = 1000;
    int K = 0;
    cin >> P;
    while (N <= 1100)
    {
        N = N * (1 + (P / 100));
        K += 1;
    }
    cout << K << " " << N;

    return 0;
}