class Solution{
    public:
    int maxLen(vector<int>&arr, int n)
    {   
        unordered_map<int, int> mp;
        int curr_sum = 0;
        int res;
        for(int i=0; i<n; i++) {
            curr_sum += arr[i];
            if(mp.find(curr_sum)==mp.end()) {
                mp.insert(make_pair(curr_sum, i));
            }
            else {
                int prev = mp[curr_sum];
                res = max(res, i-prev);
            }
            if(curr_sum == 0){
                res = max(res, i+1);
            }
        }
        return res;
    }
};
