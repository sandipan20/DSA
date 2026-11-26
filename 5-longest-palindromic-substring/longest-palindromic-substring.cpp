
class Solution {
public:
    string longestPalindrome(string s) {
        int n = s.size();

        vector<vector<int>> dp(n, vector<int>(n, 0));

        for(int i = n-1; i >= 0; i--) {
            for(int j = i; j < n; j++) {

                if(i == j) {
                    dp[i][j] = 1;
                }
                else if(s[i] == s[j]) {// yaha mai fasa tha soch nahi paya tha kaise  ham fill kar rahe hai space ko
                    if(j-i == 1 || dp[i+1][j-1] > 0) {
                        dp[i][j] = j-i+1;
                    }
                }
            }
        }

        int range = 0;
        int starting_point = 0;

        for(int i = 0; i < n; i++) {
            for(int j = i; j < n; j++) {
                if(dp[i][j] > range) {
                    range = dp[i][j];
                    starting_point = i;
                }
            }
        }

        return s.substr(starting_point, range);
    }
};
