
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    
    
    if ((a+b>c)&&(a+c>b)&&(b+c>a))
    {
        cout << "Существует треугольник со сторонами a, b, c";
    }
    else
    {
        cout << "Треугольника со  сторонами a, b, c не существует";
    }
    return 0;
}
