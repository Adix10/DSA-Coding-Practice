class Solution {
  public:
    bool dfs(int node, vector<vector<int>>& adj,
             vector<int>& vis, vector<int>& path) {
        vis[node] = 1;
        path[node] = 1;
        for (int x : adj[node]) {
            if (!vis[x]) {
                if (dfs(x, adj, vis, path))
                    return true;
            }
            else if (path[x]) {
                return true;
            }
        }
        path[node] = 0;
        return false;
    }
    bool isCyclic(vector<vector<int>>& adj) {
        int V = adj.size();
        vector<int> vis(V, 0);
        vector<int> path(V, 0);
        for (int i = 0; i < V; i++) {
            if (!vis[i]) {
                if (dfs(i, adj, vis, path))
                    return true;
            }
        }
        return false;
    }
};