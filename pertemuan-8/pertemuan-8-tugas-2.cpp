#include <iostream>
using namespace std;

int main(){
    int A, B, C;

    cout << "Masukan panjang garis A : " ;
    cin >> A;
    cout << "Masukan panjang garis B : " ;
    cin >> B;
    cout << "Masukan panjang garis C : " ;
    cin >> C;

    if (A == B && B == C && A == C)
    {
        cout << "Ini adalah SEGI TIGA" << endl ;
    }
    else
    {
        cout << "Ini bukan SEGI TIGA" << endl ;
    }
    
    return 0;
}