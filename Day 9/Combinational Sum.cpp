void find(vector<int>& a, int ind,int t,vector<vector<int>>&ans,vector<int>&ds,int n)
   {
      if(ind==n)
      {
          if(t==0)
          ans.push_back(ds);
          return;
      }
      if(a[ind]<=t)
      {
          ds.push_back(a[ind]);
          find(a,ind,t-a[ind],ans,ds,n);
          ds.pop_back();
      }
      find(a,ind+1,t,ans,ds,n);
   }
    vector<vector<int>> combinationSum(vector<int>& a, int t) {
        vector<vector<int>>ans;
        vector<int>ds;
        int n=a.size();
        find(a,0,t,ans,ds,n);
        return ans;
    }
