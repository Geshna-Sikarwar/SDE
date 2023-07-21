class Solution {
public:
    int romanToInt(string s) {
         unordered_map <char,int> m{
        {'I',1},{'V',5},{'X',10},{'L',50},{'C',100},{'D',500},{'M',1000}};
        int ans=0;
        int i=0;
        while(i<s.size())
        {
            if(m[s[i+1]]<=m[s[i]])
            ans+=m[s[i]];
            else
            ans-=m[s[i]];
            i++;
        }
        return ans;
    }
};
