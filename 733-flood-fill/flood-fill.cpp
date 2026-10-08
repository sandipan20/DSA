class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        if(image[sr][sc]==color)
            return image;

        int prev=image[sr][sc];
        image[sr][sc]=color;
        queue<pair<int,int>> q;
        q.push({sr,sc});

        int dx[]={-1,0,+1,0};
        int dy[]={0,-1,0,+1};

        while(!q.empty()){
            int i=q.front().first;
            int j=q.front().second;
            q.pop();

            for(int x=0;x<4;x++){
                int nx=i+dx[x];
                int ny=j+dy[x];
                if(nx>=0&&nx<image.size()&&ny>=0&&ny<image[0].size()&&image[nx][ny]==prev){
                    image[nx][ny]=color;
                    q.push({nx,ny});
                }
            }
        }
        return image;
    }
};