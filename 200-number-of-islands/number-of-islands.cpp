class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        int island=0;
        int r=grid.size();
        int c=grid[0].size();

        int dx[]={-1,0,1,0};
        int dy[]={0,-1,0,1};

        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){

                if(grid[i][j]=='1'){
                    island++;

                    queue<pair<int,int>> q;
                    q.push({i,j});
                    grid[i][j]='0';

                    while(!q.empty()){
                        int x=q.front().first;
                        int y=q.front().second;
                        q.pop();

                        for(int k=0;k<4;k++){
                            int nr=x+dx[k];
                            int nc=y+dy[k];

                            if(nr>=0&&nr<r&&nc>=0&&nc<c&&grid[nr][nc]=='1'){
                                grid[nr][nc]='0';
                                q.push({nr,nc});
                            }
                        }
                    }
                }
            }
        }
        return island;
    }
};