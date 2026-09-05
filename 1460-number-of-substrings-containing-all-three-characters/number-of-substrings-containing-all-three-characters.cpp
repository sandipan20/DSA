class Solution {
public:
    int numberOfSubstrings(string s) {
        int a=-1,b=-1,c=-1,n=s.size();
        int ans=0;
        for(int i=0;i<n;i++){
            if(s[i]=='a')
                a=i;
            else if(s[i]=='b')
                b=i;
            else
                c=i;
            int last=min({a,b,c});
            if(last!=-1)
                ans+=last+1;
        }
        return ans;
    }
};