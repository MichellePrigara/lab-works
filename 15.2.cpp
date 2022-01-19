
#include <iostream>

using namespace std;

int Sign(float X)
{
    if (X == 0)
        X = 0;
    else if (X < 0)
        X = -1;
    else if (X > 0)
        X = 1;
    return X;
}

int main()
{
    float A, B;
    cin >> A >> B;
    cout << Sign(A)+Sign(B);
    
    return 0;
}