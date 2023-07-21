int findPlatform(int arr[], int dep[], int n)
    {
        // Your code here
        sort(arr+0,arr+n);
        sort(dep+0,dep+n);
        int count=0;
        int j=0;
        int t=dep[0];
        for(int i=0;i<n;i++)
        {
            if(arr[i]>t)
            {
                // free platform available and hence used
                // t updated to time when another platform will be free
                j++;
                t=dep[j];
            }
            else
            {
                // no free platform available so new platform required
                count++;
            }
        }
        return count;
    }
