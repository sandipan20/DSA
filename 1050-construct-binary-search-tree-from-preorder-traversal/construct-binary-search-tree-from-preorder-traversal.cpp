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
    TreeNode* build(vector<int>& preorder, int& idx, int last_node) {
        if (idx >= preorder.size() || preorder[idx] > last_node) {
            return nullptr;
        }

        TreeNode* root = new TreeNode(preorder[idx++]);

        root->left = build(preorder, idx, root->val);

        root->right = build(preorder, idx, last_node);

        return root;
    }

public:
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        int idx=0;
        return build(preorder, idx, INT_MAX);
    }
};