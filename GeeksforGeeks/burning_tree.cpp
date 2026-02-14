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
    int burn(Node*root,int &target,int &timer){
        if(!root) return 0;
        
        if(root->data==target) return -1;
        
        int left=burn(root->left,target,timer);
        int right=burn(root->right,target,timer);
        
        if(left<0){
            timer=max(timer,-left+right);
            return left-1;
        }
        if(right<0){
            timer=max(timer,-right+left);
            return right-1;
        }
        
        return 1+max(left,right);
    }
    void find(Node* root, int target, Node* &burn_node){
        if(!root) return;
        if(root->data==target){
            burn_node=root;
            return;
        }
        find(root->left,target,burn_node);
        
        find(root->right,target,burn_node); 
    }
    int height(Node*root){
        if(!root) return 0;
        return 1+max(height(root->left),height(root->right));
    }
    int minTime(Node* root, int target) {
        // code here
        int timer=0;
        burn(root,target,timer);
        // add height to the timer for the target and tree down to that point
        Node* burn_node=NULL;
        find(root,target,burn_node);
        int hig = (burn_node) ? height(burn_node) - 1 : 0;
        
        return max(timer,hig);
    }
};
/*Given the root of a binary tree and a target node, determine the minimum time required to burn the entire tree if the target node is set on fire. In one second, the fire spreads from a node to its left child, right child, and parent.

Note: The tree contains unique values.

Examples : 

Input: root = [1, 2, 3, 4, 5, 6, 7], target = 2
  
Output: 3
Explanation: Initially 2 is set to fire at 0 sec 
At 1 sec: Nodes 4, 5, 1 catches fire.
At 2 sec: Node 3 catches fire.
At 3 sec: Nodes 6, 7 catches fire.
It takes 3s to burn the complete tree.
Input: root = [1, 2, 3, 4, 5, N, 7, 8, N, N, 10], target = 10

Output: 5
Explanation: Initially 10 is set to fire at 0 sec 
At 1 sec: Node 5 catches fire.
At 2 sec: Node 2 catches fire.
At 3 sec: Nodes 1 and 4 catches fire.
At 4 sec: Node 3 and 8 catches fire.
At 5 sec: Node 7 catches fire.
It takes 5s to burn the complete tree.
Constraints:
1 ≤ number of nodes ≤ 105
1 ≤ node->data ≤ 105
*/