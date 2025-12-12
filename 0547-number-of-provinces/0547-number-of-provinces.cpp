class Solution {
public:
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n = isConnected.size();
        int cnt = 0;
        vector<vector<int>> adj(n);

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < isConnected[i].size(); j++) {
                if (i != j && isConnected[i][j])
                    adj[i].push_back(j);
            }
        }

        vector<bool> vis(n, false);
        for (int i = 0; i < n; i++) {
            if (!vis[i]) {
                cnt++;
                dfs(adj, vis, i);
            }
        }
        return cnt;
    }
    void dfs(vector<vector<int>>& adj, vector<bool>& vis, int i) {
        if (vis[i])
            return;
        vis[i] = true;
        for (int j = 0; j < adj[i].size(); j++) {
            dfs(adj, vis, adj[i][j]);
        }
    }
};