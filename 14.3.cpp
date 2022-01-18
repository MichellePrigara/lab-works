
#include <iostream>

using namespace std;

int main()
{
    int N, K = 1, S = 0;
    cin >> N;
    while (N > S)
    {
        S += K;
        K += 1;
    }
    cout << K - 1 << " " << S;
    return 0;
}