#include<bits/stdc++.h>
using namespace std;
// Recursion with memoization
int solution(int arr[],int i,int n,vector<int>&dp)
{
    if(i>=n)return 0;
    if(dp[i]!=-1)return dp[i];
    int step1=arr[i]+solution(arr,i+1,n,dp);
    int step2=arr[i]+solution(arr,i+2,n,dp);
    return dp[i]=min(step1,step2);
}

// int main()
// {
//  int arr[]={10,20,5,2};
//  int n=4;
//  vector<int>dp(n+1,-1);
//  cout<<min(solution(arr,0,n,dp),solution(arr,1,n,dp));
// return 0;
// }



// dp with tabulation
 int main()
{
    int arr[]={10,20,5,2};
    int n=sizeof(arr)/sizeof(arr[0]);
    int dp[n+1];
    dp[0]=arr[0];
    dp[1]=arr[1];
    for(int i=2;i<=n;i++)
    {
        dp[i]=arr[i]+min(dp[i-1],dp[i-2]);
    }
    cout<<min(dp[n-1],dp[n-2]);
}