class Solution {
public:
    int countPaths(int n, vector<vector<int>>& roads) {
        const int  mod=1e9+7;
        //transform the roads info into the adj matrix;
        vector<vector<pair<int,int>>> adj(n);
        for(auto & itr: roads){
            adj[itr[0]].push_back({itr[1],itr[2]});
            adj[itr[1]].push_back({itr[0],itr[2]});
        }
        //now star to solve the q using the dijkastra algo with path info as well
        vector<long long> dist(n,LLONG_MAX);
        vector<int> ways(n,0);
        priority_queue<pair<long long,int>,vector<pair<long long,int>>,greater<pair<long long,int>>> pq;//time , node
        dist[0]=0;
        ways[0]=1;
        pq.push({0,0});
        // do the dijkastra algo
        while(!pq.empty()){
            auto [t,u]=pq.top();
            pq.pop();
            if(t>dist[u])// if the min dist at u then skip
                continue;
            for(auto &[v,time]:adj[u]){
                long long newt=t+time;//calculate the dist

                if(newt<dist[v]){//if new min found then update and push in pq
                    dist[v]=newt;
                    ways[v]=ways[u];
                    pq.push({newt,v});
                } else if(newt==dist[v]){// if the same min is found again then update the no of ways by increasing it by the no of ways we can reach the prev node(u)
                    ways[v]=(ways[v]+(long long)ways[u])%mod;
                }
            }
        }
        return ways[n-1];//return the no of ways to reach the last node;
    }
};