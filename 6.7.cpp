#include <cmath>
#include <iostream>
using namespace std;

int main()
{
    int A, A1, A2;
    cin >> A;
    A1 = A*A*A;
    A = A*A;
    A2 = A1*A;
    A = A2*A2*A2;
    
    cout << A;

    return 0;
}