
#include <iostream>
using namespace std;

int main()
{
    int a;
    cin >> a;
    a = (a / 100) + (a % 100)*10;
    cout << a;
    
    return 0;
}