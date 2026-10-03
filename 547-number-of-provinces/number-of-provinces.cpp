class Solution {
    void dfsrec(vector<vector<int>>& isConnected,vector<bool> &visited,int node){
        visited[node]=1;
        for(int i=0;i<isConnected[node].size();i++){
            if(isConnected[node][i]&&!visited[i]){
                dfsrec(isConnected,visited,i);
            }
        }
    }
public:
    int findCircleNum(vector<vector<int>>& isConnected) {
        int V=isConnected.size();
        vector<bool> visited(V,0);
        int count=0;
        for(int i=0;i<V;i++){
            if(!visited[i]){
                count++;
                dfsrec(isConnected,visited,i);
            }
        }
        return count;
    }
};