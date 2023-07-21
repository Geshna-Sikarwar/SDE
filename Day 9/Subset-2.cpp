void add(vector<int> a, int n,vector<vector<int>>&ans,int ind,vector<int>&ds)
    {
         
       
        ans.push_back(ds);
        
        for(int i=ind;i<n;i++)
        {
            if(i!=ind and a[i]<a[i-1])continue;
            //if(a[i]>target)break;
            ds.push_back(a[i]);
            find(i+1,target,a,ans,ds,n);
            ds.pop_back();
        }
    }
    vector<vector<int>> subsetsWithDup(vector<int>& a) {
        sort(a.begin(),a.end());
        vector<vector<int>>ans;
        int n=a.size();
        vector<int>ds;
       add(a,n,ans,0,ds);
       return ans;
    }
