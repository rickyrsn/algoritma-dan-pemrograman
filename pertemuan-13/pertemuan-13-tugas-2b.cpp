#include <iostream>
using namespace std;

int A[3][3] = {{4,5,3}, {4,5,5}, {9,8,7}};
int I, J;

int main() {
  for ( I=0; I <= 2 ; I++)
  { 
    for (J=0; J <= 2; J++)
    {
      cout << A[I][J] << " ";
    }
    cout << endl;
  }
}