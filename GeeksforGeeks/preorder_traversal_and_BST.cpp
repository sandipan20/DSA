#include<iostream>
using namespace std;
// User function Template for C++

class Solution {
  public:
    int canRepresentBST(int arr[], int N) {
        // code here
        int i;
        stack<int> low,high;
        low.push(INT_MIN);
        high.push(INT_MAX);
        for(i=0;i<N;i++){
            if(arr[i]<low.top()) return 0;// if the element is small than top of lower
            
            while(arr[i]>high.top()){
                high.pop();
                low.pop();
            }
            int left=low.top();
            low.pop();
            int right=high.top();
            high.pop();
            low.push(arr[i]);
            high.push(right);
            low.push(left);
            high.push(arr[i]);
        }
        return N==i;
    }
};
/*Given an array arr[ ] of size N consisting of distinct integers, write a program that returns 1 if given array can represent preorder traversal of a possible BST, else returns 0.

Example 1:

Input:
N = 3
arr = {2, 4, 3}
Output: 1
Explaination: Given arr[] can represent
preorder traversal of following BST:
               2
                \
                 4
                /
               3
Example 2:

Input:
N = 3
Arr = {2, 4, 1}
Output: 0
Explaination: Given arr[] cannot represent
preorder traversal of a BST.
Your Task:
You don't need to read input or print anything. Your task is to complete the function canRepresentBST() which takes the array arr[] and its size N as input parameters and returns 1 if given array can represent preorder traversal of a BST, else returns 0.

Expected Time Complexity: O(N)
Expected Auxiliary Space: O(N)

Constraints:
1 ≤ N ≤ 105
0 ≤ arr[i] ≤ 105
*/