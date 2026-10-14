class Solution {
public:
    bool canFinish(int n, vector<vector<int>>& preq) {
        vector<int> inorder(n,0);
        vector<vector<int>> graph(n);
        for(int i=0;i<preq.size();i++){
            graph[preq[i][1]].push_back(preq[i][0]);
            inorder[preq[i][0]]++;
        }
        queue<int> q;
        for(int i=0;i<n;i++){
            if(!inorder[i])
                q.push(i);
        }
        int count=0;
        while(!q.empty()){
            int x=q.front();
            q.pop();
            count++;
            for(int i=0;i<graph[x].size();i++){
                inorder[graph[x][i]]--;
                if(!inorder[graph[x][i]])
                    q.push(graph[x][i]);
            }
        }
        return count==n?1:0;
    }
};