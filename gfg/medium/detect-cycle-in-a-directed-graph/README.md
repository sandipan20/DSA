# Directed Graph Cycle

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Given a directed graph with  **V**  vertices numbered from 0 to V - 1 and E directed edges. The graph is represented using a 2D array  **edges[][]**  of size E, where each entry edges[i] = [u, v] denotes a directed edge from vertex u to vertex v.

Check whether the graph contains any cycle. Return true if there exists at least one cycle in the graph; otherwise, return false.

 **Examples:** 

```
Input: V = 4, edges[][] = [[0, 1], [1, 2], [2, 0], [2, 3]]

Output: true
Explanation: The diagram clearly shows a cycle 0 -> 1 -> 2 -> 0
```

```
Input: V = 4, edges[][] = [[0, 1], [0, 2], [1, 2], [2, 3]]

Output: false
Explanation: no cycle in the graph
```

 **Constraints:** 
1 ≤ V ≤ 105
0 ≤ E ≤ 105
0 ≤ edges[i][0], edges[i][1] < V

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-02T04:20:34.144Z  

```cpp
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
```

---

[View on GeeksforGeeks](https://practice.geeksforgeeks.org/problems/detect-cycle-in-a-directed-graph/1)