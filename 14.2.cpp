
#include <iostream>

using namespace std;

int main()
{
    int A, B;
    cin >> A >> B;
    while (A >= B)
    {
        A -= B;
    }
    cout << A;
}