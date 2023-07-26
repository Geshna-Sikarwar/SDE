#include <bits/stdc++.h>

pair<int,int> missingAndRepeating(vector<int> &arr, int n)
{
	// Write your code here 
	int v[n+1]={0};
	pair<int,int>ans;
	for(int i=0;i<n;i++)
	{
		v[arr[i]]++;
	}
	for(int i=1;i<=n;i++)
	{
		if(v[i]==2)
		ans.second=i;
		if(v[i]==0)
		ans.first=i;
	}
	return ans;
	
}

