#include<iostream>
using namespace std;
class Solution {
public:
    int largestRectangleArea(vector<int>& height) {
        int n = height.size();
        int ans = 0;
        stack<int> st;

        for(int i = 0; i < n; i++) {
            while(!st.empty() && height[st.top()] > height[i]) {
                int idx = st.top();
                st.pop();

                int width = st.empty() ? i : (i - st.top() - 1);
                ans = max(ans, height[idx] * width);
            }
            st.push(i);
        }

        while(!st.empty()) {
            int idx = st.top();
            st.pop();

            int width = st.empty() ? n : (n - st.top() - 1);
            ans = max(ans, height[idx] * width);
        }

        return ans;
    }
};

/*Given an array of integers heights representing the histogram's bar height where the width of each bar is 1, return the area of the largest rectangle in the histogram.

 

Example 1:


Input: heights = [2,1,5,6,2,3]
Output: 10
Explanation: The above is a histogram where width of each bar is 1.
The largest rectangle is shown in the red area, which has an area = 10 units.
Example 2:


Input: heights = [2,4]
Output: 4
 

Constraints:

1 <= heights.length <= 105
0 <= heights[i] <= 104*/