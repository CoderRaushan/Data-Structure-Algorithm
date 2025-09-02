#include<bits/stdc++.h>
using namespace std;
int solve(int row,int col,vector<vector<int>>&dp)
{
  if(row==1 && col==1)return 1;
  if(row==0 || col==0)return 0;
  if(dp[row][col]!=-1)return dp[row][col];
  int right=solve(row,col-1,dp);
  int down=solve(row-1,col,dp);
  return dp[row][col]=right+down;
}
int main()
{
 int row=3;
 int col=3;
 vector<vector<int>>dp(row+1,vector<int>(col+1,-1));
 cout<<solve(row,col,dp);
 return 0;
}