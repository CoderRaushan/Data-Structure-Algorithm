#include<iostream>
#include<climits>
using namespace std;
int main()
{
  int max=INT_MIN;
  int temp_max;
  int arr[]={34,45,344,2,45,36,43,0,-3};
  int n = sizeof(arr)/sizeof(arr[0]);
  for(int i=0;i<n;i++)
  {
    if(max <=arr[i])
    {
      max=arr[i];
    }
  }
  cout<<max;
  return 0;
}
s