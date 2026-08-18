class Solution {
    int dyanamicrec(int i,int n,vector<int> &dp){
        if(i==n)
            return 1;
        if(i>n)
            return 0;
        if(dp[i]!=-1)
            return dp[i];
        return dp[i]=dyanamicrec(i+1,n,dp)+dyanamicrec(i+2,n,dp);
    }
public:
    int climbStairs(int n) {
        vector<int>dp(n+2,-1);
        return dyanamicrec(0,n,dp);
    }
};