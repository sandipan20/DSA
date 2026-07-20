class Solution {
public:
    bool possible(vector<vector<char>>& board,char &k,int &i,int &j){
        for(int x=0;x<9;x++){
            if(board[i][x]==k) return false;//for row
            if(board[x][j]==k) return false;//for col
            //for 3*3 matrix net
            int r=3*(i/3)+x/3;
            int c=3*(j/3)+x%3;
            if(board[r][c]==k) return false;
        }
        return true;
    }
    bool backtrack(vector<vector<char>>& board){
        for(int i=0;i<9;i++){
            for(int j=0;j<9;j++){
                if(board[i][j]=='.'){
                    for(char k='1';k<='9';k++){
                        if(possible(board,k,i,j)){
                            board[i][j]=k;
                            if(backtrack(board))
                                return true;
                            board[i][j]='.';
                        }
                    }
                    return false ;
                }
            }
        }
        return true;
    }
    void solveSudoku(vector<vector<char>>& board) {
        backtrack(board);
    }
};