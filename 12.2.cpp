
#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    int N, c1;
    string C;
    cin >> C >> N;
    string r[4] = { "С", "З", "Ю", "В" };
    if (C == "С")
    {
        c1 = 0;
    }
    else if (C == "З")
    {
        c1 = 1;
    }
    else if (C == "Ю")
    {
        c1 = 2;
    }
    else if (C == "B")
    {
        c1 = 3;
    }
    
    if (N == 0)
    {
        cout << C;
    }
    else if (N == 1)
    {
        if (c1 == 3)
        {
            cout << r[0];
        }
        else
        {
           cout << r[c1+1];
        }
    }
    else if (N == -1)
    {
        if (c1 == 0)
        {
            cout << r[3];
        }
        else
        {
            cout << r[c1-1];
        }
    }
    system("pause");
    return 0;
}