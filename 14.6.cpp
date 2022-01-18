#include <iostream>

using namespace std;

int main()
{
    int N, F1 = 0, F2 = 1, F3 = F1 + F2, K = 2;
    cin >> N;
    while (N != F3)
    {
    F1 = F2;
    F2 = F3;
    F3 = F1 + F2;
    K += 1;
    }
    cout << K;
    return 0;
}