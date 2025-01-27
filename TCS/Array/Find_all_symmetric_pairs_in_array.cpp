#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
void Find_all_symmetric_pairs_in_array(vector<vector<int>>&v,vector<vector<int>>&ans)
{
    unordered_map<int,int>m;
    for(int i=0;i<v.size();i++)
    {
        int first=v[i][0];
        int second=v[i][1];
        if(m.find(first)!=m.end() && second==m[first])
        {
            ans.push_back({first,second});
        }
        else
        {
            m[second]=first;
        }
    }
}
int main()
{
    vector<vector<int>>v{{1, 2}, {2, 1}, {3, 4}, {4, 5}, {5, 4}}; 
    vector<vector<int>>ans;
    Find_all_symmetric_pairs_in_array(v,ans);
    for(auto it:ans)
    {
        cout<<it[0]<<" "<<it[1]<<endl;
    }
    return 0;

// Time Complexity: O(N).
// Space Complexity: O(N), for using a hashmap.
}