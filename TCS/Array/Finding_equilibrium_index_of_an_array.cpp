#include<iostream>
#include<vector>
using namespace std;
//broute force approach is:   [2,3,-1,8,4]
//one loop from index 1 to n-1
//and on the left hand side of first loop [i] calculate sum of all elements.
//and on the right hand side of the first loop [i] calculate sum of all elements.
// and compare both sides elements the moments both gets same then return that first loop index 
// int FindingEquilibriumIdx(vector<int>&v,int n)
// {
//     if(n==1)return 0;
//     if(n==2)
//     {
//         int right=0;
//         int left=v[0];
//         if(left==right)return 1;
//     }
//     for(int i=1;i<n-1;i++)
//     {
       
//         int leftSum=0;
//         for(int j=i-1;j>=0;j--)
//         {
//             leftSum=leftSum+v[j];
//         }
//         int rightSum=0;
//         for(int k=i+1;k<n;k++)
//         {
//             rightSum=rightSum+v[k];
//         }
//         if(leftSum==rightSum)
//         {
//             return i;
//         }
//     }
//     return -1;
// }
//Time complexity=O(n*n)
// int main()
// {
//     vector<int>v={0,1};
//     int n=v.size();
//     cout<<FindingEquilibriumIdx(v,n);

//     return 0;
// }

//now the optimal solution comes into picture 
/*
look going from i=1 to i<n-1 is good approach O(N) but 
finding left sum and right sum is taking O(n) more time 
so in optimal solution we reduce it by taking some space 
we will construct an array of name sum and will save sum 
at every index for example  [1 , 3 ,   4,       5,         7]
                        sum=[1,(1+3),(1+3+4),(1+3+4+5),(1+3+4+5+7)]
which is nothing but sum=[1,4,8,13,20] 
                        totalsum=20;
then now its is easy to find leftsum of every ele in O(1)time using this 
array look how it is:
                       for index i=2;
                       Leftsum=sum[i]-arr[i];
                       Rightsum=Total-sum[i];
*/

int FindingEquilibriumIdxx(vector<int>&v,int n)
{
    vector<int>sum(n);
    int Total=0;
    for(int i=0;i<n;i++)
    {
        Total+=v[i];//1-3-6
        sum[i]=Total;//1-3
    }

    for(int i=0;i<n;i++)
    {
        int Leftsum=sum[i]-v[i];
        int Rightsum=Total-sum[i];
        if(i==0) Leftsum=0;
        if(i==n-1) Rightsum=0;
        if(Leftsum==Rightsum)
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    vector<int>v={2,3,-1,8,4};
    int n=v.size();
    cout<<FindingEquilibriumIdxx(v,n);
    return 0;
}
//Time complix=O(n)
//space com=O(n)