/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {

    void storeParent(unordered_map<TreeNode*, TreeNode*> &mp,
                     TreeNode* root) {

        if (!root)
            return;

        queue<TreeNode*> q;
        q.push(root);

        while (!q.empty()) {

            TreeNode* temp = q.front();
            q.pop();

            if (temp->left) {
                mp[temp->left] = temp;
                q.push(temp->left);
            }

            if (temp->right) {
                mp[temp->right] = temp;
                q.push(temp->right);
            }
        }
    }

public:

    vector<int> distanceK(TreeNode* root, TreeNode* target, int k) {

        unordered_map<TreeNode*, TreeNode*> mp;

        // Store the parent for every node
        storeParent(mp, root);

        // BFS starting from target
        queue<TreeNode*> q;
        unordered_set<TreeNode*> visited;

        q.push(target);
        visited.insert(target);

        int distance = 0;

        while (!q.empty()) {

            int s = q.size();

            if (distance == k)
                break;

            for (int i = 0; i < s; i++) {

                TreeNode* node = q.front();
                q.pop();

                // Go left
                if (node->left &&
                    !visited.count(node->left)) {

                    visited.insert(node->left);
                    q.push(node->left);
                }

                // Go right
                if (node->right &&
                    !visited.count(node->right)) {

                    visited.insert(node->right);
                    q.push(node->right);
                }

                // Go to parent
                if (mp.count(node) &&
                    !visited.count(mp[node])) {

                    visited.insert(mp[node]);
                    q.push(mp[node]);
                }
            }

            distance++;
        }

        vector<int> ans;

        while (!q.empty()) {
            ans.push_back(q.front()->val);
            q.pop();
        }

        return ans;
    }
};