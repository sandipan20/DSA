// Given a string s, which may contain duplicate characters, your task is to generate and return an array of all unique permutations of the string. You can return your answer in any order.

// Examples:

// Input: s = "ABC"
// Output: ["ABC", "ACB", "BAC", "BCA", "CAB", "CBA"]
// Explanation: Given string ABC has 6 unique permutations.
// Input: s = "ABSG"
// Output: ["ABGS", "ABSG", "AGBS", "AGSB", "ASBG", "ASGB", "BAGS", "BASG", "BGAS", "BGSA", "BSAG", "BSGA", "GABS", "GASB", "GBAS", "GBSA", "GSAB", "GSBA", "SABG", "SAGB", "SBAG", "SBGA", "SGAB", "SGBA"]
// Explanation: Given string ABSG has 24 unique permutations.
// Input: s = "AAA"
// Output: ["AAA"]
// Explanation: No other unique permutations can be formed as all the characters are same.
// Constraints:
// 1 <= s.size() <= 9
// s contains only Uppercase english alphabets

#include<iostream>
using namespace std;

class Solution {
  public:
    void permute(string &s,vector<string> &ans,vector<bool> &occurence,string &temp){
        if(temp.size()==s.size()){
            ans.push_back(temp);
            return;
        }
        for(int i=0;i<s.size();i++){
            if(occurence[i]) continue;
            if(i>0 && s[i]==s[i-1] && !occurence[i-1]) continue;
            occurence[i]=1;
            temp.push_back(s[i]);
            permute(s,ans,occurence,temp);
            temp.pop_back();
            occurence[i]=false;
        }
    }
    vector<string> findPermutation(string &s) {
        // Code here there
        sort(s.begin(),s.end());
        vector<string> ans;
        vector<bool> occurence(s.size(),0);
        string temp="";
        permute(s,ans,occurence,temp);
        return ans;
    }
};
