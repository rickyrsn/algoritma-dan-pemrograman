#include <cstdlib>
#include <iostream>

using namespace std;

int main()
{
    int i = 4, j=4, k=12;
    int jwb;
    
    jwb = i+j*k;
    cout <<jwb<<endl;
    jwb+=k;
    cout<<jwb;

    system("PAUSE");
    return EXIT_SUCCESS;
}