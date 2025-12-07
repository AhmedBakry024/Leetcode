class Solution {
public:
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        vector<vector<int>> adjList(n);

        for (const vector<int>& edge : edges) {
            adjList[edge[0]].push_back(edge[1]);
            adjList[edge[1]].push_back(edge[0]);
        }

        vector<bool> visited(n, false);
        return dfs(adjList, source, destination, visited);
    }

    bool dfs(const vector<vector<int>>& adjList, int source, int destination, vector<bool>& visited) {
        if (source == destination) {
            return true;
        }

        visited[source] = true;

        for (int neighbor : adjList[source]) {
            if (!visited[neighbor]) {
                if (dfs(adjList, neighbor, destination, visited)) {
                    return true; 
                }
            }
        }

        return false;
    }
};