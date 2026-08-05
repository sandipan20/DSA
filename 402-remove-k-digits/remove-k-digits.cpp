class Solution {
public:
    string removeKdigits(string num, int k) {
        int n=num.size();
        if(k>=n){
            return "0";
        }
        stack<int> st;
        for(int i=0;i<n;i++){
            while(!st.empty()&&num[st.top()]>num[i]&&k){
                st.pop();
                k--;
            }
            st.push(i);
        }
        while(k--){
            st.pop();
        }
        string ans;
        while(!st.empty()){
            ans.push_back(num[st.top()]);
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        int i=0;
        while(i<ans.size()&&ans[i]=='0'){
            i++;
        }
        return ans.substr(i).empty() ? "0" : ans.substr(i);
    }
};