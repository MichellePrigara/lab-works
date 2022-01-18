
#include <iostream>

using namespace std;

int main()
{
    int N, i, S = 0, j = 1;
    cin >> N;
    for (i = 0; i < N; i++)
    {
        S += j;
        j += 2;
        cout << S << endl;
    }

    return 0;
}