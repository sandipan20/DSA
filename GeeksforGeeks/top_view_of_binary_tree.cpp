#include<iostream>
using namespace std;

class Node {
  public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = nullptr;
        right = nullptr;
    }
};


class Solution {
  public:
    void topview(vector<int> &ans,vector<int> &level,Node* root,int lev,int pos){
        if(!root) return;
        //when to update the ans 
        if(level[pos]>lev){
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
    vector<int> topView(Node *root) {
        // code here
        int l=0,r=0;
        find(root,l,r,0);
        vector<int> ans(r-l+1);
        vector<int> level((r-l+1),INT_MAX);
        topview(ans,level,root,0,-1*l);
        return ans;
    }
};
/*You are given the root of a binary tree, and your task is to return its top view. The top view of a binary tree is the set of nodes visible when the tree is viewed from the top.

Note:

Return the nodes from the leftmost node to the rightmost node.
If multiple nodes overlap at the same horizontal position, only the topmost (closest to the root) node is included in the view. 
Examples:

Input: root = [1, 2, 3]
Output: [2, 1, 3]
Explanation: The Green colored nodes represents the top view in the below Binary tree.
 
Input: root = [10, 20, 30, 40, 60, 90, 100]
Output: [40, 20, 10, 30, 100]
Explanation: The Green colored nodes represents the top view in the below Binary tree.


Constraints:
1 ≤ number of nodes ≤ 105
1 ≤ node->data ≤ 105
*/