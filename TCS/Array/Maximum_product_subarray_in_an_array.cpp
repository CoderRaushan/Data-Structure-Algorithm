//Method 1
// #include <iostream>
// #include <vector>
// #include<climits>
// using namespace std;
// void subarrayWithMaxProduct(vector<int> &v,vector<vector<int>>&ans,int &n)
// {
//     for(int i=0;i<n;i++)
//     {
//         vector<int>temp;
//         for(int j=i;j<n;j++)
//         {
//             temp.push_back(v[j]);
//             ans.push_back(temp);
//         }
//     }
// }
// int findMaximumProduct(vector<vector<int>>&ans)
// {
//     int maxProduct = INT_MIN;
    
//     for(const auto& ele:ans)
//     {
//         int currentMax=1;
//         for(const auto& it:ele)
//         {
//             currentMax=currentMax*it;
//             maxProduct=max(maxProduct,currentMax);
//         }
//     }
//     return maxProduct;
// }
// int main()
// {
//     vector<int> v = {-2, 3, -4, 0};
//     int n=v.size();
//     vector<vector<int>> ans;
//     subarrayWithMaxProduct(v,ans,n);
//     cout<<findMaximumProduct(ans);
//     return 0;
// }//time and space is=O(n^2)


//Method 2
// #include <iostream>
// #include <vector>
// #include<climits>
// using namespace std;
// int subarrayWithMaxProduct(vector<int> &v,int &n)
// {
//     int maxProduct = INT_MIN;
//     for(int i=0;i<n;i++)
//     {
//         for(int j=i;j<n;j++)
//         {
//             int currentMax=1;
//             for(int k=i;k<=j;k++)
//             {
//                 currentMax=currentMax*v[k];
//                 maxProduct=max(maxProduct,currentMax);
//             }
//         }
//     }
//     return maxProduct;
// }
//Time com=O(n^3) space = O(1) 
// int main()
// {
//     vector<int> v = {-2, 3, -4, 0};
//     int n=v.size();
//     cout<<subarrayWithMaxProduct(v,n);
//     return 0;
// }

#include <iostream>
#include <vector>
#include<climits>
using namespace std;
int subarrayWithMaxProduct(vector<int> &v,int &n)
{
    int maxProduct = INT_MIN;
    for(int i=0;i<n;i++)
    {
        int currentMax=1;
        for(int j=i;j<n;j++)
        {
            currentMax=currentMax*v[j];
            maxProduct=max(maxProduct,currentMax);
        }
    }
    return maxProduct;
}//Time=O(n^2) ans space is=O(1) optimal solution
int main()
{
    vector<int> v = {-2, 3, -4, 0};
    int n=v.size();
    cout<<subarrayWithMaxProduct(v,n);
    return 0;
}