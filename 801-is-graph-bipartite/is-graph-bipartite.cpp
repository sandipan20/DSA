class Solution {
public:
    bool isBipartite(vector<vector<int>>& graph) {
        int n=graph.size();
        vector<int> colour(n,-1);
        for(int i=0;i<n;i++){
            if(colour[i]!=-1)
                continue;

            queue<int> q;
            colour[i]=0;
            q.push(i);
            while(!q.empty()){
                int x=q.front();
                q.pop();
                for(int i:graph[x]){
                    if(colour[i]==-1){
                        colour[i]=1-colour[x];
                        q.push(i);
                    }else if(colour[i]==colour[x]){
                        return 0;
                    }
                }
            }
        }
        return true;
    }
};