class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        queue<pair<int,int>> q;
        
        for(int i=0;i<grid.size();i++)
            for(int j=0;j<grid[i].size();j++)
                if(grid[i][j]==2)
                    q.push({i,j});
        
        int timer=0;
        int dx[]={-1,0,1,0};
        int dy[]={0,-1,0,1};

        while(!q.empty()){
            int s=q.size();
            bool rotted=0;

            while(s--){
                int i=q.front().first;
                int j=q.front().second;
                q.pop();

                for(int k=0;k<4;k++){
                    int nx=i+dx[k];
                    int ny=j+dy[k];

                    if(nx>=0&&nx<grid.size()&&ny>=0&&ny<grid[nx].size()&&grid[nx][ny]==1){
                        grid[nx][ny]=2;
                        q.push({nx,ny});
                        rotted=1;
                    }
                }
            }
            if(rotted)
                timer++;
        }
        for(int i=0;i<grid.size();i++)
            for(int j=0;j<grid[i].size();j++)
                if(grid[i][j]==1)
                    return -1;

        return timer;
    }
};