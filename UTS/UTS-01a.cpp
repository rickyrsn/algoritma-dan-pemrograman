#include <iostream>
using namespace std;

int main() {
    int J;
    int K = 8;
    int L = 83;

    J = K & ++L;

    cout << J << endl;
}