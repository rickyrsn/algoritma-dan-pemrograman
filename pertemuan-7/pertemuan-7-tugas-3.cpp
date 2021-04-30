#include <iostream>
using namespace std;

// 3. Buatlah program dan flowchart denganb C++ 
// untuk menampilkan bilangan genap dan ganjil.

int main(){
    int bilangan;
    cout << "Masukan bilangan: ";
    cin >> bilangan;

    if (bilangan % 2 != 0)
    {
        cout << bilangan << " adalah Bilangan Ganjil" << endl;
    }
    else
    {
        cout << bilangan << " adalah Bilangan Genap" << endl;
    }
return 0;
}