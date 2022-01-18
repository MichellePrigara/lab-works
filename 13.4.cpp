
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int N;
    float A, S = 0;
    cin >> A >> N;
    for (int i = 0; i <= N; i++)
    {
        S += pow(A, i);
    }
    cout << S;
    return 0;
}