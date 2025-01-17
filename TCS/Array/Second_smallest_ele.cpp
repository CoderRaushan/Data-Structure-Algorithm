#include<iostream>
#include<climits>
using namespace std;
int main()
{
  int min=INT_MAX;
  int temp_min;
  int arr[]={34,45,344,2,45,36,43,1,-3};
  int n = sizeof(arr)/sizeof(arr[0]);
  for(int i=0;i<n;i++)
  {
    if(min >=arr[i])
    {
      min=arr[i];
    }
  }
    int secondMin=INT_MAX;
    for(int i=0;i<n;i++)
  {
    if(secondMin >=arr[i] && arr[i]!=min)
    {
      secondMin=arr[i];
    }
  }
  cout<<"second min ele:"<<secondMin;
  return 0;
}
