
#include <iostream>

using namespace std;

float PowerA3(float A)
{
    float B = A*A*A;
    return B;
}

int main()
{
    for (int i = 0; i < 5; i++)
    {
        float C;
        cin >> C;
        cout << PowerA3(C) << endl;
    }
    
    return 0;
}