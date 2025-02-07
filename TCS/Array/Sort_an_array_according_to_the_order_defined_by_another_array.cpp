#include<iostream>
#include<vector>
#include<map>
using namespace std;
vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) 
{
    vector<int>ans;
    map<int,int>m;//space=O(n) and time=O(logN)
    for(auto it:arr1)//time=O(n)
    {
        m[it]++;
    }
    for(auto it:arr2)//time=O(m)
    {
        if(m.find(it)!=m.end())
        {
            int times=0;
            times=m[it];
            while(times)
            {
                ans.push_back(it);
                times--;
            }
            m.erase(it);
        }
    }
    for(auto it:m)//time=O(n-m)
    {
        int times=0;
        times=it.second;
        while(times)
        {
            ans.push_back(it.first);
            times--;
        }
    }
    return ans; //time=O(MlogN+N).
}
int main()
{
    vector<int>arr1={2,3,1,3,2,4,6,7,9,2,19};
    vector<int>arr2={2,1,4,3,9,6};
    vector<int>ans;
    ans=relativeSortArray(arr1,arr2);
    for(auto it:ans)
    {
        cout<<it<<" ";
    }
    return 0;
    // //time=O(MlogN+N).
}