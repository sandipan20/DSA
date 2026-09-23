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
public:
    TreeNode* deleteNode(TreeNode* root, int key) {
        if(!root)
            return nullptr;
        if(key>root->val){
            root->right=deleteNode(root->right,key);
        } else if(key<root->val){
            root->left=deleteNode(root->left,key);
        } else{
            if(!root->left)
                return root->right;
            if(!root->right)
                return root->left;
            //if both exist we replace using either the greatest in left sub tree or smallest in the right sub tree. since for smallerst in right sub tree we traverse least we go for smallest in right;
            TreeNode* temp=root->right;
            while(temp->left){
                temp=temp->left;
            }
            root->val=temp->val;

            // now the replaced val is 2 times already we need to delete that val also so we call the fn again and delete the duplicate val again
            root->right=deleteNode(root->right,temp->val);
        }
        return root;
    }
};