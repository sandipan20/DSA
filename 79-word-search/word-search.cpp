class Solution {
public:
    bool backtrack(vector<vector<char>>& board, string &word,int i,int j,int idx,vector<vector<bool>> &temp){
        if(idx==word.size())
            return true;
        if(i<0||j<0||i>=board.size()||j>=board[0].size())
            return false;
        if(temp[i][j]||board[i][j]!=word[idx])
            return false;
        temp[i][j]=true;
        bool ans=backtrack(board,word,i+1,j,idx+1,temp)||backtrack(board,word,i,j+1,idx+1,temp)||backtrack(board,word,i-1,j,idx+1,temp)||backtrack(board,word,i,j-1,idx+1,temp);
        temp[i][j]=false;
        return ans;
    }
    bool exist(vector<vector<char>>& board, string &word) {
        int m=board.size(),n=board[0].size();

        vector<vector<bool>> temp(m,vector<bool>(n,false));
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(backtrack(board,word,i,j,0,temp))
                    return true;
            }
        }
        return false;
    }
};