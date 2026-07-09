/*Given a singly linked list, your task is to remove every kth node from the linked list. 

Examples:

Input: Linked list: 1 -> 2 -> 3 -> 4 -> 5 -> 6 -> 7 -> 8, k = 2
Output: 1 -> 3 -> 5 -> 7

Explanation: After removing every 2nd node of the linked list, the resultant linked list will be: 1 -> 3 -> 5 -> 7.
Input: Linked list: 1 -> 2 -> 3 -> 4 -> 5 -> 6 -> 7 -> 8 -> 9 -> 10, k = 3
Output: 1 -> 2 -> 4 -> 5 -> 7 -> 8 -> 10

Explanation: After removing every 3rd node of the linked list, the resultant linked list will be: 1 -> 2 -> 4 -> 5 -> 7 -> 8 -> 10.
Expected Time Complexity:  O(n)
Expected Auxiliary Space:  O(1)

Constraints:
1 <= size of linked list <= 106
1 <= node->data <= 106
1 <= k <= size of linked list*/
#include<iostream>
using namespace std;

struct Node
{
    int data;
    struct Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }

};

/*You are required to complete this method*/

/* Function to get the middle of the linked list*/
/*K will always be in range */
class Solution {
  public:
    Node* deleteK(Node* head, int k) {
        // code here
        Node *prev=NULL,*curr=head;
        
        if(k==1) return NULL;
        
        while(curr){
            int c=k;
            while(--c && curr){
                prev=curr;
                curr=curr->next;
            }
            if(!curr) break;
            prev->next=curr->next;
            curr->next=NULL;
            delete curr;
            curr=prev->next;
        }
        return head;
    }
};