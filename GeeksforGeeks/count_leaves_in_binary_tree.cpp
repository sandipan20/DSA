#include<iostream>
using namespace std;
struct Node
{
    int data;
    Node* left;
    Node* right;
}; 

// Class Solution
class Solution {
  public:
    // Function to count the number of leaf nodes in a binary tree.
    void traverse (Node* root,int &sum){
        if(!root) return;
        if(!root->left && !root->right){
            sum++;
            return;
        }
        traverse(root->left,sum);
        traverse(root->right,sum);
    }
    int countLeaves(Node* root) {
        // write code here
        int sum=0;
        traverse(root,sum);
        return sum;
    }
};
/*Given a Binary Tree of size n, You have to count leaves in it. For example, there are two leaves in the following tree


 

Examples:

Input:
Given Tree is  

Output: 3
Explanation: Three leaves are 3, 5 and 1.
Input:
Given Tree is

Output: 4
Explanation: Four leaves are 20, 40, 65 and 80.
Input:
Given Tree is  

Output: 3
Explanation: Three leaves are 20, 27 and 40.
 Constraints:
1<= number of nodes <= 105
1<= node->data <= 105
*/