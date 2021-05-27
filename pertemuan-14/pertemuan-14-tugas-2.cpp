#include <iostream>
using namespace std;

int main() {
    int hasil = 0, a, b, nilai;

    cout << "Masukan bilangan A: ";
    cin >> a;
    cout << "Masukan bilangan B: ";
    cin >> b;

    for (int i = 0; i <= b; i++)
    {
        hasil = hasil + a;
        if (hasil % b == 0)
        {
            break;
        }
    }
    cout << hasil ;
}