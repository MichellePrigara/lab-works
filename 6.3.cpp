
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