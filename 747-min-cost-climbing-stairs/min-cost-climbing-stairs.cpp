class Solution {
    // int memoization(vector<int>& cost,vector<int>& dp,int i){
    //     if(i<=1)
    //         return 0;
    //     if(dp[i]!=-1)
    //         return dp[i];
    //     return dp[i]=min(cost[i-1]+memoization(cost,dp,i-1),cost[i-2]+memoization(cost,dp,i-2));
    // }
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int n=cost.size();
        // vector<int> dp(n+1,-1);

        // return memoization(cost,dp,n);

        //tabulation
        // dp[0]=0,dp[1]=0;

        // for(int i=2;i<n+1;i++){
        //     dp[i]=min(cost[i-1]+dp[i-1],cost[i-2]+dp[i-2]);
        // }
        // return dp[n];
        int two_jump=0,one_jump=0;
        for(int i=2;i<n+1;i++){
            int curr=min(cost[i-1]+one_jump,cost[i-2]+two_jump);
            two_jump=one_jump;
            one_jump=curr;
        }
        return one_jump;
    }
};