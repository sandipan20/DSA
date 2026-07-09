#include<iostream>
using namespace std;
class Solution {
public:
    int maxrectangle(vector<int>& height) {
        int n = height.size();
        int ans = 0;
        stack<int> st;

        for (int i = 0; i < n; i++) {
            while (!st.empty() && height[st.top()] > height[i]) {
                int idx = st.top();
                st.pop();
                int width = st.empty() ? i : (i - st.top() - 1);
                ans = max(ans, height[idx] * width);
            }
            st.push(i);
        }

        while (!st.empty()) {
            int idx = st.top();
            st.pop();
            int width = st.empty() ? n : (n - st.top() - 1);
            ans = max(ans, height[idx] * width);
        }

        return ans;
    }

    int maximalRectangle(vector<vector<char>>& matrix) {
        if (matrix.empty()) return 0;

        int row = matrix.size();
        int col = matrix[0].size();
        vector<int> height(col, 0);
        int ans = 0;

        for (int i = 0; i < row; i++) {
            for (int j = 0; j < col; j++) {
                height[j] = (matrix[i][j] == '1') ? height[j] + 1 : 0;
            }
            ans = max(ans, maxrectangle(height));
        }

        return ans;
    }
};
/*Given a rows x cols binary matrix filled with 0's and 1's, find the largest rectangle containing only 1's and return its area.

 

Example 1:


Input: matrix = [["1","0","1","0","0"],["1","0","1","1","1"],["1","1","1","1","1"],["1","0","0","1","0"]]
Output: 6
Explanation: The maximal rectangle is shown in the above picture.
Example 2:

Input: matrix = [["0"]]
Output: 0
Example 3:

Input: matrix = [["1"]]
Output: 1
 

Constraints:

rows == matrix.length
cols == matrix[i].length
1 <= rows, cols <= 200
matrix[i][j] is '0' or '1'.*/