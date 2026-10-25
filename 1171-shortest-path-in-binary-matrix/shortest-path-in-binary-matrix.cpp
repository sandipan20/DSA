class Solution {
public:
    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
        int n=grid.size();
        if(grid[n-1][n-1]||grid[0][0]==1)
            return -1;

        vector<vector<bool>> visited(n,vector<bool>(n,0));
        queue<vector<int>> q;
        q.push({0,0,1});
        visited[0][0]=1;
        int qx[]={-1,0,1,0,-1,-1,1,1};
        int qy[]={0,-1,0,1,-1,1,-1,1};
        while(!q.empty()){
            vector<int> temp=q.front();
            q.pop();
            if(temp[0]==n-1&&temp[1]==n-1)
                return temp[2];

            for(int i=0;i<8;i++){
                int x=temp[0]+qx[i];
                int y=temp[1]+qy[i];

                if(x>=0&&x<n&&y>=0&&y<n&& !grid[x][y] && !visited[x][y]){
                    visited[x][y]=1;
                    q.push({x,y,temp[2]+1});
                }
            }
        } 
        return -1;    
    }
};