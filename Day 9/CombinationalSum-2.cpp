   void find(int ind,int target,vector<int>a,vector<vector<int>>& ans,vector<int>& ds,int n)
    {
        
        if(target==0)
         {   ans.push_back(ds);
            return;}
        
        for(int i=ind;i<n;i++)
        {
            if(i>ind and a[i]==a[i-1])continue;
            if(a[i]>target)break;
            ds.push_back(a[i]);
            find(i+1,target-a[i],a,ans,ds,n);
            ds.pop_back();
        }
        //find(ind+1,target,a,ans,ds,n);
    }   
    vector<vector<int>> combinationSum2(vector<int>& a, int target) {
        sort(a.begin(),a.end());
        vector<vector<int>>ans;
        //set<vector<int>>ans;
        vector<int>ds;
        int n=a.size();
        find(0,target,a,ans,ds,n);
        return ans;
    }
