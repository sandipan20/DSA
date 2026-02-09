#include<iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node* left;
    Node* right;

    Node(int x){
        data = x;
        left = right = NULL;
    }
}; 
class Solution {
  public:
    vector<int> findSpiral(Node* root) {
        // code here
        stack<Node*> lr,rl;
        rl.push(root);
        vector<int>ans;
        while(!lr.empty()|| !rl.empty()){
            if(!rl.empty()){
                while(!rl.empty()){
                    Node* temp=rl.top();
                    rl.pop();
                    ans.push_back(temp->data);
                    if(temp->right) lr.push(temp->right);
                    if(temp->left) lr.push(temp->left);
                }
            } else{
                while(!lr.empty()){
                    Node* temp=lr.top();
                    lr.pop();
                    ans.push_back(temp->data);
                    if(temp->left) rl.push(temp->left);
                    if(temp->right) rl.push(temp->right);
                }
            }
        }
        return ans;
    }
};
/*Given a root binary tree and the task is to find the spiral order traversal of the tree and return the list containing the elements.
Spiral Order Traversal mean: Starting from level 0 for root node, for all the even levels we print the node's value from right to left and for all the odd levels we print the node's value from left to right.

Examples:

Input: root = [1, 3, 2]
 
Output: [1, 3, 2]
Explanation: Start with root (1), print level 0 (right to left), then level 1 (left to right).
Input: root = [10, 20, 30, 40, 60]

Output: [10, 20, 30, 60, 40]
Explanation: Start with root (10), print level 0 (right to left), level 1 (left to right), and continue alternating.
Constraints:
1  ≤ number of nodes  ≤105
0  ≤ node->data  ≤ 105*/