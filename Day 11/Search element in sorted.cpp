int search(vector<int>& nums, int target) {
        int n=nums.size();
        int l=0,h=n-1;
        while(l<=h)
        {
            int mid=(l+h)/2;
            if(nums[mid]==target)
            return mid;
            if(nums[l]<=nums[mid])
            {
                if(nums[mid]>=target and nums[l]<target)
                h=mid-1;
                else
                l=mid+1;
            }
            else{
                if(target>=nums[mid] and nums[h]>target)
                l=mid+1;
                else
                h=mid-1;
            } 
                
            }
        
        return -1;
    }
