class Solution {
public:
    void backtrack(vector<int> &nums,vector<vector<int>> &ans,vector<int> &temp,int idx){
        if(idx==nums.size()){
            ans.push_back(temp);
            return;
        }
        temp.push_back(nums[idx]);
        backtrack(nums,ans,temp,idx+1);
        temp.pop_back();
        while(idx+1<nums.size()&&nums[idx+1]==nums[idx]) idx++;
        backtrack(nums,ans,temp,idx+1);
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>> ans;
        vector<int> temp;
        backtrack(nums,ans,temp,0);
        return ans;
    }
};