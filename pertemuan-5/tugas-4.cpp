#include <iostream>
using namespace std;

float hasil, a, b, c;
//int volumekotak(float, float, float); // Function Prototype
int volumekotak(float x, float y, float z)
    {                                       //
        float v;                            // Function yang dipanggil
        v = x * y * z;                      //
        return v;                           //
    }                                       //

int main() // 
    {
        cin >> a;
        cin >> b;
        cin >> c;
        hasil = volumekotak(a, b, c);       // Function yang memanggil
        cout << "Hasil " << hasil << endl;
        return 0;
    }