class Solution {
public:
    int characterReplacement(string s, int k) {
        int ans=0,n=s.size(),left=0,topchar=0;
        vector<int> alph(26,0);
        for(int i=0;i<n;i++){
            alph[s[i]-'A']++;
            topchar=max(topchar,alph[s[i]-'A']);
            int winsize=i-left+1;
            int extra=winsize-topchar;
            while(extra>k){
                alph[s[left]-'A']--;
                left++;
                winsize=i-left+1;
                extra=winsize-topchar;
            }
            ans=max(ans,i-left+1);
        }
        return ans;
    }
};