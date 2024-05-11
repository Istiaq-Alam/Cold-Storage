#include <bits/stdc++.h>

using namespace std;

int main()
{
    cout<< "Enter Value of x: ";
     int x ;
     cin >> x;
     double red = x*(3.14169/180);

     cout<< "Sin(x): "<<sin(red)<<endl;
     cout<< "Cos(x): "<<cos(red)<<endl;
     cout<< "Tan(x): "<<tan(red)<<endl<<endl;

     cout<< "Inverse Sine of x: "<<asin(red)<<endl;
     cout<< "Inverse Cosine of x: "<<acos(red)<<endl;
     cout<< "Inverse Tangent of x: "<<atan(red)<<endl<<endl;

     cout<< "Absulate Value of x : " << abs(x)<<endl;
     cout<< "Ceil Value of Sin(x) : " << ceil(sin(x))<<endl;
     cout<< "Floor Value of Sin(x): " << floor(sin(x))<<endl;


    }
