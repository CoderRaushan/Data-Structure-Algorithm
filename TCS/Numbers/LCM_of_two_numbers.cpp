// LCLM = Find the of a and b 
// To find lcm simply divide (a*b) by gcd of a and b.
#include<iostream>
using namespace std;
int findGCD(int a,int b)
{
    for(int i=min(a,b);i>=0;i--)
    {
        if(a%i==0 && b%i==0)
        {
            return i;
        }
    }
    return 1;
}
int LCM(int a,int b,int gcd)
{
    return ((a*b)/gcd);
}
int main()
{
    int a=4;
    int b=8;
    int gcd=findGCD(4,8);
    cout<<LCM(a,b,gcd);
    return 0;
}

