#include<iostream>
using namespace std;

class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int x) {
        data = x;
        left = right = NULL;
    }
};


class Solution {
  public:
    void topview(vector<int> &ans,vector<int> &level,Node* root,int lev,int pos){
        if(!root) return;
        //when to update the ans 
        if(level[pos]<=lev){
            ans[pos]=root->data;
            level[pos]=lev;
        }
        topview(ans,level,root->left,lev+1,pos-1);
        topview(ans,level,root->right,lev+1,pos+1);
    }
    void find(Node* root,int &l,int &r,int pos){
        if(!root) return;
        l=min(pos,l);
        r=max(pos,r);
        find(root->left,l,r,pos-1);
        find(root->right,l,r,pos+1);
    }
    vector<int> bottomView(Node *root) {
        // code here
        int l=0,r=0;
        find(root,l,r,0);
        vector<int> ans(r-l+1);
        vector<int> level((r-l+1),INT_MIN);
        topview(ans,level,root,0,-1*l);
        return ans;
    }
};

/*You are given the root of a binary tree, and your task is to return its bottom view. The bottom view of a binary tree is the set of nodes visible when the tree is viewed from the bottom.

Note: If there are multiple bottom-most nodes for a horizontal distance from the root, then the latter one in the level order traversal is considered.

Examples :

Input: root = [1, 2, 3, 4, 5, N, 6]
    
Output: [4, 2, 5, 3, 6]
Explanation: The Green nodes represent the bottom view of below binary tree.
    
Input: root = [20, 8, 22, 5, 3, 4, 25, N, N, 10, 14, N, N, 28, N]
    
Output: [5, 10, 4, 28, 25]
Explanation: The Green nodes represent the bottom view of below binary tree.
    
Constraints:
1 ≤ number of nodes ≤ 105
1 ≤ node->data ≤ 105
*/