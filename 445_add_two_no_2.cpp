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
    ListNode* reverselist(ListNode * l){
        ListNode *prev=nullptr,*future=nullptr;
        while(l){
            future=l->next;
            l->next=prev;
            prev=l;
            l=future;
        }
        return prev;
    }
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        l1=reverselist(l1);
        l2=reverselist(l2);
        ListNode *head=new ListNode(0);
        ListNode *temp=head;
        int carr=0;
        while(l1 && l2){
            int sum=l1->val+l2->val+carr;
            int r=sum%10;
            carr=sum/10;
            temp->next=new ListNode(r);
            temp=temp->next;
            l1=l1->next;
            l2=l2->next;
        }
        if(l1){
            while(l1){
                int sum=l1->val+carr;
                int r=sum%10;
                carr=sum/10;
                temp->next=new ListNode(r);
                temp=temp->next;
                l1=l1->next;
            }
        } else{
            while(l2){
                int sum=l2->val+carr;
                int r=sum%10;
                carr=sum/10;
                temp->next=new ListNode(r);
                temp=temp->next;
                l2=l2->next;
            }
        }
        while(carr){
            int r=carr%10;
            carr=carr/10;
            temp->next=new ListNode(r);
            temp=temp->next;
        }
        temp=head;
        head=head->next;
        delete temp;
        head=reverselist(head);
        return head;
    }
};
/*
You are given two non-empty linked lists representing two non-negative integers. The most significant digit comes first and each of their nodes contains a single digit. Add the two numbers and return the sum as a linked list.

You may assume the two numbers do not contain any leading zero, except the number 0 itself.

 

Example 1:


Input: l1 = [7,2,4,3], l2 = [5,6,4]
Output: [7,8,0,7]
Example 2:

Input: l1 = [2,4,3], l2 = [5,6,4]
Output: [8,0,7]
Example 3:

Input: l1 = [0], l2 = [0]
Output: [0]
 

Constraints:

The number of nodes in each linked list is in the range [1, 100].
0 <= Node.val <= 9
It is guaranteed that the list represents a number that does not have leading zeros.
 

Follow up: Could you solve it without reversing the input lists?*/