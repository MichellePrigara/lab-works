
#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    int n;
    cin >> n;
    n -= 1984;
    string color[5] = { "зелен", "красн", "желт", "бел", "черн"};
    string animal[12] = { "ой крысы", "ой коровы", "ого тигра", "ого зайца", "ого дракона", "ой змеи", "ой лошади", "ой овцы", "ой обезьяны", "ой курицы", "ой собаки", "ой свиньи" };
    cout << "год " << color[n % 5] + animal[n % 12];
    return 0;
}