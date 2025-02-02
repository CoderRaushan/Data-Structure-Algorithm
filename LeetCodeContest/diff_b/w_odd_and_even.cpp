#include<iostream>
#include<unordered_map>
#include<climits>
#include<vector>
using namespace std;

    int maxDifference(string s) 
    {
        unordered_map<char,int>m;
        for(auto it:s)
        {
            m[it]++;
        }
        int maxOdd = 0;
        int maxEven = 0;
        vector<int>resultEven;
       for(auto it:m)
       {
            if(it.second%2==0)
            {
                resultEven.push_back(it.second);
                maxEven=max(maxEven,it.second);
            }
            else
            {
                maxOdd=max(maxOdd,it.second);
            }
       }
       if(resultEven.size()>=2)
       {
        maxEven=INT_MAX;
        for(auto it:resultEven)
        {
            maxEven=min(maxEven,it);
        }
        cout<<endl;
       }
       return maxOdd-maxEven;
        //tc=O(n)+O(n)== O(n)
        //sc=O(n)
    }
    
    int main()
    {
        string s="oflllalyy";
        cout<<maxDifference(s);
        return 0;
    }