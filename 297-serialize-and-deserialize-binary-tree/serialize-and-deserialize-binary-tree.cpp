/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Codec {
public:

    // Serialize: Tree -> String
    void helper(TreeNode* root, string& ans) {

        // NULL node
        if (root == NULL) {
            ans += "null ";
            return;
        }

        // Store current node
        ans += to_string(root->val) + " ";

        // Store left subtree
        helper(root->left, ans);

        // Store right subtree
        helper(root->right, ans);
    }

    string serialize(TreeNode* root) {

        string ans = "";

        helper(root, ans);

        return ans;
    }


    // Deserialize: String -> Tree
    TreeNode* buildTree(stringstream& ss) {

        string value;

        // Read the next value from the string
        ss >> value;

        // "null" means there is no node
        if (value == "null") {
            return NULL;
        }

        // Convert string to integer and create node
        TreeNode* root = new TreeNode(stoi(value));

        // Build left subtree
        root->left = buildTree(ss);

        // Build right subtree
        root->right = buildTree(ss);

        return root;
    }

    TreeNode* deserialize(string data) {

        // Convert string into a stream so we can
        // read one value at a time using ss >> value
        stringstream ss(data);

        return buildTree(ss);
    }
};