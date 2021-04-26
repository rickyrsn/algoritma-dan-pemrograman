#include <iostream>
using namespace std;

int main(){
    int i = 1;
    
    cout << "Ganjil : ";
    while (i < 36)
    {
        if (i % 2 != 0 ){
            cout << i << " ";
        }
        i++;
    }
    
    i = 1;
    cout << "\nGenap : ";
    while (i < 36)
    {
        if (i % 2 == 0 ){
            cout << i << " ";
        }
        i++;
    }
    cout << endl;
return 0;
}