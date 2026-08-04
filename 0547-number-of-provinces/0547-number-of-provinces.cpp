class Solution {
public:

    void dfs(vector<vector<int>>& isConnected, vector<bool>& visited, int node) {

        visited[node] = true;

        int n = isConnected.size();

        // Visit all neighbours
        for(int neighbour = 0; neighbour < n; neighbour++) {

            if(isConnected[node][neighbour] == 1 && !visited[neighbour]) {
                dfs(isConnected, visited, neighbour);
            }
        }
    }

    int findCircleNum(vector<vector<int>>& isConnected) {

        int n = isConnected.size();

        vector<bool> visited(n, false);

        int provinces = 0;

        // Visit every city
        for(int city = 0; city < n; city++) {

            if(!visited[city]) {

                provinces++;

                dfs(isConnected, visited, city);
            }
        }

        return provinces;
    }
};