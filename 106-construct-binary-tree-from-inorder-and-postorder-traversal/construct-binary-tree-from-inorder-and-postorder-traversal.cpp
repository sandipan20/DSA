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
    unordered_map<int,int> mp;
    int idx;

    TreeNode* build(vector<int>& postorder,int left,int right){
        if(left>right)
            return nullptr;
        
        int rootval=postorder[idx--];

        TreeNode* root=new TreeNode(rootval);
        int pos=mp[rootval];

        root->right=build(postorder,pos+1,right);
        root->left=build(postorder,left,pos-1);

        return root;

    }
public:
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        idx=postorder.size()-1;

        for(int i=0;i<inorder.size();i++)
            mp[inorder[i]]=i;


        return build(postorder,0,postorder.size()-1);
    }
};