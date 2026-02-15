#include<iostream>
using namespace std;
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};
class Solution {
public:
    void inorder(TreeNode* root,vector<int> &lnr){
        if(!root) return ;
        inorder(root->left,lnr);
        lnr.push_back(root->val);
        inorder(root->right,lnr);
    }
    int minDiffInBST(TreeNode* root) {
        vector<int> lnr;
        inorder(root,lnr);
        int diff=INT_MAX;
        for(int i=1;i<lnr.size();i++){
            int curr=lnr[i]-lnr[i-1];
            diff=min(diff,curr);
        }
        return diff;

    }
};
/*Given the root of a Binary Search Tree (BST), return the minimum difference between the values of any two different nodes in the tree.

 

Example 1:


Input: root = [4,2,6,1,3]
Output: 1
Example 2:


Input: root = [1,0,48,null,null,12,49]
Output: 1
 

Constraints:

The number of nodes in the tree is in the range [2, 100].
0 <= Node.val <= 105
 

Note: This question is the same as 530: https://leetcode.com/problems/minimum-absolute-difference-in-bst/*/