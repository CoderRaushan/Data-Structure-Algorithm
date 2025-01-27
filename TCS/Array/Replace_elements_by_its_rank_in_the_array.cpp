#include <iostream>
#include <vector>
#include<algorithm>
#include <unordered_map>
using namespace std;
int main()
{
    vector<int> arr = { 20, 15, 26, 2, 98, 6};
    vector<int> res(arr);//sc=O(n) tc=O{n}
    sort(res.begin(),res.end());//tc=O(nlogn)
    int n = arr.size();
    unordered_map<int,int>m;//sc=O(n)
    int idx=1;
    for(auto it:res)//tc=O(n)
    {
        m[it]=idx;
        idx++;
    }
    for(auto it:arr)
    {
        cout<<m[it]<<" ";//tc=O(n)
    }
    return 0;
    //Time Complexity: O(nlogn) + O(n) + O(n)
    //Space Complexity : O(n) + O(n)
}