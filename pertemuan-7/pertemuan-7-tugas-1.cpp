#include <iostream>
using namespace std;

// 1. Buatlah flowchart program untuk mencetak Bilangan Positif jika di inputkan
// angka lebih besar dari 0, mencetak bilangan negative jika di inputkan
// bilangan lebih kecil dari 0

int main(){
    float bilangan;
    cin >> bilangan;

    if (bilangan > 0)
    {
        cout << bilangan << " adalah Bilangan Positif" << endl;
    }
    else
    {
        cout << bilangan << " adalah Bilangan Negatif" << endl;
    }
return 0;
}