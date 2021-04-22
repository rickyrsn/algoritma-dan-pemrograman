#include <iostream>
using namespace std;

int main()
{
    int a;
    cout<<"Masukan Nilai Anda:";
    cin >> a;

    if (a >= 80)
    {
        cout<<"Anda Mendapatkan Grade A";
    }
    else if (a >= 70)
    {
        cout<<"Anda Mendapatkan Grade B";
    }
    else
    {
        cout<<"Anda Mendapatkan Grade C";
    }
    
}