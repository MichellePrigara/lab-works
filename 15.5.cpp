
#include <iostream>

using namespace std;

float Fact2(int N)
{
    if (N <= 0)
        return 1;
    return N * Fact2(N-2);
}

int main()
{
    int N1;
    cin >> N1;
    cout << Fact2(N1);
    return 0;
}