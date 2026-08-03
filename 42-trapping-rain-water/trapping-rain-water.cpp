class Solution {
public:
    int trap(vector<int>& height) {
        int trap_water=0,n=height.size();
        stack<int> st;
        for(int i=0;i<n;i++){
            while(!st.empty()&&height[i]>height[st.top()]){
                int base=st.top();
                st.pop();
                if(st.empty())
                    break;
                int left=st.top();
                int width=i-left-1;
                int h=min(height[left],height[i])-height[base];
                trap_water+=width*h;
            }
            st.push(i);
        }
        return trap_water;
    }
};