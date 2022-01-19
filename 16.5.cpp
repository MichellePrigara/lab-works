using namespace std;

#include <iostream>

int main()
{
    int n, a;
    cin >> n;
    int foo[n];
    for (int i = 0; i < n; i++){
        cin >> foo[i];
    }
    for (int i = 1; i < n; i+=2){
        cout << foo[i] << ' ';
    }
    cout << endl;
    for (int i = n + (n % 2) - 2; i >= 0; i-=2){
        cout << foo[i] << ' ';
    }
}
