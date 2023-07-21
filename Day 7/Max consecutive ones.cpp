int findMaxConsecutiveOnes(vector<int>& a) {
        int c=0;
        int maxi=INT_MIN;
        int n=a.size();
        for(int i=0;i<n;i++)
        {
           if(a[i]==1)
           c++;
           else
           {
               maxi=max(maxi,c);
               c=0;
           }
        }
        maxi=max(maxi,c);
        return maxi;
    }
