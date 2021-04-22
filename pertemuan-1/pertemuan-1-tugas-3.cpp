#include <iostream>
using namespace std;

int main()
{
  float a, b, c, avg;
  cout<<"Input Bilangan A :";
  cin >> a;
  cout<<"Input Bilangan B :";
  cin >> b;
  cout<<"Input Bilangan C :";
  cin >> c;

  // Nilai rata-rata
  avg = (a+b+c)/3;
  cout<<"Nilai rata-ratanya adalah : "<< avg << endl;

  // Mencari nilai terbesar dan terkecil
  if (a > b and a > c)
  {
    if (b > c)
    {
      cout<<"Bilangan terbesar adalah : " << a << endl;
      cout<<"Bilangan terkecil adalah : " << c << endl;
    }
    else
    {
      cout<<"Bilangan terbesar adalah : " << a << endl;
      cout<<"Bilangan terkecil adalah : " << b << endl;
    }
  }
  
  if (b > c and b > a)
  {
    if (c > a)
    {
      cout<<"Bilangan terbesar adalah : " << b << endl;
      cout<<"Bilangan terkecil adalah : " << a << endl;
    }
    else
    {
      cout<<"Bilangan terbesar adalah : " << b << endl;
      cout<<"Bilangan terkecil adalah : " << c << endl;
    } 
  }

  if (c > a and c > b)
  {
    if (a > b)
    {
      cout<<"Bilangan terbesar adalah : " << c << endl;
      cout<<"Bilangan terkecil adalah : " << b << endl;
    }
    else
    {
      cout<<"Bilangan terbesar adalah : " << c << endl;
      cout<<"Bilangan terkecil adalah : " << a << endl;
    }
  }
}