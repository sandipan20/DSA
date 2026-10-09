class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        queue<pair<int,int>> q;
        for(int i=0;i<mat.size();i++)
        for(int j=0;j<mat[i].size();j++)
        if(!mat[i][j])
        q.push({i,j});
        else
        mat[i][j]=-1;

        int dx[]={-1,0,1,0};
        int dy[]={0,-1,0,1};

        while(!q.empty()){
            auto [x,y]=q.front();
            q.pop();
            for(int k=0;k<4;k++){
                int nx=x+dx[k];
                int ny=y+dy[k];
                if(nx>=0&&nx<mat.size()&&ny>=0&&ny<mat[nx].size()&&mat[nx][ny]==-1){
                    mat[nx][ny]=mat[x][y]+1;
                    q.push({nx,ny});
                }
            }
        }
        return mat;
    }
};