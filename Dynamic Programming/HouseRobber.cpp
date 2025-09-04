#include<iostream>
#include<vector>
using namespace std;
int solve(int arr[],int idx,int n,vector<int>&dp)
{
    if(idx>=n)return 0;
    if(dp[idx]!=-1)return dp[idx];
    int steal=arr[idx]+solve(arr,idx+2,n,dp);
    int skip=solve(arr,idx+1,n,dp);
    return dp[idx]=max(steal,skip);
}
// int main()
// {
//     int arr[]={1,2,3,1};
//     int n=4;
//     vector<int>dp(n+1,-1);
//     cout<<solve(arr,0,n,dp);
//     return 0;
// }
//dp with tabulation
int main()
{
    int arr[]={6,5,5,7,4};
    int n=5;
    int dp[n];
    dp[0]=arr[0];
    dp[1]=max(arr[0],arr[1]);
    for(int i=2;i<n;i++)
    {
        dp[i]=max(arr[i]+dp[i-2],dp[i-1]);
    }
    cout<<dp[n-1];
    return 0;
} 