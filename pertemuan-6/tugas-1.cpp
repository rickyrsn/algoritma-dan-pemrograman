#include <iostream>
using namespace std;

int main() {
    int numbers[4];
    int jumlah, total = 0;

    cout << "Masukan 4 bilangan bulat yang anda inginkan: " << endl;

    //  store input from user to array
    for (int i = 0; i < 4; ++i) {
        cout << "Ke-" << i+1 << " : ";
        cin >> numbers[i];
        total = total + numbers[i];
    }

    cout << "Ini adalah 4 bilangan bulat yang anda input: ";

    //  print array elements
    for (int n = 0; n < 4; ++n) {
        cout << numbers[n] << " ";
    }
    cout << endl;
    jumlah = total;

    cout <<"Ini adalah hasil penjumlahan dari bilangan bulat yang anda input: ";
    cout <<jumlah << endl;

    return 0;
}