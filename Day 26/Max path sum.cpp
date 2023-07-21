#include <bits/stdc++.h> 
int f(int i,int j,vector<vector<int>>&a,int n,int m,vector<vector<int>>&dp)
{
    if(i>n-1 or j>m-1)
    return 1e9;
    if(i==n-1 and j==m-1)
    return a[i][j];
    if(dp[i][j]!=-1)return dp[i][j];
    int r=a[i][j]+f(i,j+1,a,n,m,dp);
    int d=a[i][j]+f(i+1,j,a,n,m,dp);
    return dp[i][j]=min(r,d);
}
int minSumPath(vector<vector<int>> &a) {
    // Write your code here.
    int n=a.size();
    int m=a[0].size();
    vector<vector<int>>dp(n,vector<int>(m,-1));
    return f(0,0,a,n,m,dp);
}
