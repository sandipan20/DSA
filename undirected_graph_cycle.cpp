#include<iostream>
using namespace std;
class Solution {// using dfs
public:
    bool detect(int n, int parent, vector<vector<int>>& adj, vector<bool>& visited) {
        visited[n] = 1;
        for (int i = 0; i < adj[n].size(); i++) {
            if (adj[n][i] == parent) continue;

            if (visited[adj[n][i]]) return true;

            if (detect(adj[n][i], n, adj, visited))
                return true;
        }
        return false;
    }

    bool isCycle(int V, vector<vector<int>>& edges) {
        // Build adjacency list from edge list
        vector<vector<int>> adj(V);
        for (auto& e : edges) {
            adj[e[0]].push_back(e[1]);
            adj[e[1]].push_back(e[0]);
        }

        vector<bool> visited(V, 0);
        for (int i = 0; i < V; i++) {
            if (!visited[i] && detect(i, -1, adj, visited))
                return true;
        }
        return false;
    }
};
class Solution {// using bfs
  public:
    bool bfs(int start, vector<vector<int>>& adj, vector<int>& visited){
        queue<pair<int,int>> q;
        
        visited[start] = 1;
        q.push(make_pair(start, -1));
        
        while(!q.empty()){
            int node = q.front().first;
            int parent = q.front().second;
            q.pop();
            
            for(int i = 0; i < adj[node].size(); i++){
                int next = adj[node][i];
                
                if(parent == next) continue;
                
                if(visited[next]) return 1;
                
                visited[next] = 1;
                q.push(make_pair(next, node));
            } 
        }
        return 0;
    }

    bool isCycle(int V, vector<vector<int>>& edges) {
        vector<vector<int>> adj(V); 
        
        for(int i = 0; i < edges.size(); i++){
            int u = edges[i][0];
            int v = edges[i][1];
            
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        
        vector<int> visited(V, 0);
        
        for(int i = 0; i < V; i++){
            if(!visited[i]){
                if(bfs(i, adj, visited)) return 1;
            }
        }
        
        return 0;
    }
};
/*Given an undirected graph with V vertices and E edges, represented as a 2D vector edges[][], where each entry edges[i] = [u, v] denotes an edge between vertices u and v, determine whether the graph contains a cycle or not.

Note: The graph can have multiple component.

Examples:

Input: V = 4, E = 4, edges[][] = [[0, 1], [0, 2], [1, 2], [2, 3]]
Output: true
Explanation: 
 
1 -> 2 -> 0 -> 1 is a cycle.
Input: V = 4, E = 3, edges[][] = [[0, 1], [1, 2], [2, 3]]
Output: false
Explanation: 
 
No cycle in the graph.
Constraints:
1 ≤ V, E ≤ 105
0 ≤ edges[i][0], edges[i][1] < V*/