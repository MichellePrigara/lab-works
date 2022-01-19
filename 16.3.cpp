using namespace std;

#include <iostream>

int main()
{
    int n, a, b;
    cin >> n >> a >> b;
    int foo[n];
    foo[0] = a;
    foo[1] = b;
    for (int i = 2; i < n; i++){
        foo[i] = foo[i - 1] + foo[i - 2];
    }
    for (int i = 0; i < n; i++){
        cout << foo[i] << ' ';
    }
}
