
#include <iostream>

using namespace std;


int main()
{
    int n, a, d;
    cin >> n >> a >> d;
    int foo[n];
    for (int i = 0; i < n; i++){
        foo[i] = a;
        a = a * d;
    }
    for (int i = 0; i < n; i++){
        cout << foo[i] << ' ';
    }
    return 0;
}