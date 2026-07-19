class Solution {
public:
    bool placeble(int n,vector<string> &temp,int idx, int i){
        for(int j=0;j<idx;j++){
            if(temp[j][i]=='Q') return false;
        }
        for(int j=idx-1,k=i-1;j>=0&&k>=0;j--,k--){
            if(temp[j][k]=='Q') return false;
        }
        for(int j=idx-1,k=i+1;j>=0&&k<n;j--,k++){
            if(temp[j][k]=='Q') return false;
        }

        return true;
    }
    void backtrack(int n,vector<vector<string>> &ans,vector<string> &temp, int idx){
        if(idx==n){
            ans.push_back(temp);
            return;
        }
        for(int i=0;i<n;i++){
            if(placeble(n,temp,idx,i)){
                temp[idx][i]='Q';
                backtrack(n,ans,temp,idx+1);
                temp[idx][i]='.';
            }
        }
    }
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> ans;
        vector<string> temp(n,string(n,'.'));
        backtrack(n,ans,temp,0);
        return ans;
    }
};