#include<iostream>
using namespace std;
struct Node
{
    int data;
    Node* left, * right;
};

class Solution {
  public:
    void find(Node* root,int &l,int pos){
        if(!root) return;
        l=max(l,pos);
        find(root->left,l,pos+1);
        find(root->right,l,pos);
    }
    void find_diag(vector<vector<int>>&diag, Node* root,int pos){
        if(!root) return;
        diag[pos].push_back(root->data); 
        find_diag(diag,root->left,pos+1);
        find_diag(diag,root->right,pos);
    }
    vector<int> diagonal(Node *root) {
        // code here
        int l=0;
        find(root,l,0);
        vector<vector<int>> diag(l+1);
        find_diag(diag,root,0);
        vector<int> ans;
        for(int i=0;i<diag.size();i++)
        for(int j=0;j<diag[i].size();j++){
            ans.push_back(diag[i][j]);
        }
        return ans;
    }
};

/*Given a Binary Tree, return the diagonal traversal of the binary tree.

Consider lines of slope -1 passing between nodes. Given a Binary Tree, return a single list containing all diagonal elements in a binary tree belonging to same line.
If the diagonal element are present in two different subtrees then left subtree diagonal element should be taken first and then right subtree. 

Examples :

Input : root = [8, 3, 10, 1, 6, N, 14, N, N, 4, 7, 13]

Output : [8, 10, 14, 3, 6, 7, 13, 1, 4]
Explanation:

Diagonal Traversal of binary tree : 8 10 14 3 6 7 13 1 4
Input: root = [1, 2, N, 3, N]

Output: [1, 2, 3]
Constraints:
1 <= number of nodes<= 105
1 <= node->data <= 105
*/