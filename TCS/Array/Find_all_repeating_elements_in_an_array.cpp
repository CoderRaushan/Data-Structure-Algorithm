#include<iostream>
#include<vector>
#include<unordered_map>
#include<algorithm>
using namespace std;
// void FindRepeatedEle(vector<int>&v,vector<int>&res)
// {
//     unordered_map<int,int>m;
//     for(auto it:v)
//     {
//         m[it]++;
//     }
//     //Tc=O(n)
//     for(auto it:m)
//     {
//         if(it.second > 1)
//         {
//             res.push_back(it.first);
//         }
//     }//Tc=O(n) Sc=O(n)
// }
// int main()
// {
//     vector<int>v={1,1,2,3,4,4,5,2};
//     vector<int>res;
//     FindRepeatedEle(v,res);
//     for(auto it:res)
//     {
//         cout<<it<<" ";
//     }
//     return 0;
//     //Tc=O(n)+O(n)=O(n)
//     //Sc=O(n)
// }
int main()
{
    vector<int>v={1,1,2,2,1,1,4,5,6,6,7,9,1,2,3,4,4,5,2,8,8};//1 2 4 5 6 8 
    sort(v.begin(),v.end());//sort  Tc=O(nlogn) for sorting
    int n=v.size();
    vector<int>res;
   for(int i=0;i<n;i++)//TC=O(n)
   {
    if(v[i]!=v[i+1] && v[i]==v[i-1])
    {
        res.push_back(v[i]);
    }
   }
   for(auto it:res)
   {
    cout<<it<<" ";
   }
    return 0;
    //Tc=O(nlogn)+O(n)
    //Sc=O(1)
}
