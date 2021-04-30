#include <iostream>
using namespace std;

int main(){
    int a, b, total, diskon, grand_total;

    cout << "Jumlah barang: ";
    cin >> b;

    cout << "Harga barang: ";
    cin >> a;

    total = a * b;

    if (b > 100)
    {
        diskon = total * 0.15;
        grand_total = total - diskon;
    }
    else
    {
        diskon = total * 0.05;
        grand_total = total - diskon;
    }
    
    cout << "Jumlah beli = " << total << endl;
    cout << "Jumlah diskon = " << diskon << endl;
    cout << "Total bayar = " << grand_total << endl;
}