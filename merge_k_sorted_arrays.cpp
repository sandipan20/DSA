#include<iostream>
using namespace std;
class Solution {
  public:
    vector<int> mergeArrays(vector<vector<int>> &mat) {
        // Code here
        vector<pair<int,pair<int,int>>> temp;
        for(int i=0;i<mat.size();i++){
            temp.push_back({mat[i][0],{i,0}});
        }
        // pair<int,pair<int,int>>
        vector<int> ans;
        priority_queue<pair<int,pair<int,int>>,vector<pair<int,pair<int,int>>>,greater<pair<int,pair<int,int>>>> heap(temp.begin(),temp.end());
        
        pair<int,pair<int,int>> element;
        int i,j;
        
        while(!heap.empty()){
            element=heap.top();
            heap.pop();
            ans.push_back(element.first);
            i=element.second.first;
            j=element.second.second;
            if(j+1<mat[i].size())
            heap.push({mat[i][j+1],{i,j+1}});
        }
        return ans;
    }
};
/*You are given a 2D matrix mat[][] of size n x m. Each row in the matrix is sorted in non-decreasing order. Your task is to merge all the rows and return a single sorted array that contains all the elements of the matrix.

Examples :

Input: mat[][] = [[1, 3, 5, 7],
                [2, 4, 6, 8], 
                [0, 9, 10, 11]]
Output: [0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11]
Explanation: Merging all elements from the 3 sorted arrays and sorting them results in: [0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11].
Input: mat[][] = [[1, 2, 3, 4], 
                [2, 2, 3, 4],
                [5, 5, 6, 6],
                [7, 8, 9, 9]]
Output: [1, 2, 2, 2, 3, 3, 4, 4, 5, 5, 6, 6, 7, 8, 9, 9] 
Explanation: Merging all elements from the 4 sorted arrays and sorting them results in:[1, 2, 2, 2, 3, 3, 4, 4, 5, 5, 6, 6, 7, 8, 9, 9]
Constraints:
1 ≤ n * m ≤ 105
1 ≤ mat[i][j] ≤ 106
*/