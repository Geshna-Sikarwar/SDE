class Solution {
public:
    bool isCycle(vector<vector<int>> &adj, vector<int> &vis, int &vertex){
        
        // It is still under processing and you are visiting it again
        // means it has cycle
        if(vis[vertex] == 1){
            return true;
        }

        vis[vertex] = 1; // Mark the node as processing

        for(auto &i: adj[vertex]){
            // Visit the node if it has not been processed
            if(vis[i] != 2){
                if(isCycle(adj, vis, i)) return true;
            }
        }

        vis[vertex] = 2; // Mark it as processed

        return false;
    }

    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        int n = prerequisites.size();

        if(numCourses == 0 or numCourses == 1) return true;

        vector<vector<int>> adj(numCourses);
        vector<int> vis(numCourses, 0);

        for(int i = 0; i < n; i++){
            adj[prerequisites[i][0]].push_back(prerequisites[i][1]);
        }

        // Colours and their meaning
        // 0 -> Not Visited
        // 1 -> You are processing that node and it is in the call stack
        // 2 -> Node is processed

        for(int vertex = 0; vertex < numCourses; vertex++){
            if(vis[vertex] == 0){
                if(isCycle(adj, vis, vertex)) return false;
            }
        }

        return true;
    }
};
