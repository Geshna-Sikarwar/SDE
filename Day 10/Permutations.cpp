void find(vector<int>& a,vector<vector<int>>& ans,int n,int ind)
    {
        if(ind==n)
        {
            ans.push_back(a);
            return;
        }
        for(int i=ind;i<n;i++)
        {
            swap(a[i],a[ind]);
            find(a,ans,n,ind+1);
            swap(a[i],a[ind]);
        }
    }
    vector<vector<int>> permute(vector<int>& a) {
        vector<vector<int>>ans;
        //vector<int>v;
        int n=a.size();
        find(a,ans,n,0);
        return ans;
    }
