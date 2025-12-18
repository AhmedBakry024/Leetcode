class Solution {
public:
    vector<bool> checkIfPrerequisite(int n, vector<vector<int>>& pre, vector<vector<int>>& queries) {
        vector<vector<int>> adj(n);
        for(int i = 0; i<pre.size(); i++)
            adj[pre[i][0]].push_back(pre[i][1]);

        vector<bool> vis(n,false);
        vector<bool> ans;
        for(int i=0;i<queries.size();i++){
            fill(vis.begin(), vis.end(), false);
            ans.push_back(dfs(adj, vis, queries[i][0],queries[i][1]));
        }
        return ans;
    }
    bool dfs(vector<vector<int>>& adj, vector<bool>& vis, int source, int dest){
        if(vis[source]) return false;
        if(source == dest) return true;
        vis[source] = true;
        for(int nei : adj[source]){
            if (dfs(adj, vis, nei, dest))
                return true;
        }
        return false;
    }
};