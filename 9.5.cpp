

#include <iostream>
using namespace std;
 
int main() {
    
    int d, n;
    
    cin >> d;
    
    if (d % 100 == 0)
    {
        n = d / 100;
    }
    else
    {
        n = d / 100 + 1;
    }
    
    cout << n;
    
}