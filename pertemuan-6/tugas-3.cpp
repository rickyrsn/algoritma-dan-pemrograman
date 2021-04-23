#include <iostream>

using namespace std;

int main(){
    int A = 5, B = 2, T;

    T = A;
    A = B;
    B = T;

    cout << "T = " << T << endl;
    cout << "A = " << A << endl;
    cout << "B = " << B << endl;

    return 0;
}