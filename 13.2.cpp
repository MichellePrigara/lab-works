
#include <iostream>

using namespace std;

int main()
{
    int N;
    float p = 1, j = 1.1;
    cin >> N;
    for (int i = 0; i <= N; i++)
    {
        p *= j;
        j += 0.1;
    }
    cout << p;
    return 0;
}