#include<iostream>
using namespace std;
class Solution {
  public:
    int kthSmallest(vector<vector<int>> &mat, int k) {
        int n = mat.size();
        
        // Min heap
        priority_queue< pair<int, pair<int,int>>,vector<pair<int, pair<int,int>>>,greater<pair<int, pair<int,int>>>> heap;
        
        for(int i=0;i<n;i++){
            heap.push({mat[i][0],{i,0}});
        }
        while(--k){
            auto top=heap.top();
            heap.pop();
            int row = top.second.first;
            int col = top.second.second;
            
            if(col + 1 < n) {
                heap.push({mat[row][col+1], {row, col+1}});
            }
        }
        return heap.top().first;
    }
};
/*Given a matrix mat[][] of size n*n, where each row and column is sorted in non-decreasing order. Find the kth smallest element in the matrix.

Examples:
Input: mat[][] = [[16, 28, 60, 64], k = 3
                [22, 41, 63, 91],
                [27, 50, 87, 93],
                [36, 78, 87, 94]]
Output: 27
Explanation: 27 is the 3rd smallest element.
Input: mat[][] = [[10, 20, 30, 40], k = 7
                [15, 25, 35, 45],
                [24, 29, 37, 48],
                [32, 33, 39, 50]] 
Output: 30
Explanation: 30 is the 7th smallest element.
Constraints:
1 ≤ n ≤ 500
1 ≤ mat[i][j] ≤ 104
1 ≤ k ≤ n*n
*/