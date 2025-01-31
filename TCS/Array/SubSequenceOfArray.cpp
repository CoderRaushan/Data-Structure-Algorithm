#include<iostream>//// this same code is also for 
//subsequence because it requires maintained order of ele
// and recursion already maintained order that's why
#include<vector>
using namespace  std;
void printSubarray(vector<int>&arr,vector<vector<int>>&subset,int i, vector<int> &temp)
{
   
    if(arr.size()==i)
    {
        subset.push_back(temp);
        return;
    }
   
    // include the current element
    temp.push_back(arr[i]);
    printSubarray(arr,subset,i+1,temp);
   // exclude the current element
    temp.pop_back();
    printSubarray(arr,subset,i+1,temp);

    //trick is to push and call i+1 and pop and call i+1
}
int main()
{
    vector<int> temp;
    vector<int> arr = {1,2,3};
    vector<vector<int>> subset;
    int i=0;
    printSubarray(arr,subset,i,temp);
    for(auto it:subset)
    {
        for(auto el:it)
        {
            cout<<"{"<<el<<"}";
        }
        cout<<endl;
    }
    //tc=O(2^n)
    //sc=O(n) 
    return 0;
}