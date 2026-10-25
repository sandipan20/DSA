class Solution {
public:
    int minimumEffortPath(vector<vector<int>>& heights) {
        int n=heights.size();
        int m=heights[0].size();

        vector<vector<int>> dist(n,vector<int>(m,INT_MAX));

        priority_queue<vector<int>,vector<vector<int>>,greater<vector<int>>> pq;

        dist[0][0]=0;
        pq.push({0,0,0});

        int dx[]={-1,1,0,0};
        int dy[]={0,0,-1,1};

        while(!pq.empty()){
            vector<int> temp=pq.top();
            pq.pop();

            if(dist[temp[1]][temp[2]]<temp[0])
                continue;
            
            if(temp[1]==n-1&&temp[2]==m-1)
                return temp[0];
            
            for(int i=0;i<4;i++){
                int x=temp[1]+dx[i];
                int y=temp[2]+dy[i];

                if(x<0||x>=n||y<0||y>=m)
                    continue;
                
                int diff=abs(heights[x][y]-heights[temp[1]][temp[2]]);
                int newk=max(temp[0],diff);

                if(newk<dist[x][y]){
                    dist[x][y]=newk;
                    pq.push({newk,x,y});
                }
            }
        }
        return dist[n-1][m-1];
    }
};