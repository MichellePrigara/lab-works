
#include <iostream>

using namespace std;

int main()
{
    float i = 0.0, a;
    cin >> a;
    while (i <= 1)
    {
        cout << a * i << endl;
        i = i + 0.1;
    }
    return 0;
}