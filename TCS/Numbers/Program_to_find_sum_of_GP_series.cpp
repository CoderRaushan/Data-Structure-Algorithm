#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    //sum of first n terms of G.P = a(r^n-1)/(r-1)
    //second 
    //gp=a+ar+ar^2+ar^3+....................+ar^n;
 
    int a=3; int r=5; int n=2;
    int gp=(a*(round(pow(r,n))-1))/(r-1);
    cout<<gp;
return 0;
}