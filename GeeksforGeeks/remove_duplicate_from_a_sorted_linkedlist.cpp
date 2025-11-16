#include<iostream>
using namespace std;
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};

class Solution {
  public:
    // Function to remove duplicates from sorted linked list.
    Node* removeDuplicates(Node* head) {

        // code here
        Node *prev=head;
        Node *curr=head->next;
        while(curr){
            if(prev->data==curr->data){
                prev->next=curr->next;
                delete curr;
                curr=prev->next;
            } else{
                prev=curr;
                curr=curr->next;
            }
            
        }
        return head;
    }
};
/*Given a singly linked list. The task is to remove duplicates (nodes with duplicate values) from the given list (if it exists).
Note: Try not to use extra space. The nodes are arranged in a sorted way.

Examples:

Input:
LinkedList: 2->2->4->5
Output: 2 -> 4 -> 5

Explanation: In the given linked list 2 -> 2 -> 4 -> 5, only 2 occurs more than 1 time. So we need to remove it once.
Input:
LinkedList: 2->2->2->2->2
Output: 2

Explanation: In the given linked list  2 -> 2 -> 2 -> 2, 2 is the only element and is repeated 5 times. So we need to remove any four 2.
Expected Time Complexity : O(n)
Expected Space Complexity: O(1)

Constraints:
1 <= Number of nodes, data of nodes <= 105 */