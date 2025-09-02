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
int main()
{
    int arr[]={1,2,3,1};
    int n=4;
    vector<int>dp(n+1,-1);
    cout<<solve(arr,0,n,dp);
    return 0;
}