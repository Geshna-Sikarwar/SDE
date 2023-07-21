void add(vector<int> a, int n,vector<int>&ans,int sum,int i)
    {
        if(i==n)
        {ans.push_back(sum);
        return;}
        add(a,n,ans,sum+a[i],i+1);
        add(a,n,ans,sum,i+1);
    }
    vector<int> subsetSums(vector<int> a, int n)
    {
       vector<int>ans;
       add(a,n,ans,0,0);
       sort(ans.begin(),ans.end());
       return ans;
    }
