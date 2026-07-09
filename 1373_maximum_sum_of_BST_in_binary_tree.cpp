#include<iostream>
using namespace std;


// Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Box{
    public:
    int sum;
    bool bst;
    int min;
    int max;
    Box(int data){
        sum=data;
        bst=1;
        min=data;
        max=data;
        
    }
};
class Solution {
public:
    Box* find(TreeNode* root, int &msum){
        //if only leaf exist
        if(!root->right&&!root->left){
            msum=max(msum,root->val);
            return new Box(root->val);
        }
        // if only left exist
        else if(!root->right&&root->left){
            Box* head= find(root->left,msum);
            if(head->bst&&head->max<root->val){//check if the bst continue
                head->sum+=root->val;
                head->max=root->val;
                msum=max(msum,head->sum);
                return head;
            } else{
                head->bst=0;
                return head;
            }
        }
        // if only right exist
        else if(!root->left&&root->right){
            Box* head=find(root->right,msum);
            if(head->bst&&head->min>root->val){
                head->sum+=root->val;
                head->min=root->val;
                msum=max(msum,head->sum);
                return head;
            } else{
                head->bst=0;
                return head;
            }
        }
        //if both exist
        else{
            Box* lhead=find(root->left,msum);
            Box* rhead=find(root->right,msum);
            if(lhead->bst&&rhead->bst&&root->val>lhead->max&&root->val<rhead->min){
                Box* head=new Box(root->val);
                head->sum+=lhead->sum+rhead->sum;
                head->min=lhead->min;
                head->max=rhead->max;
                msum=max(msum,head->sum);
                return head;
            } else{
                lhead->bst=0;
                return lhead;
            }
        }
    } 
    int maxSumBST(TreeNode* root) {
        int msum=0;
        find(root,msum);
        return msum;
    }
};


/*Given a binary tree root, return the maximum sum of all keys of any sub-tree which is also a Binary Search Tree (BST).

Assume a BST is defined as follows:

The left subtree of a node contains only nodes with keys less than the node's key.
The right subtree of a node contains only nodes with keys greater than the node's key.
Both the left and right subtrees must also be binary search trees.
 

Example 1:



Input: root = [1,4,3,2,4,2,5,null,null,null,null,null,null,4,6]
Output: 20
Explanation: Maximum sum in a valid Binary search tree is obtained in root node with key equal to 3.
Example 2:



Input: root = [4,3,null,1,2]
Output: 2
Explanation: Maximum sum in a valid Binary search tree is obtained in a single root node with key equal to 2.
Example 3:

Input: root = [-4,-2,-5]
Output: 0
Explanation: All values are negatives. Return an empty BST.
 

Constraints:

The number of nodes in the tree is in the range [1, 4 * 104].
-4 * 104 <= Node.val <= 4 * 104*/