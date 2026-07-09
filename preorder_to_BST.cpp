#include<iostream> 
using namespace std;
// User function template in C++



typedef struct Node
{
    int data;
    struct Node *left, *right;
} Node;


// A utility function to create a new tree node
Node* newNode( int data )
{
    Node* temp = (Node *)malloc( sizeof( Node ) );
    temp->data = data;
    temp->left = temp->right = NULL;
    return temp;
}



class Solution {
  public:
    // Function that constructs BST from its preorder traversal.
    Node* create(int pre[],int low,int high,int &idx,int &size){
        if(idx==size||pre[idx]<low||pre[idx]>high) return NULL;
        
        Node* root=newNode(pre[idx++]);
        
        root->left=create(pre,low,root->data,idx,size);
        root->right=create(pre,root->data,high,idx,size);
        return root;
    }
    Node* Bst(int pre[], int size) {
        // code here
        int idx=0;
        return create(pre,INT_MIN,INT_MAX,idx,size);
    }
};
/*Given an array arr[] of N nodes representing preorder traversal of some BST. You have to build the BST  from the given preorder traversal. 

In Pre-Order traversal, the root node is visited before the left child and right child nodes.

Example 1:

Input:
N = 5
arr[]  = {40,30,35,80,100}
Output: 35 30 100 80 40
Explanation: PreOrder: 40 30 35 80 100
Therefore, the BST will be:
              40
           /      \
         30       80
           \        \   
           35      100
Hence, the postOrder traversal will
be: 35 30 100 80 40
Example 2:

Input:
N = 8
arr[]  = {40,30,32,35,80,90,100,120}
Output: 35 32 30 120 100 90 80 40
Your Task:
You need to complete the given function and return the root of the tree. The driver code will then use this root to print the post order traversal.

Expected Time Complexity: O(N).
Expected Auxiliary Space: O(N).

Constraints:
1 <= N <= 103
1 <= arr[i] <= 104*/