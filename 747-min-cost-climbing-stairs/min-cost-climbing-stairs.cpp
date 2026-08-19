class Solution {
    int memoization(vector<int>& cost,vector<int>& dp,int i){
        if(i<=1)
            return 0;
        if(dp[i]!=-1)
            return dp[i];
        return dp[i]=min(cost[i-1]+memoization(cost,dp,i-1),cost[i-2]+memoization(cost,dp,i-2));
    }
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int n=cost.size();
        vector<int> dp(n+1,-1);
        return memoization(cost,dp,n);
    }
};