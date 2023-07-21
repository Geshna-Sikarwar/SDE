bool comp(Job a,Job b)
    {
        return (a.profit>b.profit);
    }
    //Function to find the maximum profit and the number of jobs done.
    vector<int> JobScheduling(Job arr[], int n) 
    { 
        // your code here
        sort(arr,arr+n,comp);
        int pro=0;
        vector<int>v(n,-1);
        for(int i=0;i<n;i++)
        {
            int x=arr[i].dead;
            if(v[x]==-1)
            {
               v[x]=1;
               pro+=arr[i].profit;
            }
        }
        return pro;
        
    } 
