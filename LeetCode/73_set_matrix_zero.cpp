#include<iostream>
using namespace std;
class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int m=matrix.size(),n=matrix[0].size();
        vector<vector<int>> copy=matrix;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(copy[i][j]==0){
                    //for row
                    int k=0;
                    while(k<n){
                        matrix[i][k]=0;
                        k++;
                    }
                    //for column
                    k=0;
                    while(k<m){
                        matrix[k][j]=0;
                        k++;
                    }
                }
            }
        }
    }
};
/*Given an m x n integer matrix matrix, if an element is 0, set its entire row and column to 0's.

You must do it in place.

 

Example 1:


Input: matrix = [[1,1,1],[1,0,1],[1,1,1]]
Output: [[1,0,1],[0,0,0],[1,0,1]]
Example 2:


Input: matrix = [[0,1,2,0],[3,4,5,2],[1,3,1,5]]
Output: [[0,0,0,0],[0,4,5,0],[0,3,1,0]]
 

Constraints:

m == matrix.length
n == matrix[0].length
1 <= m, n <= 200
-231 <= matrix[i][j] <= 231 - 1
 

Follow up:

A straightforward solution using O(mn) space is probably a bad idea.
A simple improvement uses O(m + n) space, but still not the best solution.
Could you devise a constant space solution?*/