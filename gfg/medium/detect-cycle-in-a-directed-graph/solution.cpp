class Solution {
public:
    bool isCyclic(int V, vector<vector<int>> &edges) {

        // Create adjacency list
        vector<vector<int>> adj(V);

        for(auto e : edges) {
            int u = e[0];
            int v = e[1];

            adj[u].push_back(v);
        }

        // Calculate indegree of every node
        vector<int> indegree(V, 0);

        for(int i = 0; i < V; i++) {
            for(int node : adj[i]) {
                indegree[node]++;
            }
        }

        // Put all nodes having indegree 0 into queue
        queue<int> q;

        for(int i = 0; i < V; i++) {
            if(indegree[i] == 0) {
                q.push(i);
            }
        }

        // BFS
        int count = 0;

        while(!q.empty()) {

            int node = q.front();
            q.pop();

            count++;

            for(int neighbour : adj[node]) {

                indegree[neighbour]--;

                if(indegree[neighbour] == 0) {
                    q.push(neighbour);
                }
            }
        }

        // If all nodes were processed → no cycle
        // If some nodes remain → cycle exists
        return count != V;
    }
};