class Solution {
public:
    int reversePairs(vector<int>& a) {
        map<int,vector<long long>>m;
        int n=a.size();
        for(int j=n-1;j>=0;j--)
        {
            long long x=2*a[j];
            for(int i=0;i<j;i++)
            {
                if((long long)a[i]>x)
                m[a[j]].push_back(a[i]);
            }
        }
        int c=0;
        for(auto i:m)
        {
            c+=i.second.size();
        }
        return c;
    }
};
