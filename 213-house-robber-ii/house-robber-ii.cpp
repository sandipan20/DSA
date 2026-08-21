class Solution {
    int memoization(vector<int>& nums, vector<int>& dp, int i, int j) {
        if (i > j)
            return 0;

        if (i == j)
            return nums[i];

        if (dp[i] != -1)
            return dp[i];

        return dp[i] = max(
            nums[i] + memoization(nums, dp, i + 2, j),
            memoization(nums, dp, i + 1, j)
        );
    }

public:
    int rob(vector<int>& nums) {
        int n = nums.size();

        if (n == 1)
            return nums[0];

        vector<int> dp1(n, -1);
        vector<int> dp2(n, -1);

        return max(
            memoization(nums, dp1, 0, n - 2),
            memoization(nums, dp2, 1, n - 1)
        );
    }
};