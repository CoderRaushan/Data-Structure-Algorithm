#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n=4;
   int a=2;
   int d=2;
   int sum=0;
   for(int i=1;i<=n;i++)
   {
      sum+=a;
      a+=d;
   }
   cout<<sum;
return 0;
}