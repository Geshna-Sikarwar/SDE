class Solution {
public:
    int findKthLargest(vector<int>& a, int k) {
        priority_queue <int, vector<int>, greater<int>> m;
        int n=a.size();
        for(int i=0;i<n;i++)
        {
            m.push(a[i]);
            if(m.size()>k)
            m.pop();
        }
        return m.top();
    }
};
