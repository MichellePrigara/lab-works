
#include <iostream>

using namespace std;

int Quater(float x,float y)
{
    int q = 0;
    if (x > 0)
    {
        if (y > 0)
            q = 1;
        else
            q = 4;
    }
    else
    {
        if (y > 0)
            q = 2;
        else
            q = 3;
    }
    return q;
}

int main()
{
    for (int i = 0; i < 3; i++)
    {
        float x1, y1;
        cin >> x1 >> y1;
        cout << Quater(x1, y1);
    }
    
    return 0;
}