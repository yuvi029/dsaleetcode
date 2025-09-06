class Solution {
private:
    bool dfs(int node, int col, vector<int>& color, vector<vector<int>>& graph) {
        color[node] = col;
        for (int nei : graph[node]) {
            if (color[nei] == -1) {
                // If DFS fails on neighbor, propagate failure
                if (!dfs(nei, 1 - col, color, graph)) {
                    return false;
                }
            } else if (color[nei] == col) {
                // Conflict: neighbor has same color
                return false;
            }
        }
        return true;
    }

public:
    bool isBipartite(vector<vector<int>>& graph) {
        int v = graph.size();
        vector<int> color(v, -1);  // Initialize all nodes as uncolored

        // Handle disconnected components
        for (int i = 0; i < v; i++) {
            if (color[i] == -1) {
                // Start DFS from an uncolored node
                if (!dfs(i, 0, color, graph)) {
                    return false;
                }
            }
        }
        return true;
    }
};
