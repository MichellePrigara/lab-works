
#include <iostream>
using namespace std;

int main()
{
    int A, n1, n2, n3;
    cin >> A;
    n1 = A / 100;
    n2 = (A / 10) % 10;
    n3 = A % 10;
    if ((n1<n2 & n2<n3)||(n1>n2 & n2>n3))
    {
        cout << "True";
    }
    else
    {
        cout << "False";
    }
    return 0;
}
