class Solution {
public:
    int swimInWater(vector<vector<int>>& grid) {
        int n=grid.size();
        vector<vector<int>> dist(n,vector<int>(n,INT_MAX));
        priority_queue<vector<int>,vector<vector<int>>,greater<vector<int>>> pq;

        dist[0][0]=grid[0][0];
        pq.push({grid[0][0],0,0});

        int qx[]={-1,1,0,0};
        int qy[]={0,0,-1,1};

        while(!pq.empty()){
            vector<int> temp=pq.top();
            pq.pop();
            
            int cost=temp[0];
            int r=temp[1];
            int c=temp[2];

            if(cost>dist[r][c])
                continue;
            if(r==n-1&&c==n-1)
                return cost;

            for(int i=0;i<4;i++){
                int u=r+qx[i];
                int v=c+qy[i];

                if(u<0||u>=n||v<0||v>=n)
                    continue;
                int newcost=max(cost,grid[u][v]);
                if(newcost<dist[u][v]){
                    dist[u][v]=newcost;
                    pq.push({newcost,u,v});
                }
            }
        }
        return -1;
    }
};