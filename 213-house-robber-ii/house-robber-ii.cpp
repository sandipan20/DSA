class Solution {
    // int memoization(vector<int>& nums, vector<int>& dp, int i, int j) {
    //     if (i > j)
    //         return 0;

    //     if (i == j)
    //         return nums[i];

    //     if (dp[i] != -1)
    //         return dp[i];

    //     return dp[i] = max(
    //         nums[i] + memoization(nums, dp, i + 2, j),
    //         memoization(nums, dp, i + 1, j)
    //     );
    // }

    int tabulation(vector<int>& nums,int st,int end){
        int n=nums.size();
        vector<int> dp(n,-1);
        dp[st]=nums[st];
        if(st==end)
            return dp[st];
        dp[st+1]=max(nums[st],nums[st+1]);
        for(int i=st+2;i<=end;i++){
            dp[i]=max(nums[i]+dp[i-2],dp[i-1]);
        }
        return dp[end];
    }

public:
    int rob(vector<int>& nums) {
        int n = nums.size();

        if (n == 1)
            return nums[0];

        // vector<int> dp1(n, -1);
        // vector<int> dp2(n, -1);
        // return max(
        //     memoization(nums, dp1, 0, n - 2),
        //     memoization(nums, dp2, 1, n - 1)
        // );

        return max(tabulation(nums,0,n-2),tabulation(nums,1,n-1));
    }
};