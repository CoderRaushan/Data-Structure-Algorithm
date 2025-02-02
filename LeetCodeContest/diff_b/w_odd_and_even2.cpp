#include<iostream>
#include<unordered_map>
#include<climits>
#include<vector>
using namespace std;

    int maxDifference(string s,int k) 
    {
        // if(s.length()<k) return -1;
        unordered_map<char,int>m;
        string substr=s.substr(0,k+2);
        cout<<substr<<endl;
        for(auto it:substr)
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
                maxEven=max(maxEven,it.second);
                resultEven.push_back(it.second);
            }
            else
            {
                maxOdd=max(maxOdd,it.second);
            }
       }
       if(resultEven.size()>=2)
       {
        cout<<"sdf";
        maxEven=INT_MAX;
        for(auto it:resultEven)
        {
            maxEven=min(maxEven,it);
        }
       }
       cout<<"MaxEven:"<<maxEven<<endl;
       cout<<"MaxOdd:"<<maxOdd<<endl;
    //    if(maxEven==0 || maxOdd==0)return -1;
       return maxOdd-maxEven;
        //tc=O(n)+O(n)== O(n)
        //sc=O(n)
    }
    
    int main()
    {
        string s="44114402";
        cout<<maxDifference(s,7);
        return 0;
    }