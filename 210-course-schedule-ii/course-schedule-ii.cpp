class Solution {
public:
    vector<int> findOrder(int n, vector<vector<int>>& preq) {
        vector<vector<int>> graph(n);
        vector<int> inorder(n,0);
        for(int i=0;i<preq.size();i++){
            graph[preq[i][1]].push_back(preq[i][0]);
            inorder[preq[i][0]]++;
        }

        queue<int> q;

        for(int i=0;i<n;i++){
            if(!inorder[i])
                q.push(i);
        }
        vector<int> ans;
        int counter =0;
        while(!q.empty()){
            int x=q.front();
            ans.push_back(x);
            q.pop();
            counter++;
            for(int i=0;i<graph[x].size();i++){
                inorder[graph[x][i]]--;
                if(!inorder[graph[x][i]])
                    q.push(graph[x][i]);
            }
        }
        return (counter==n)?ans:vector<int> {};
    }
};