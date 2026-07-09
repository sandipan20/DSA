#include<iostream>
using namespace std;


// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
 
class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if (!head || !head->next || k == 0) return head;//if empty or no rotation

        int len = 1;
        ListNode* temp = head;
        while (temp->next) {
            temp = temp->next;
            len++;
        }

        temp->next = head;//making the list circular

        k = k % len;// finding net rotation

        int stepsToNewTail = len - k;//finding the breking point
        while (stepsToNewTail--) {
            temp = temp->next;
        }

        head=temp->next;
        temp->next = nullptr;

        return head;
    }
};


/*Given the head of a linked list, rotate the list to the right by k places.

 

Example 1:


Input: head = [1,2,3,4,5], k = 2
Output: [4,5,1,2,3]
Example 2:


Input: head = [0,1,2], k = 4
Output: [2,0,1]
 

Constraints:

The number of nodes in the list is in the range [0, 500].
-100 <= Node.val <= 100
0 <= k <= 2 * 109*/