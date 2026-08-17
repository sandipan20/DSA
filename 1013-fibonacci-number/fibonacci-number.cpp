class Solution {
    int dp_fib(vector<int> &dp,int n){
        if(n<=1)
            return n;

        if(dp[n]!=-1)
            return dp[n];
        
        return dp[n] = dp_fib(dp,n-1)+dp_fib(dp,n-2); 
    }
public:
    int fib(int n) {
        vector<int> dp(n+1,-1); 
        return dp_fib(dp,n);
    }
};