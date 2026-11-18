class Solution {
  public:
    bool isCycle(vector<vector<int>>& adj) {
        int V = adj.size();
        vector<int> visited(V, 0);
        for (int i = 0; i < V; i++) {
            if (!visited[i]) {
                queue<pair<int, int>> q;
                q.push({i, -1});
                visited[i] = 1;
                while (!q.empty()) {
                    int node = q.front().first;
                    int parent = q.front().second;
                    q.pop();
                    for (int neighbour : adj[node]) {
                        if (!visited[neighbour]) {
                            visited[neighbour] = 1;
                            q.push({neighbour, node});
                        }
                        else if (neighbour != parent) {
                            return true;
                        }
                    }
                }
            }
        }
        return false;
    }
};