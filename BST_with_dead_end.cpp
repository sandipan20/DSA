#include<iostream>
using namespace std;
class Node
{
    public:
    int data;
    struct Node *left;
    struct Node *right;

    Node(int x){
        data = x;
        left = NULL;
        right = NULL;
    }
};

class Solution {
  public:
    bool possible(Node* root,int low,int high){
        if(!root) return false;
        if(!root->left&&!root->right){
            if(root->data-low==1&&high-root->data==1) return true;
            else
            return false;
        }
        return possible(root->left,low,root->data)||possible(root->right,root->data,high);
    }
    bool isDeadEnd(Node *root) {
        // Code here
        return possible(root, 0,INT_MAX);
    }
};
