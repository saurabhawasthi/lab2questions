# lab2question12
#include <iostream>
#include<cmath>
using namespace std;

int main()
{
 float p,r,t,n,x,y,z,ci;

    cout <<"\nenter principal amount=";
    cin>>p;
    cout <<"\nenter annual interest rate =";
    cin>>r;
    cout <<"\nenter time in years =";
    cin>>t;
    cout<<"\nenter no. of times interest is compounded per year=";
    cin>>n;
    y=n*t;
    x=1+(r/n);
    z=pow(x,y);
    ci=p*z;
    cout <<"\ncompound interest="<<ci;
    return 0;
}
