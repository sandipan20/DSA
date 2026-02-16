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
    void inorder(vector<int> &v,Node* root){
        if(!root) return;
        inorder(v,root->left);
        v.push_back(root->data);
        inorder(v,root->right);
    }
    vector<int> merge(Node *root1, Node *root2) {
        // code here
        vector<int> v1,v2,ans;
        inorder(v1,root1);
        inorder(v2,root2);
        int i=0,j=0;
        while(i<v1.size()&&j<v2.size()){
            if(v1[i]<v2[j]){
                ans.push_back(v1[i]);
                i++;
            } else{
                ans.push_back(v2[j]);
                j++;
            }
        }
        if(i<v1.size()){
            while(i<v1.size()){
            ans.push_back(v1[i]);
            i++;
                
            }
        }
        if(j<v2.size()){
            while(j<v2.size()){
            ans.push_back(v2[j]);
            j++;
            
            }
        }
        return ans;
    }
};
/*You are given the root of two BSTs, you have to merge this two BST and return the in-order traversal of the new BST.

Examples: 

Input: root1 = [3, 1, 5], root2 = [4, 2, 6]

Output: [1, 2, 3, 4, 5, 6]
Explanation: After merging and sorting the two BST we get [1, 2, 3, 4, 5, 6].
Input: root1 = [8, 2, 10, 1, N], root2 = [5, 3, N, 0, N] 

Output: [0, 1, 2, 3, 5, 8, 10]
Explanation: After merging and sorting the two BST we get [0, 1, 2, 3, 5, 8, 10].
Constraints:
1 ≤ number of nodes ≤ 105
0 ≤ node->data ≤ 105
*/