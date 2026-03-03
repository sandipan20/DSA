#include<iostream>
using namespace std;

class Node {
   public:
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};


class Solution {
  public:
    bool maxheap(Node* root) {
    if (!root) return true;

    // Check left child
    if (root->left) {
        if (root->data < root->left->data)
            return false;
    }

    // Check right child
    if (root->right) {
        if (root->data < root->right->data)
            return false;
    }

    return maxheap(root->left) && maxheap(root->right);
}
    int count(Node* root){
        if(!root) return 0;
        return 1+count(root->left)+count(root->right);
    }
    bool check(Node *root,int i,int counter){
        if(!root) return 1;
        
        if(i>=counter){
            return 0;
        }
        return check(root->left,2*i+1,counter)&&check(root->right,2*i+2,counter);
    }
    bool isHeap(Node* root) {
        // code here
        int counter=count(root);
        bool cbt=check(root,0,counter); //check if it is a cbt or not.
        
        if(cbt==0) return 0;
        else
        return maxheap(root);
    }
};
/*You are given the root of a binary tree, and the task is to determine whether it satisfies the properties of a max-heap.

A binary tree is considered a max-heap if it satisfies the following conditions:

Completeness: Every level of the tree, except possibly the last, is completely filled, and all nodes are as far left as possible.
Max-Heap Property: The value of each node is greater than or equal to the values of its children.
Examples:

Input: root = [97, 46, 37, 12, 3, 7, 31, 6, 9]
 
Output: true
Explanation: The tree is complete and satisfies the max-heap property.
Input: root = [97, 46, 37, 12, 3, 7, 31, N, N, 2, 4]
 
Output: false
Explanation: The tree is not complete and does not follow the Max-Heap Property, hence it is not a max-heap.
Constraints:
1 ≤ number of nodes ≤ 103
1 ≤ node->data ≤ 103
*/