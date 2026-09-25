class Solution {
public:
    void dfs(int i, vector<int>&visited, vector<vector<int>>&edges){
        visited[i]=1;
        for(auto &e:edges[i]){
            if(!visited[e]){
                visited[e]=1;
                dfs(e, visited, edges);
            }
        }
    }

    int countComponents(int n, vector<vector<int>>& edges) {
        // Build the adj list;
        vector<vector<int>> graph(n);
        for(auto &conn: edges){
            graph[conn[0]].push_back(conn[1]);
            graph[conn[1]].push_back(conn[0]);
        }

        int count=0;
        vector<int> visited(n, 0);
        for(int i=0; i<n; i++){
            if(!visited[i]){
                count++;
                dfs(i, visited, graph);
            }
        }

        return count;
    }
};
