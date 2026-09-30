class Solution {
    bool isvowel(char c) {
        string s="aeiouAEIOU";
        return s.find(c)<=9;
    }
public:
    string reverseVowels(string s) {
        int i=0,j=s.size()-1;
        while(i<j){
            if(isvowel(s[i])&&isvowel(s[j])){
                swap(s[i],s[j]);
                i++;
                j--;
            }
            if(!isvowel(s[i]))
                i++;
            if(!isvowel(s[j]))
                j--;
        }
        return s;
    }
};