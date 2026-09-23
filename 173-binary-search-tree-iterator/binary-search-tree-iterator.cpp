class BSTIterator {
    stack<TreeNode*> st;

    void push(TreeNode* root) {
        while (root) {
            st.push(root);
            root = root->left;
        }
    }

public:
    BSTIterator(TreeNode* root) {
        push(root);              // push entire left path
    }

    int next() {
        TreeNode* temp = st.top();
        st.pop();

        push(temp->right);       // process right subtree

        return temp->val;
    }

    bool hasNext() {
        return !st.empty();
    }
};