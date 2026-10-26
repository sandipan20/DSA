class Solution {
public:
    int findCheapestPrice(int n, vector<vector<int>>& flights, int src, int dst, int k) {
        vector<int> distance(n,INT_MAX);
        distance[src]=0;

        for(int i=0;i<=k;i++){
            vector<int> temp=distance;
            for(auto & itr:flights){
                int u=itr[0];
                int v=itr[1];
                int cost=itr[2];

                if(distance[u]!=INT_MAX){
                    temp[v]=min(temp[v],distance[u]+cost);
                }
            }
            distance=temp;
        }
        return distance[dst] == INT_MAX ? -1 : distance[dst];
    }
};