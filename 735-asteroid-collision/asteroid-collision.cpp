class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int> st;
        for(int x:asteroids){
            bool destroyed = 0;
            while(!st.empty()&&st.top()>0&&x<0){
                if(st.top()<-x){
                    st.pop();
                } else if(st.top()==-x){
                    st.pop();
                    destroyed=1;
                    break;
                } else{
                    destroyed=1;
                    break;
                }
            }
            if(!destroyed){
                st.push(x);
            }
        }
        vector<int> ans(st.size());
        for(int i=st.size()-1;i>=0;i--){
            ans[i]=st.top();
            st.pop();
        }
        return ans;
    }
};