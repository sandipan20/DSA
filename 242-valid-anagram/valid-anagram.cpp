class Solution {
public:
    bool isAnagram(string s, string t) {
        int n=s.size();
        if(n!=t.size())
            return 0;
        vector<int> alph(26,0);
        for(int i=0;i<n;i++){
            alph[s[i]-'a']++;
            alph[t[i]-'a']--;
        }
        for(int i:alph){
            if(i!=0)
                return 0;
        }
        return 1;
    }
};