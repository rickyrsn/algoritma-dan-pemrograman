#include <iostream>
using namespace std;

int main (){
    int A, B, C, D, max;

    cout << "Masukan Bilangan A : ";
    cin >> A;
    cout << "Masukan Bilangan B : ";
    cin >> B;
    cout << "Masukan Bilangan C : ";
    cin >> C;
    cout << "Masukan Bilangan D : ";
    cin >> D;
    cout << endl;

    if (A > B)
    {
        max = A;
    }
    else
    {
        max = B;
    }
    
    if (C > max)
    {
        max = C;
    }

    if (D > max)
    {
        max = D;
    }
    
    cout << "Bilangan terbesar adalah : " << max << endl;
    return 0;
}