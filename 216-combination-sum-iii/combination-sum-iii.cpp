class Solution {
public:
    void backtrack(vector<vector<int>> &ans,vector<int> &temp,int itr,int &k,int n){
        if(temp.size()==k&&n==0){
            ans.push_back(temp);
            return;
        }
        if (itr > 9 || n < 0 || temp.size() > k)
            return;
        temp.push_back(itr);
        backtrack(ans,temp,itr+1,k,n-itr);
        temp.pop_back();
        backtrack(ans,temp,itr+1,k,n);
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>> ans;
        vector<int> temp;
        backtrack(ans,temp,1,k,n);
        return ans;
    }
};