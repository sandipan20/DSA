#include<iostream>
using namespace std;

class Node {
public:
    int data;
    Node *left;
    Node *right;

    Node(int x) {
        data = x;
        left = NULL;
        right = NULL;
    }
};


class Solution {
  public:
  
    int find(vector<int> &inorder, int target, int st, int end){
        for(int i = st; i <= end; i++){
            if(inorder[i] == target) return i;
        }
        return -1;
    }
    
    Node* tree(vector<int> &inorder, vector<int> &preorder, int &idx, int ist, int iend){
        if(ist > iend) return NULL;
        
        Node* root = new Node(preorder[idx]);
        idx++;   // move preorder index
        
        int pos = find(inorder, root->data, ist, iend);
        
        root->left = tree(inorder, preorder, idx, ist, pos - 1);
        root->right = tree(inorder, preorder, idx, pos + 1, iend);
        
        return root;
    }
    
    Node *buildTree(vector<int> &inorder, vector<int> &preorder) {
        int idx = 0;
        return tree(inorder, preorder, idx, 0, inorder.size() - 1);
    }
};

/* Given two arrays representing the inorder and preorder traversals of a binary tree, your task is to construct the binary tree and return its root.

Note: The inorder and preorder traversals contain unique values, and every value present in the preorder traversal is also found in the inorder traversal.

Examples:

Input: inorder[] = [3, 1, 4, 0, 5, 2], preorder[] = [0, 1, 3, 4, 2, 5]
Output: [0, 1, 2, 3, 4, 5]
Explanation: The tree will look like

Input: inorder[] = [2, 5, 4, 1, 3], preorder[] = [1, 4, 5, 2, 3]
Output: [1, 4, 3, 5, N, N, N, 2]
Explanation: The tree will look like

Constraints:
1 ≤ number of nodes ≤ 103
0 ≤ nodes -> data ≤ 103
Both the inorder and preorder arrays contain unique values.

*/