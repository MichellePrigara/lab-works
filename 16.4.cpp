using namespace std;

#include <iostream>

int main()
{
    int n, a, b;
    cin >> n;
    int foo[n], goo[n];
    for (int i = 0; i < n; i++){
        cin >> foo[i];
    }
    for (int i = 0; i < n; i++){
        if (i % 2 == 0){
            goo[i] = foo[i / 2];
        }
        else{
            goo[i] = foo[n - i / 2 - 1];   
        }
    }
    for (int i = 0; i < n; i++){
        cout << goo[i] << ' ';
    }
}
