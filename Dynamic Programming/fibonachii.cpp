#include <bits/stdc++.h>
using namespace std;
// using only recursion not optimaized till yet
int f(int n)
{
    if (n <= 1)
        return n;
    return f(n - 1) + f(n - 2);
}
int main()
{
    int n = 20;
    cout << f(n);
    return 0;
}
// TC=2^n and SC=2^n system stack call 
// now using dp in optimized way


int f(int n, vector<int>&dp)
{
    if (n <= 1)
        return n;
    if(dp[n]!=-1) return dp[n];
    return dp[n]=f(n - 1,dp) + f(n - 2,dp);
}
int main()
{
    int n = 20;
    vector<int>dp(n+1,-1);
    cout << f(n,dp);
    return 0;
}
// TC=O(n) and SC=o(n) + for system stack call O(n)