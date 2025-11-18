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
    ListNode* reverselist(ListNode* head,int count,ListNode* temp2){//reversing the ll
        ListNode *prev=nullptr,*curr=head,*future=nullptr;
        while(curr && count--){
            future=curr->next;
            curr->next=prev;
            prev=curr;
            curr=future;
        }
        head->next=temp2;
        return prev;
    }

    ListNode* reverseBetween(ListNode* head, int left, int right) {
        ListNode *temp=new ListNode(0);// make a new pointer to move pointer one less time
        temp->next=head;
        ListNode *temp1=temp;
        int l=left,r=right;
        while(l-->1){// move temp1 jus before st of reverse part
            temp1=temp1->next;
        }
        ListNode *temp2=temp1->next;//st of reverse part
        ListNode *end=temp2;
        for (int i = 0; i < right-left; i++) {
            end = end->next;
        }// end of reverse part
        temp1->next=reverselist(temp2,right-left+1,end->next);// conecting reverse ll
        return temp->next;// returning after the new pointer that we created in start.
    }
};
/*Given the head of a singly linked list and two integers left and right where left <= right, reverse the nodes of the list from position left to position right, and return the reversed list.

 

Example 1:


Input: head = [1,2,3,4,5], left = 2, right = 4
Output: [1,4,3,2,5]
Example 2:

Input: head = [5], left = 1, right = 1
Output: [5]
 

Constraints:

The number of nodes in the list is n.
1 <= n <= 500
-500 <= Node.val <= 500
1 <= left <= right <= n
 

Follow up: Could you do it in one pass?*/