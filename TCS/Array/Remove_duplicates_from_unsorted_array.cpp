#include<iostream>
#include<vector>
#include<unordered_set>
#include<unordered_map>
using namespace std;
void RemoveDupFromUnsortedArr1(vector<int>&a)
{
    unordered_set<int>s;
    for(auto it:a)
    {
        s.insert(it);
    }
    for(auto it:s)
    {
       cout<<it<<" ";
    }
}
void RemoveDupFromUnsortedArr2(vector<int>&a)
{
    unordered_map<int,int>m;
    for(auto it:a)
    {
       if(m.find(it)==m.end())
       {
        m[it]++;
       }
    }
    for(auto it:m)
    {
       cout<<it.first<<" ";
    }
}
int main()
{
   vector<int>a={2,3,1,9,3,1,3,9};
//    RemoveDupFromUnsortedArr1(a);
   RemoveDupFromUnsortedArr2(a);
    return 0;
}