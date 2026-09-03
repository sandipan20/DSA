class Solution {
    // int rec(vector<int>& coins, int amount){
    //     if(amount == 0)
    //         return 0;
    //     if(amount<0)
    //         return INT_MAX;
    //     int ans=INT_MAX;
    //     for(int i:coins){
    //         int result=rec(coins,amount-i);
    //         if(result!=INT_MAX)
    //             ans=min(ans,result+1);
    //     }
    //     return ans;
    // }

    int memoization(vector<int>& coins, int amount,vector<int> &dp){
        if(amount==0)
            return 0;
        if(amount<0)
            return INT_MAX;
        if(dp[amount]!=-1)
            return dp[amount];

        int ans=INT_MAX;
        for(int i:coins){
            int result=memoization(coins,amount-i,dp);
            if(result!=INT_MAX)
                ans=min(ans,result+1);
        }
        return dp[amount]=ans;
    }
public:
    int coinChange(vector<int>& coins, int amount) {
        vector<int> dp(amount+1,-1);
        // int ans=rec(coins,amount);
        int ans= memoization(coins,amount,dp);
        if(ans==INT_MAX)
            return -1;
        return ans;
    }
};