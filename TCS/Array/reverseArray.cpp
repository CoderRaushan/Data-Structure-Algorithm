#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
  int arr[]={34,49,344,2,45,36,43,0};
  int n = sizeof(arr)/sizeof(arr[0]);
  int j=n-1;
  int temp;
  for(int i=0;i<=n/2;i++)
  {
      temp=arr[i];
      arr[i]=arr[j];
      arr[j]=temp;
      j--;
  }
  for(auto ele:arr)
  {
    cout<<ele<<endl;
  }
  return 0;
}
