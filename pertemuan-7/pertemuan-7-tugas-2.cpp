#include <iostream>
using namespace std;

// 2. Buatlah program untuk menghitung total pembelian yang harus dibayarkan oleh seorang pelanggan apabisa diketahui kondisi berikut.
// Jika jumlah brang > 100 maka diskon = 15% Jika tidak Diskon = 5%
// Dimana :
// Input : harga barang, jumlah barang
// Output : beli, diskon dan total bayar

int main(){
    int harga_barang, diskon, total, grand_total, jumlah_barang;

    cout << "Masukan harga barang: ";
    cin >> harga_barang;
    cout << "Masukan jumlah barang: ";
    cin >> jumlah_barang;

    total = harga_barang * jumlah_barang;
    cout << "Total belanja anda adalah: " << total << endl;

    if (jumlah_barang > 100)
    {
        diskon = total * 0.15;
        cout << "Selamat anda mendapatkan diskon sebesar 15% atau sebesar " << diskon << endl;
        grand_total = total - diskon;
        cout << "Total yang harus dibayar adalah: " << grand_total << endl;
    }
    else
    {
        diskon = total * 0.05;
        cout << "Selamat anda mendapatkan diskon sebesar 5% atau sebesar " << diskon << endl;
        grand_total = total - diskon;
        cout << "Total yang harus dibayar adalah: " << grand_total << endl;
    }

return 0;
}