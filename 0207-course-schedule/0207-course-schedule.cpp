class Solution {
public:
    bool can = true;
    bool canFinish(int n, vector<vector<int>>& pre) {
        vector<vector<int>> adj(n);
        for (int i = 0; i < pre.size(); i++) {
                adj[pre[i][1]].push_back(pre[i][0]);
        }
        vector<bool> vis(n, false);
        vector<bool> path(n, false);
        for (int i = 0; i < n; i++) {
            if(!vis[i]){
                dfs(adj, vis,path, i);
            }
        }
        return can;
    }
    void dfs(vector<vector<int>>& adj, vector<bool>& vis,vector<bool>& path, int id){
        if(path[id])
        {
            can = false;
            return;
        }
        if(vis[id]) return;
        vis[id] = true;
        path[id] = true;
        for(int i : adj[id]){
                dfs(adj, vis,path, i);
        }
        path[id] = false;
    }
};