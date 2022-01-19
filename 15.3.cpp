
#include <iostream>

using namespace std;

float RingS(float R1,float R2)
{
    float S = R1*R1*3.14 - R2*R2*3.14;
    return S;
}

int main()
{
    for (int i = 0; i < 3; i++)
    {
        float A1, A2;
        cin >> A1 >> A2;
        cout << RingS(A1, A2) << endl;
    }
    
    
    return 0;
}