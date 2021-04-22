#include <iostream>
#include <math.h>

using namespace std;

// Menghitung volume tabung V = phi x r^2 x tinggi
int main()
    {
        float phi, r, t, v, l;
        phi = float(22)/7;

        cout << "Masukan jari-jari tabung (cm): ";
        cin >> r;

        cout << "Masukan tinggi tabung (cm): ";
        cin >> t;

        // Mencari volume tabung
        v = phi * pow(r, 2) * t;

        // Mencari luas permukaan tabung
        l = 2 * phi * r * (r+t);

        cout << "Volume tabungnya adalah " << v << "cm3 dan luas permukaannya adalah " << l << "cm2" << endl;
        return 0;
    }