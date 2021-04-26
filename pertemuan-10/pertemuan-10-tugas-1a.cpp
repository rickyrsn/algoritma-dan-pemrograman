#include <iostream>
using namespace std;

int main(){
    int i;
    
    cout << "Ganjil : ";
    for (int i = 1; i < 36; i++)
    {
        if (i % 2 != 0)
        {
            cout << i << " ";
        }
    }

    cout << "\nGenap : " ;
    for (int i = 1; i < 36; i++)
    {
        if (i % 2 == 0)
        {
            cout << i << " ";
        }
    }
    cout << endl;
return 0;
}