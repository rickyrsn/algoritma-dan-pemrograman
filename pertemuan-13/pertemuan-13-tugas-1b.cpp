#include <iostream>
using namespace std;

int A[3][5];
int I, J;

int main(){
    for (I = 0; I <= 2; I++)
    {
        for (J = 0; J <= 4; J++)
        {
            A[I][J] = J ;
            cout << A[I][J] << " ";
        }
        cout << endl;

    }
}