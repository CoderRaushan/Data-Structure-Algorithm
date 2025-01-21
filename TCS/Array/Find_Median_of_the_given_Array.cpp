#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
float FindMedian(int v[],int n)
{
   sort(v,v+n);//you can use manual sorting algorithm

   if(n%2==0)
   {
        int first=v[(n/2-1)];
        int second=v[(n/2)];
        float third=(first+second)/2.0;
        return third;
   }
   return v[(n)/2];
}
int main()
{
  int v[]={2,5,1,7};    
  /*
  Inorder to find median follow these steps 
  1. Sort the array
  2. Find array size is odd or even
  3.if size is odd then apply these formula
  median=((n+1)/2)th element
  4.if size is even then apply these formula
  median=(n/2)th element + (n/2+1)th element/2;
  */
int n = sizeof(v)/sizeof(v[0]);
 cout<<FindMedian(v,n);
    return 0;
}