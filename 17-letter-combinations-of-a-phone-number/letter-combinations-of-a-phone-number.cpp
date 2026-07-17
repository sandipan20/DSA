class Solution {
public:
    void backtrack(string &digits,vector<string> &ans,string &temp,int idx ,vector<string> &mp){
        if(idx==digits.size()){
            ans.push_back(temp);
            return;
        }
        for(char c:mp[digits[idx]-'0']){
            temp.push_back(c);
            backtrack(digits,ans,temp,idx+1,mp);
            temp.pop_back();
        }
    }
    vector<string> letterCombinations(string digits) {
        vector<string> mp={"","","abc", "def", "ghi",
            "jkl", "mno", "pqrs", "tuv", "wxyz"};
        vector<string> ans;
        string temp;
        backtrack(digits,ans,temp,0,mp);
        return ans;
    }
};