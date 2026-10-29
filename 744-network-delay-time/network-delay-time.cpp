class Solution {
public:
    int networkDelayTime(vector<vector<int>>& times, int n, int k) {
        vector<vector<pair<int,int>>> adj(n+1);//{v,w}
        for(auto& itr:times){
            adj[itr[0]].push_back({itr[1],itr[2]});
        }
        vector<int> dist(n+1,INT_MAX);
        dist[k]=0;
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;//distance,node
        pq.push({0,k});

        while(!pq.empty()){
            auto [w,u]=pq.top();
            pq.pop();

            if(w<dist[u])
                continue;
            
            for(auto& itr:adj[u]){
                int nextnode=itr.first;
                int weight=itr.second;
                if(dist[nextnode]>dist[u]+weight){
                    dist[nextnode]=dist[u]+weight;
                    pq.push({dist[nextnode],nextnode});
                }
            }
        }
        int ans=0;
        for(int i=1;i<=n;i++){
            if(dist[i]==INT_MAX)
                return -1;

            ans=max(dist[i],ans);
        }
        return ans;
    }
};