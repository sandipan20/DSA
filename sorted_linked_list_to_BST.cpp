#include<iostream>
using namespace std;

struct LNode { //Linked List
    int data;
    struct LNode* next;
    LNode(int x){
        data = x;
        next = NULL; }
};
struct TNode {   //Tree
    int data;
    struct TNode* left;
    struct TNode* right;
    TNode(int x){
        data=x;
        left=right=NULL; }
}; 
class Solution {
  public:
    TNode* tree(vector<int> &temp,int st,int end){
        if(st>end) return NULL;
        int mid=(st+end+1)/2;
        TNode* root=new TNode(temp[mid]);
        root->left=tree(temp,st,mid-1);
        root->right=tree(temp,mid+1,end);
        return root;
    }
    TNode *sortedListToBST(LNode *head) {
        // code here
        vector<int> temp;
        while(head){
            temp.push_back(head->data);
            head=head->next;
        }
        return tree(temp,0,temp.size()-1);
        
    }
};
/*Given a Singly Linked List which has data members sorted in ascending order. Construct a Balanced Binary Search Tree which has same data members as the given Linked List.
Note: There might be nodes with the same value.

Examples:

Input: Linked List: 1->2->3->4->5->6->7

Output: 4 2 1 3 6 5 7
Explanation : The BST formed using elements of the linked list is -
        4
      /   \
     2     6
   /  \   / \
  1   3  5   7  
Hence, preorder traversal of this tree is 4 2 1 3 6 5 7
Input: Linked List : 1->2->3->4
 
Ouput: 3 2 1 4
Explanation: The BST formed using elements of the linked list is -

Hence, the preorder traversal of this tree is 3 2 1 4
Expected Time Complexity: O(n)
Expected Auxiliary Space: O(n)
 
Constraints:
1 ≤ Number of Nodes ≤ 106
1 ≤ Value of each node ≤ 106
*/