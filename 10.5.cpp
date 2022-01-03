
#include <iostream>
using namespace std;

int main()
{
    int A;
    cin >> A;
    int n0, n1, n2, n3 = 0;
    n0 = A / 1000;
    n1 = (A / 100) % 10;
    n2 = (A / 10) % 10;
    n3 = A % 10;
    
    if ((n0 == n1 && n1 == n2 && n2 == n3)||(n0 == n3 && n1 == n2))
    {
        cout << "True";
    }
    else
    {
        cout << "False";
    }
    return 0;
}
