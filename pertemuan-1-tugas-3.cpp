#include <iostream>
using namespace std;

int main()
{
    float a, b, c, avg, sum;
    cout<<"Input Bilangan A :";
    cin >> a;
    cout<<"Input Bilangan B :";
    cin >> b;
    cout<<"Input Bilangan C :";
    cin >> c;

    sum = a + b + c;
    avg = sum / 3;

    cout<< avg << endl;
}