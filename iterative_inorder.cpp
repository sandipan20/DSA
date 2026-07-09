#include<iostream>
using namespace std;
struct Node {
    int data;
    Node* left;
    Node* right;
};
class Solution {
  public:
    vector<int> inOrder(Node* root) {
        vector<int> ans;
        if(!root) return ans;
        stack<Node*> st;
        stack<bool> visited;
        st.push(root);
        visited.push(false);
        while(!st.empty()){
            Node* temp = st.top(); st.pop();
            bool isVisited = visited.top(); visited.pop();
            if(temp == NULL) continue;
            if(isVisited){
                ans.push_back(temp->data);
            } else {
                if(temp->right){
                    st.push(temp->right);
                    visited.push(false);
                }
                st.push(temp);
                visited.push(true);
                if(temp->left){
                    st.push(temp->left);
                    visited.push(false);
                }
            }
        }
        return ans;
    }
};

/*Given a binary tree. Find the inorder traversal of the tree without using recursion.

Examples

Input:  

Output: 4 2 5 1 3
Explanation:
Inorder traversal (Left->Root->Right) of 
the tree is 4 2 5 1 3.
Input:

Output: 1 7 10 8 6 10 5 6
Explanation:
Inorder traversal (Left->Root->Right) 
of the tree is 1 7 10 8 6 10 5 6.
 

Your task:
You don't need to read input or print anything. Your task is to complete the function inOrder() which takes the root of the tree as input and returns a list containing the inorder traversal of the tree, calculated without using recursion.

Expected time complexity: O(N)
Expected auxiliary space: O(N)


Constraints:
1 <= Number of nodes <= 105
1 <= Data of a node <= 105
*/
// User function Template for C++

/* Tree Node
struct Node {
    int data;
    Node* left;
    Node* right;
};*/
class Solution {//sc O(1)
  public:
    vector<int> inOrder(Node* root) {
        // code here
        vector<int> ans;
        while(root){
            if(!root->left){//left na exist kare
                ans.push_back(root->data);
                root=root->right;
            } else{
                Node*curr=root->left;
                while(curr->right&&curr->right!=root){
                    curr=curr->right;
                }
                if(!curr->right){//jab left traverse na ho to
                    curr->right=root;
                    root=root->left;
                } else{
                    curr->right=NULL;
                    ans.push_back(root->data);
                    root=root->right;
                }
            }
        }
        return ans;
    }
};