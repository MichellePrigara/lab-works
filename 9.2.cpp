

#include <iostream>
using namespace std;
 
int main() {
 
    int K, m;
    cin >> K;
    m = ((K - 1) % 7) + 1;
    
    if (m == 7)
    {
        cout << "0";
    }
    else
    {
        cout << m;
    }
}
