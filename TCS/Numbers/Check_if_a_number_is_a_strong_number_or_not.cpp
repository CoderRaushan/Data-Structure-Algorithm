#include<bits/stdc++.h>
using namespace std;
int factorial(int n)
{
    if(n<=1)return n;
    return n*factorial(n-1);
}
bool StrongNumber(int n)
{
    int original=n;
    int sum=0;
    while(n>0)
    {
        int digit=n%10;
        sum+=factorial(digit);
        n/=10;
    }
   return original==sum;
}
int main()
{
 //When the sum of factorial of individual digits of a number is equal to the original number the number is called a strong number. 
//Strong number is also known as Krishnamurthi number/Peterson Number
cout<<StrongNumber(26);
return 0;
}