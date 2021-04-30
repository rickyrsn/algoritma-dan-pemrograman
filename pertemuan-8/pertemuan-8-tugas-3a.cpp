#include <iostream>
using namespace std;

int main(){
    int N, A;

    cout << "Masukan nilai N : ";
    cin >> N;

    if (A > 50)
    {
        N = N + 25;
    }
    else
    {
        N = N + 10;
    }
    
    cout << "Nilai N adalah : " << N << endl ;
    return 0;
}