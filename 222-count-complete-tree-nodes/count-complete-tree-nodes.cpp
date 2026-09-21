/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
    int height(TreeNode*root,bool left=false){
        int h=0;
        while(root){
            if(left){
                h++;
                root=root->left;
            }
            if(!left){
                h++;
                root=root->right;
            }
        }
        return h;
    }
public:
    int countNodes(TreeNode* root) {
        if(!root)
            return 0;
        int left=height(root->left,1);
        int right=height(root->right);
        if(left==right)
            return (1<<(left+1))-1;
        return 1+countNodes(root->left)+countNodes(root->right);

    }
};