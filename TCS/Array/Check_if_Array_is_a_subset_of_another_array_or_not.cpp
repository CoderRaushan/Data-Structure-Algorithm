#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
bool isSubset(vector<int>&a,vector<int>&b)
{
    unordered_map<int,int>m;//sc=O(N) taking size of array a is N
    //and size of array b is M:
    for(auto it:a)//tc=O(N)
    {
        m[it]++;
    }
    for(auto it:b)//tc=O(M)
    {
        if(m[it]>0)//O(1) in avg case
        {
            m[it]--;
        }
        else 
        {
            return false;
        }
    }
    return true;
}//Tc=O(N)+O(M)==>O(N+M)
//sc=O(N)
int main()
{
   vector<int>a={10, 5, 3, 2, 23, 19};
   vector<int>b={19, 5, 3, 23, 19};
   cout<<isSubset(a,b);
    return 0;
}