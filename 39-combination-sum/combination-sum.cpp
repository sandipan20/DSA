class Solution {
public:
    void backtrack(int idx,vector<int>& candidates, int target,vector<vector<int>> &ans,vector<int> &temp){
        if(target==0){
            ans.push_back(temp);
            return;
        }
        for(int i=idx;i<candidates.size();i++){
            if(candidates[i]>target)
                continue;
            temp.push_back(candidates[i]);
            backtrack(i,candidates,target-candidates[i],ans,temp);
            temp.pop_back();
        }
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> temp;
        backtrack(0,candidates,target,ans,temp);
        return ans;
    }
};