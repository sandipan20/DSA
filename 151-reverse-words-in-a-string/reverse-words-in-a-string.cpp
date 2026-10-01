class Solution {
public:
    string reverseWords(string s) {
        string ans="";
        int n =s.size();
        for(int i=n-1;i>=0;i--){
            if(s[i]==' ')
                continue;
            if(s[i]!=' '){
                int j=i;
                while(j>=0&&s[j]!=' '){
                    j--;
                }
                if(!ans.empty())
                    ans+=" ";
                ans+=s.substr(j+1,i-j);
                i=j;
            }
        }
        return ans;
    }
};