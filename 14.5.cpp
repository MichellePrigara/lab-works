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
    int A, B;
    cin >> A >> B;
    while (A != 0 && B != 0)
    {
        if(A > B){
            A %= B;
        }
        else{
            B %= A;
        }
    }
    cout << A + B;
    return 0;
}