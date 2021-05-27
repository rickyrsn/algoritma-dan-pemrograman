#include <iostream>
using namespace std;

int A[3][2];
int B[2][3];
int C[3][3];
int I, J, K, jumlah = 0;
int N = 4;

int main(){
    cout << "Matriks A" << endl ;
    for (I = 0; I <= 2; I++)
    {
        A[I][0] = 5 ;
        A[I][1] = N ;
        
        for (J = 0; J <= 1; J++)
        {
            cout << A[I][J] << " ";
        }
        N--;
        cout << endl;
    }

    cout << "Matriks B" << endl ;
    for (I = 0; I <= 1; I++)
    {
        for (J = 0; J <= 2; J++)
        {
            B[I][J] = 1 ;
            cout << B[I][J] << " ";
        }
        cout << endl;
    }

    //Proses perhitungan
    for (I = 0; I <= 2; I++)
    {
        for (J = 0; J <= 2; J++)
        {
            for (K = 0; K <= 1; K++)
            {
                jumlah = jumlah + A[I][K] * B[K][J];
            }
            C[I][J] = jumlah;
            jumlah = 0;
        }
        
    }

    cout << "Hasil perkalian Matriks A dan Matriks B" << endl ;
    for (I = 0; I <= 2; I++)
    {
        for (J = 0; J <= 2; J++)
        {
            cout << C[I][J] << " ";
        }
        cout << endl;
    }

}