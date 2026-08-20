class Solution {
    int memoization(vector<int> &nums,vector<int> &dp,int idx){
        if(idx==0)
            return nums[0];
        if(idx==1)
            return max(nums[0],nums[1]);
        if(dp[idx]!=-1)
            return dp[idx];
        return dp[idx]=max(nums[idx]+memoization(nums,dp,idx-2),memoization(nums,dp,idx-1));
    }
public:
    int rob(vector<int>& nums) {
        int n=nums.size();
        if(n==1)
            return nums[0];
            
        vector<int> dp(n,-1);
        return memoization(nums,dp,n-1);
    }
};