#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
  int arr[]={34,49,4,2,45};
  int n = sizeof(arr)/sizeof(arr[0]);
  //using while loop
  // int i=0;
  // int j=n-1;
  // while(i<j)
  // {
  //   int temp;
  //   temp=arr[i];
  //   arr[i]=arr[j];
  //   arr[j]=temp;
  //   i++;
  //   j--;
  // }
  // Time complexity is (O(n)).
  
  //using for loop
  int j=n-1;
  for(int i=0;i<=n/2;i++)
  {
    int temp;
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
  // Time complexity is (O(n)).
  //Space complexity is (O(1)).
}
