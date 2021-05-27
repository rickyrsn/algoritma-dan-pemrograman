#include <iostream>
using namespace std;

int A[3][5];
int I, J;

int main(){
    for (J = 0; J <= 4; J++)
    {
        for (I = 0; I <= 2; I++)
        {
            A[I][J] = I ;
            cout << A[I][J] << " ";
        }
        cout << endl;
    }
}