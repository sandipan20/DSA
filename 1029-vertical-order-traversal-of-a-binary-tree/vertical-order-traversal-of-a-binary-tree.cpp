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
    vector<vector<int>> verticalTraversal(TreeNode* root) {

        // map: column -> vector of {row, value}
        map<int, vector<pair<int, int>>> mp;

        // queue: {node, {column, row}}
        queue<pair<TreeNode*, pair<int, int>>> q;

        q.push({root, {0, 0}});

        while (!q.empty()) {

            TreeNode* front = q.front().first;

            int col = q.front().second.first;
            int row = q.front().second.second;

            q.pop();

            if (!front)
                continue;

            // Store {row, value} in this column
            mp[col].push_back({row, front->val});

            // Left child
            q.push({front->left, {col - 1, row + 1}});

            // Right child
            q.push({front->right, {col + 1, row + 1}});
        }

        vector<vector<int>> ans;

        // Process columns from left to right
        for (auto& i : mp) {

            // Sort by row, then by value
            sort(i.second.begin(), i.second.end());

            vector<int> current;

            for (auto& p : i.second) {
                current.push_back(p.second);
            }

            ans.push_back(current);
        }

        return ans;
    }
};