#include<iostream>
#include<unordered_map>
#include<unordered_set>
#include<vector>
using namespace std;
class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) 
    {
        unordered_map<int,int>m;
        unordered_set<int>s;
       for(int i=0;i<arr.size();i++)
       {
            m[arr[i]]+=1;
       }
       int map_len=m.size();
       for(auto ele:m)
       {
         s.insert(ele.second);
       }
       int set_len=s.size();
       if(map_len==set_len)
       {
        return true;
       }else
       {
        return false;
       }
    }
};