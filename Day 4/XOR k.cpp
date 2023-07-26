#include<bits/stdc++.h>
int subarraysWithSumK(vector < int > arr, int k) {
    // Write your code here
	int n = arr.size();
	int xr =0;
	map<int,int>mp;
	mp[xr]++;
	int cnt =0;
	
	for(int i=0;i<n;i++){
		xr = xr^arr[i];
		int x = xr^k;
		cnt+=mp[x];
		mp[xr]++;
	}
	return cnt;
}
