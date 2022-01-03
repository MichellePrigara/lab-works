

#include <iostream>
using namespace std;
 
int main() {
 
    int A, B, C, n, s;
    cin >> A >> B >> C;
    s = (B % C)*A + (A % C)*(B/C);
    n = (A / C)*(B / C);
    cout << n << "," << s;
}