#include <iostream>
using namespace std;

int main() {
    int bin, dec=0, base=1, i, l, biner;
    cout << "Aplikasi konversi Biner ke Desimal" << endl ;
    cout << "Masukan bilangan biner: ";
    cin >> bin ;
    biner = bin;

    while (bin != 0)
    {
        i = bin % 10;
        dec = dec + i * base;
        bin = bin / 10;
        base = base * 2;
    }

    cout << "Nilai desimal dari " << biner << " adalah: " << dec << endl; 
}