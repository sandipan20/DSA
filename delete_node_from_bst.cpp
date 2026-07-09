#include<iostream>
using namespace std;
class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};

class Solution {
  public:
    Node* delNode(Node* root, int target) {
        // code here
        if(!root) return NULL;//no target in tree
        if(root->data>target){
            root->left= delNode(root->left,target);
            return root;
        }
        else if(root->data<target){
            root->right= delNode(root->right,target);
            return root;
        }
        else{
            //leaf
            if(!root->right&&!root->left){
                delete root;
                return NULL;
            } else if(!root->right){
            //only one
                Node*temp=root->left;
                delete root; 
                return temp;
            } else if(!root->left){
                Node*temp=root->right;
                delete root; 
                return temp;
            }else{
            //both
                //find the gretest to replace the node in left subtree
                Node* child = root->left;
                Node* parent= root;
                while(child->right){
                    parent=child;
                    child=child->right;
                }
                if(root!=parent){
                    parent->right=child->left;
                    child->left=root->left;
                    child->right=root->right;
                    delete root;
                    return child;
                } else{
                    child->right=root->right;
                    delete root;
                    return child;
                }
                
            } 
        }
        
    }
};
/* Given the root of a binary search tree and a node value x. Delete the node with the given value x from the tree. If no node with value x exists, then do not make any change. Return the root of the tree after deleting the node with value x.

Note: You may return any valid BST after deleting the specified node. The driver code will print true if the resulting tree is a valid BST after deletion, and false otherwise.

Examples :

Input: root = [2, 1, 3], x = 12

Output: true
Explanation: In the given input there is no node with value 12, so the tree will remain same.
Input: root = [1, N, 2, N, 8, 5, 11, 4, 7, 9, 12], x = 11

Output: true
Explanation: In the given input, one of the possible tree after deleting 11 will be

Input: root = [2, 1, 3], x = 3

Output: [2, 1]
Explanation: In the given input, only possible tree after deleting 3 will be

Constraints:
1 ≤ number of nodes ≤ 105
1 ≤ node->data, x ≤ 105
*/



// very important concept and a little complex