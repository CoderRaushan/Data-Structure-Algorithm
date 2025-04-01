#include <bits/stdc++.h>
using namespace std;
bool isPrime(int n)
{
    bool isprime=true;
    if(n<=1)return false;
    for(int i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
            isprime=false;
            break;
        }
    }
    return isprime;

}
int main()
{
    cout<<isPrime(77);
return 0;
}