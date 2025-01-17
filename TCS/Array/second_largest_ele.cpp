#include<iostream>
#include<climits>
using namespace std;
int main()
{
  int max=INT_MIN;
  int temp_max;
  int arr[]={34,49,344,2,45,36,43,0,-3};
  int n = sizeof(arr)/sizeof(arr[0]);
  for(int i=0;i<n;i++)
  {
    if(max <=arr[i])
    {
      max=arr[i];
    }
  }
  int secondLargest=INT_MIN;
  for(int i=0;i<n;i++)
  {
    if(secondLargest <=arr[i] && arr[i]!=max)
    {
      secondLargest=arr[i];
    }
  }


  cout<<secondLargest;
  return 0;
}
