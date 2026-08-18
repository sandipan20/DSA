class Solution {
    // int dyanamicrec(int i,int n,vector<int> &dp){
    //     if(i==n)
    //         return 1;
    //     if(i>n)
    //         return 0;
    //     if(dp[i]!=-1)
    //         return dp[i];
    //     return dp[i]=dyanamicrec(i+1,n,dp)+dyanamicrec(i+2,n,dp);
    // }
public:
    int climbStairs(int n) {
        // vector<int>dp(n+2,-1);
        // dp[n]=1;
        // dp[n+1]=0;
        // for(int i=n-1;i>=0;i--){
        //     dp[i]=dp[i+1]+dp[i+2];
        // }
        // return dp[0];


        int last=0,secondlast=1;
        for(int i=n-1;i>=0;i--){
            int curr=secondlast+last;
            last=secondlast;
            secondlast=curr;
        }

        return secondlast;
    }
};