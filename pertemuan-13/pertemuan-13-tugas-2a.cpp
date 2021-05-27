#include <iostream>
using namespace std;

int A[5][5];
int I, J;
int N = 1;

int main() {
  for ( I=0; I <= 4 ; I++)
  { 
    for (J=0; J <= 4; J++)
    {
      A[I][J] = N;
      N++;
      cout << A[I][J] << " ";
    }
    cout << endl;
  }
}