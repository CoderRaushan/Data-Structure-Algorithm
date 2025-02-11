#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

vector<int> findTwoElement(vector<int> &arr)
{
    vector<int> ans(2);
    int n = arr.size();
    unordered_map<int, int> m;
    for (auto it : arr)
    {
        m[it]++;
    }
    for (int i = 1; i <= n; i++)
    {
        if (m[i] == 2)
        {
            ans[0] = i;
        }
        if (m[i] == 0)
        {
            ans[1] = i;
        }
    }
    return ans;
}

int main()
{
    vector<int> arr = {4, 3, 6, 2, 1, 1};
    vector<int> ans=findTwoElement(arr);
    for(auto it:ans)
    {
        cout<<it<<" ";
    }
    return 0;
    // Time Complexity: O(n) + O(n) = O(n) 
    // Space Complexity : O(n) 
}