

#include <iostream>
using namespace std;
 
int main() {
 
    int K, m, N;
    cin >> K >> N;
    N = N - 2;
    m = ((K + N) % 7) + 1;
    cout << m;
}