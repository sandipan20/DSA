class Solution {
public:
    string longestPalindrome(string s) {
        int st=0;
        int len=0,n=s.length();

        for(int i=0;i<n;i++){
            int l=i,r=i;
            //odd
            while(l>=0&&r<n&&s[l]==s[r]){
                if (r - l + 1 > len) {
                    len = r - l + 1;
                    st = l;
                }
                l--;
                r++;
            }
            //even
            l=i,r=i+1;
            while(l>=0&&r<n&&s[l]==s[r]){
                if (r - l + 1 > len) {
                    len = r - l + 1;
                    st = l;
                }

                l--;
                r++;
            }
        }
        return s.substr(st,len);
    }
};