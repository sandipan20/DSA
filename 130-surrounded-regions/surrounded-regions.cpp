class Solution {
public:
    void solve(vector<vector<char>>& grid) {
       queue<pair<int,int>> q;
       int n=grid.size();
       int m=grid[0].size();

       for(int i = 0; i < n; i++) {
            if(grid[i][0]=='O') {
                grid[i][0] = 'z';
                q.push({i, 0});
            }

            if(grid[i][m - 1]=='O') {
                grid[i][m - 1] = 'z';
                q.push({i, m - 1});
            }
        }

        for(int j = 0; j < m; j++) {
            if(grid[0][j]=='O') {
                grid[0][j] = 'z';
                q.push({0, j});
            }

            if(grid[n - 1][j]=='O') {
                grid[n - 1][j] = 'z';
                q.push({n - 1, j});
            }
        } 

        int dx[] = {-1, 0, 1, 0};
        int dy[] = {0, -1, 0, 1};

        while(!q.empty()) {
            int i = q.front().first;
            int j = q.front().second;
            q.pop();

            for(int x = 0; x < 4; x++) {
                int nx = i + dx[x];
                int ny = j + dy[x];

                if(nx >= 0 && nx < n &&
                   ny >= 0 && ny < m &&
                   grid[nx][ny] == 'O') {

                    grid[nx][ny] = 'z';
                    q.push({nx, ny});
                }
            }
        }
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                if(grid[i][j]=='O')
                    grid[i][j]='X';
                if(grid[i][j] == 'z')
                    grid[i][j]='O';
            }
        }
    }
};