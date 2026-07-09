#include<iostream>
using namespace std;
class Solution {
public:
    string minWindow(string s, string t) {
        unordered_map<char,int> mp;
        for(char c:t){
            mp[c]++;
        }
        int i=0,j=0,ans=INT_MAX,idx=-1;
        int total=t.size();
        while(j<s.size()){
            mp[s[j]]--;
            if(mp[s[j]]>=0) total--;

            while(!total&&i<=j){
                if(ans>j-i+1){
                    ans=j-i+1;
                    idx=i;
                }
                mp[s[i]]++;
                if(mp[s[i]]>0){
                    total++;
                }
                i++; 
            }
            j++;
        }
        if(idx==-1) return "";
        string strs="";
        for(int i=idx;i<idx+ans;i++){
            strs.push_back(s[i]);
        }
        return strs;
    }
};
/*Given two strings s and t of lengths m and n respectively, return the minimum window substring of s such that every character in t (including duplicates) is included in the window. If there is no such substring, return the empty string "".

The testcases will be generated such that the answer is unique.

 

Example 1:

Input: s = "ADOBECODEBANC", t = "ABC"
Output: "BANC"
Explanation: The minimum window substring "BANC" includes 'A', 'B', and 'C' from string t.
Example 2:

Input: s = "a", t = "a"
Output: "a"
Explanation: The entire string s is the minimum window.
Example 3:

Input: s = "a", t = "aa"
Output: ""
Explanation: Both 'a's from t must be included in the window.
Since the largest window of s only has one 'a', return empty string.
 

Constraints:

m == s.length
n == t.length
1 <= m, n <= 105
s and t consist of uppercase and lowercase English letters.
 

Follow up: Could you find an algorithm that runs in O(m + n) time?*/