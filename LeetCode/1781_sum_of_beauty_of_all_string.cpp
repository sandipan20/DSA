#include<iostream>
using namespace std;
class Solution {
public:
    int beautySum(string s) {
        int totalBeauty = 0;
        int n = s.size();

        for (int i = 0; i < n; i++) {
            vector<int> alp(26, 0);
            for (int j = i; j < n; j++) {
                alp[s[j] - 'a']++;
                
                int maxi = 0, mini = 501;
                for (int k = 0; k < 26; k++) {
                    if (alp[k] > 0) {
                        maxi = max(maxi, alp[k]);
                        mini = min(mini, alp[k]);
                    }
                }
                totalBeauty += (maxi - mini);
            }
        }
        return totalBeauty;
    }
};

/*The beauty of a string is the difference in frequencies between the most frequent and least frequent characters.

For example, the beauty of "abaacc" is 3 - 1 = 2.
Given a string s, return the sum of beauty of all of its substrings.

 

Example 1:

Input: s = "aabcb"
Output: 5
Explanation: The substrings with non-zero beauty are ["aab","aabc","aabcb","abcb","bcb"], each with beauty equal to 1.
Example 2:

Input: s = "aabcbaa"
Output: 17
 

Constraints:

1 <= s.length <= 500
s consists of only lowercase English letters.*/