
#include <iostream>

using namespace std;

void multiplication(int i)
{
    for (int j = 1; j <= i; j++)
    {
        cout << i << " ";
    }
}

int main()
{
    int a, b;
    cin >> a >> b;
    for (int i = a; i <= b; i++)
    {
        multiplication(i);
    }
    return 0;
}