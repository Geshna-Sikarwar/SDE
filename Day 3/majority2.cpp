class Solution {
public:
    vector<int> majorityElement(vector<int>& a) {
       int n=a.size();
       map<int,int>m;
       for(int i=0;i<n;i++)
       {
           m[a[i]]++;
       }
       int x=n/3;
       vector<int>v;
       for(auto i:m)
       {
           if(i.second>x)
           v.push_back(i.first);
       }
       return v;
    }
};
