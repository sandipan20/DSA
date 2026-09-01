class Solution {
    // int rec(string &s,int idx){
    //     if(idx==s.size())
    //         return 1;
    //     if(s[idx]=='0')
    //         return 0;
    //     int ans= rec(s,idx+1);
    //     if(idx+1<s.size()){// for combo of 2
    //         int num=(s[idx] - '0') * 10 + (s[idx + 1] - '0');
    //         if (num >= 10 && num <= 26)
    //             ans+= rec(s,idx+2);
    //     }
    //     return ans;
    // }
    // int memoization(string &s,vector<int> &dp,int idx){
    //     if(idx==s.size())
    //         return 1;
    //     if(s[idx]=='0')
    //         return 0;
    //     if(dp[idx]!=-1)
    //         return dp[idx];
    //     int ans= memoization(s,dp,idx+1);
    //     if(idx+1<s.size()){
    //         int num=(s[idx] - '0') * 10 + (s[idx + 1] - '0');
    //         if (num >= 10 && num <= 26)
    //             ans+= memoization(s,dp,idx+2);
    //     }
    //     return dp[idx]=ans;
    // }
public:
    int numDecodings(string s) {
        // return rec(s,0);
        // vector<int> dp(s.size(),-1);
        // return memoization(s,dp,0);

        //tabulation
        int n=s.size();
        // vector<int> dp(n+1,0);
        // dp[n]=1;
        // for(int i=n-1;i>=0;i--){
        //     if(s[i]=='0'){
        //         dp[i]=0;
        //         continue;
        //     }
        //     dp[i]=dp[i+1];
        //     //for combo of 2
        //     if(i+1<n){
        //         int num=(s[i]-'0')*10+(s[i+1]-'0');
        //         if(num>=10&&num<=26){
        //             dp[i]+=dp[i+2];
        //         }
        //     }
        // }
        // return dp[0];

        //tabulation in O(1) space;
        int prev1=0,prev=1;
        for(int i=n-1;i>=0;i--){
            int curr=0;
            if(s[i]!='0'){
                curr=prev;
                if (i + 1 < n) {
                    int num = (s[i] - '0') * 10 + (s[i + 1] - '0');
                    if (num >= 10 && num <= 26)
                        curr += prev1;
                }
            }
            prev1=prev;
            prev=curr;
        }
        return prev;
    }
};