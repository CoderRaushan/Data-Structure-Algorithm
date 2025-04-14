//If the sum of digits is divisible by the number 
//then it is called Harshad number.
//example n=378
// 3+7+8=18 and 378 is purely divisible by 18 so 378 is a harshad number
#include<iostream>
using namespace std;
bool Harshad(int n)
{
  int original=n;
  int sum=0;
  while(n>0)
  {
    sum+=(n%10);
    n/=10;
  }
  return original%sum==0;
}
int main()
{
    int n=379;
    cout<<Harshad(n);
    return 0;
}