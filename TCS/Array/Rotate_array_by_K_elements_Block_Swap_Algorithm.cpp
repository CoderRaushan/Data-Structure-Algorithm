#include<iostream>
#include<vector>
using namespace std;

// steps to slove this question one of the optimal approach is 
// firstly swap ele form =>0 to k
// and phit swap ele form =>k to n
// and at last swap ele form =>0 to n
// make a function to swap ele and call it for when need and 
// swap ele in side given array itself so that space complixity should remains O(1)

 // Time Complexity: [ O(k) + O(n-k) + O(n) = O(n) ]
//Space Complexity: O(1).

int swapBro(int i,int j,vector<int>&arr)
{
   while(i<j)
   {
    int temp=arr[i];
    arr[i]=arr[j];
    arr[j]=temp;
    i++;
    j--;
   }
}
int main()
{
    vector<int>arr={1, 2, 3, 4, 5, 6, 7};
    int n=arr.size();
    int k=2;
    //left rotate array 
    // swapBro(0,k-1,arr);//tc=O(k) 1.
    // swapBro(k,n-1,arr);//tc=O(n-k) 2.
    // swapBro(0,n-1,arr);//tc=O(n) 3.
    //time complexity=O(n)
    // space com=O(1)

    // right rotate array=> just opposite of the left rotation process
    swapBro(0,n-1,arr);//tc=O(n) 3.
    swapBro(k,n-1,arr);//tc=O(n-k) 2.
    swapBro(0,k-1,arr);//tc=O(k) 1.
    for(auto ele:arr)
    {
        cout<<ele<<" ";
    }
    return 0;
}