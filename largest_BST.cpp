#include<iostream>
using namespace std;
// Tree node structure  used in the program

struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
class Box{
    public:
    int size;
    bool bst;
    int min;
    int max;
    Box(int data){
        size=1;
        bst=1;
        min=data;
        max=data; 
    }
};
class Solution {
  public:
    /*You are required to complete this method */
    // Return the size of the largest sub-tree which is also a BST
    Box* find(Node* root, int &maxsize){
        //leaf
        if(!root->left&&!root->right){
            maxsize=max(maxsize,1);
            return new Box(root->data);
        }
        //right
        else if(!root->left&&root->right){
            Box* head=find(root->right,maxsize); 
            if(head->bst && head->min>root->data ){//if it is still bst
                head->size++;
                head->min=root->data;
                maxsize=max(maxsize,head->size);
                return head;
            } else{
                head->bst=0;
                return head; 
            }
        }
        //left
        else if(!root->right&&root->left){
            Box* head=find(root->left,maxsize);
            if(head->bst&&head->max<root->data){
                head->size++;
                head->max=root->data;
                maxsize=max(maxsize,head->size);
                return head;
            } else{
                head->bst=0;
                return head;  
            }
        } else{
            // both
            Box* h1=find(root->left,maxsize);
            Box* h2=find(root->right,maxsize);
            if(h1->bst&&h2->bst&&h1->max<root->data&&h2->min>root->data){
                Box* head=new Box(root->data);
                head->size+=h1->size+h2->size;
                head->max=h2->max;
                head->min=h1->min ;
                maxsize=max(maxsize,head->size);
                return head;
            } else{
                h1->bst=0;
                return h1;
            }
        }
    }
    int largestBst(Node *root) {
        // Your code here
        int maxsize=1;
        find(root,maxsize);
        
        return maxsize;
    }
};
/*You're given a binary tree. Your task is to find the size of the largest subtree within this binary tree that also satisfies the properties of a Binary Search Tree (BST). The size of a subtree is defined as the number of nodes it contains.

Note: A subtree of the binary tree is considered a BST if for every node in that subtree, the left child is less than the node, and the right child is greater than the node, without any duplicate values in the subtree.

Examples :

Input: root = [5, 2, 4, 1, 3]
Root-to-leaf-path-sum-equal-to-a-given-number-copy
Output: 3
Explanation:The following sub-tree is a BST of size 3
Balance-a-Binary-Search-Tree-3-copy
Input: root = [6, 7, 3, N, 2, 2, 4]

Output: 3
Explanation: The following sub-tree is a BST of size 3:

Constraints:
1 ≤ number of nodes ≤ 105
1 ≤ node->data ≤ 105*/
/* Tree node structure  used in the program

struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
// };*/
// class Box{
//     public:
//     int size;
//     bool bst;
//     int max,min;
//     Box(){
//         bst=1;
//         size=0;
//         min=INT_MAX;
//         max=INT_MIN;
//     }
// };
// class Solution {
//   public:
//     /*You are required to complete this method */
//     // Return the size of the largest sub-tree which is also a BST
//     Box* find(Node* root,int &maxsize){
//         //root don't exist
//         if(!root){
//             return new Box();
//         }
//         //root exist
//         Box* l=find(root->left,maxsize);
//         Box* r=find(root->right,maxsize);
        
//         if(l->bst&&r->bst&&root->data>l->max&&root->data<r->min){
//             Box* head= new Box();
//             head->size=1+l->size+r->size;
//             head->min=min(root->data,l->min);
//             head->max=max(root->data,r->max);
//             maxsize=max(maxsize,head->size);
//             return head;
//         } else{
//             l->bst=0;
//             return l;
//         }
//     }
//     int largestBst(Node *root) {
//         // Your code here
//         int maxsize=0;
//         find(root,maxsize);
//         return maxsize;
//     }
// };