#include<bits/stdc++.h>
int find(int i,int j,int n,int m,string &s,string &t,vector<vector<int>>&dp)
{
	if(i==n or j==m)
	return 0;
	if(dp[i][j]!=-1)
	return dp[i][j];
	if(s[i]==t[j])return dp[i][j]=1+find(i+1,j+1,n,m,s,t,dp);
	else
	return dp[i][j]=max(find(i+1,j,n,m,s,t,dp),find(i,j+1,n,m,s,t,dp));
}
int lcs(string s, string t)
{
	//Write your code here
	int n=s.size();
	int m=t.size();
	vector<vector<int>>dp(n,vector<int>(m,-1));
	return find(0,0,n,m,s,t,dp);
}  
