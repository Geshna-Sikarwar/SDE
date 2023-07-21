 vector<string>ans;
    
    int dx[4] = {0 , 0 , 1, -1};
    int dy[4] = {1 , -1 , 0, 0};
     
    void dfs(int row , int col , string path , vector<vector<bool>>&vis , vector<vector<int>>&m , int n)
    {
        if(row == n-1 && col == n-1)
        {
            ans.push_back(path);
            return ;
        }
        
        for(int i = 0 ; i < 4 ; i++)
        {
            int x = row + dx[i];
            int y = col + dy[i];
            
            
            
            if(x >= 0 && x < n && y >= 0 && y < n && vis[x][y] == false && m[x][y] == 1)
            {
                vis[x][y] = true;
                if(i == 0)
                    dfs(x , y , path+'R' , vis , m , n);
                else if(i == 1)
                    dfs(x , y , path+'L' , vis , m , n);
                else if(i == 2)
                    dfs(x , y , path+'D' , vis , m , n);
                else if(i == 3)
                    dfs(x , y , path+'U' , vis , m , n);    
                
                vis[x][y] = false;
                
            }
        }
    }
    
    
    vector<string> findPath(vector<vector<int>> &m, int n) {
        
        if(m[0][0] == 0)
            return ans;
         
        string path = "";
        vector<vector<bool>>vis(n , vector<bool>(n ,false));
        vis[0][0] = true;
        dfs(0 , 0 , path , vis , m , n);
        return ans;
    }
