#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cout << "Masukan Bilangan A :";
    cin >> a;

    cout << "Masukan Bilangan B :";
    cin >> b;

    c = a;
    a = b;
    b = c;

    cout << c << endl;
}