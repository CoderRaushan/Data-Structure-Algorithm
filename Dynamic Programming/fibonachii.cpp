#include<bits/stdc++.h>
using namespace std;
// using only recursion 
int f(int n)
{
 if(n<=1)return n;
 return f(n-1)+f(n-2);
}
int main()
{
int n=8;
cout<<f(n);
return 0;
}