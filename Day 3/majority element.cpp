class Solution {
public:
    int majorityElement(vector<int>& a) {
        map<int,int>m;
        int n=a.size();
        for(int i=0;i<n;i++)
        {
            m[a[i]]++;
        }
        int x=n/2;
        pair<int,int>p={-1,-1};
        for(auto i:m)
        {
            if(i.second>x)
            {
               if(i.second>p.second)
               {
                   p.first=i.first;
                   p.second=i.second;
               }
            }
        }
        return p.first;
    }
};
