class Solution 
{
    public:
    //Function to find if there is a celebrity in the party or not.
    int celebrity(vector<vector<int> >& M, int n) 
    {
        // code here 
        int out[n]={0},in[n]={0};
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(M[i][j]==1)
                {
                    out[i]++;
                    in[j]++;
                }
            }
        }
        int ans;
        for(int i=0;i<n;i++)
        {
            if(out[i]==0 and (in[i]==n-1 and M[i][i]==0))
            return i;
        }
        return -1;
    }
};
