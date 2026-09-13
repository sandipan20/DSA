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
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> ans;

        if (!root)
            return ans;

        stack<TreeNode*> st;
        TreeNode* curr = root;

        while (curr != nullptr || !st.empty()) {

            // Go as far left as possible
            while (curr != nullptr) {
                st.push(curr);
                curr = curr->left;
            }

            TreeNode* temp = st.top();

            // Right subtree exists
            if (temp->right != nullptr) {
                curr = temp->right;
            }
            else {
                // No right subtree -> process current node
                st.pop();
                ans.push_back(temp->val);

                // Process ancestors whose right subtree is already processed
                while (!st.empty() && st.top()->right == temp) {
                    temp = st.top();
                    st.pop();
                    ans.push_back(temp->val);
                }
            }
        }

        return ans;
    }
};