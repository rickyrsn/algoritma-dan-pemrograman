#include <iostream>
using namespace std;

int main(){
    int a = 0, b = 1, c, i;
    cout << "Bilangan" << endl;
    cout << endl;
    cout << "Fibonacci : " << a << " " << b << " ";

    while (i < 10)
    {
        c = a + b;
        a = b;
        b = c;

        cout << c << " ";
        i++;
    }
    cout << endl;
    
return 0;
}