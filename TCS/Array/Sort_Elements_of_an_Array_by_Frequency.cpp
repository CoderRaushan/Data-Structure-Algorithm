#include<iostream>
#include<vector>
#include<unordered_map>
#include<map>
#include<algorithm>
using namespace std;
 vector<int> frequencySort(vector<int>& v) 
 {
    unordered_map<int,int>m;
    for(auto it:v)
    {
        m[it]++;
    }
    vector<pair<int,int>>p;
    for(auto it:m)
    {
        p.push_back({it.second,it.first});
    }
    sort(p.begin(),p.end(),
    [&]
    (pair<int,int>a,pair<int,int>b)
    {
        if(a.first==b.first)
        {
            return a.second > b.second;// Sort by value in descending order
        }
        else
        {
           return a.first < b.first;// Sort by frequency in ascending order
        }
    }
    );
    for(auto it:p)
    {
        while(it.first)
        {
            cout<<it.second<<" ";
            it.first--;
        }
    }
 }
int main()
{
    vector<int>v={1,1,2,2,2,3};
    vector<int>ans=frequencySort(v);
    for(auto it:ans)
    {
        cout<<it<<" "<<endl;
    }
    return 0;
}