int trap(vector<int>& h) {
        int n=h.size();
        int l=0,r=n-1;
        int maxl=0,maxr=0;
        int ans=0;
        while(l<=r){
          if(h[l]<=h[r]){
             if(h[l]<maxl)
             ans+=maxl-h[l];
             else
             maxl=h[l];
             l++;
          }
          else{
             if(h[r]<maxr)
             ans+=maxr-h[r];
             else
             maxr=h[r];
             r--;
          }
        }
        return ans;
    }
