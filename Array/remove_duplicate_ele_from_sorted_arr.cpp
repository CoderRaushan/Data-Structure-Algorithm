#include <iostream>
#include<vector>
using namespace std;
void removeduplicate(int arr[],int n)
{
    int present=arr[0];
    vector<int>ans;
    ans.push_back(arr[0]);
    for (int i = 1; i < n; i++)
    {
        if(arr[i]!=present)
        {
            ans.push_back(arr[i]);
            present=arr[i];
        }
    }
    for(auto it:ans)
    {
        cout<<it<<" ";
    }
}
int main()
{
    int arr[] = {0, 0, 1, 1, 1, 2, 2, 3, 3, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    removeduplicate(arr,n);
    return 0;
}