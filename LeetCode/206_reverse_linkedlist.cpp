/*
Given the head of a singly linked list, reverse the list, and return the reversed list.

 

Example 1:


Input: head = [1,2,3,4,5]
Output: [5,4,3,2,1]
Example 2:


Input: head = [1,2]
Output: [2,1]
Example 3:

Input: head = []
Output: []
 

Constraints:

The number of nodes in the list is the range [0, 5000].
-5000 <= Node.val <= 5000
*/

#include<iostream>
using namespace std;

//  * Definition for singly-linked list.
class ListNode{
    public:
    int val;
    ListNode *next;
    ListNode(int val){
        this->val=val;
        next=nullptr;
    }

};

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {// proper way to reverse the linked list along with node
public:
    ListNode* reverseList(ListNode* head) {
        ListNode *prev=nullptr,*future=nullptr;
        while(head){
            future=head->next;
            head->next=prev;
            prev=head;
            head=future;
        }
        return prev;
    }
};

// using recursion

// ListNode* reversenode(ListNode* head,ListNode* prev){
//     if(head==nullptr) return prev;
//     ListNode* fut=head->next;
//     head->next=prev;
//     return reversenode(fut,head);

// }

// class Solution {
// public:
//     ListNode* reverseList(ListNode* head) {
//         ListNode *prev=nullptr;
//         return reversenode(head,prev);
//     }
// };

// class Solution {
// public:
//     ListNode* reverseList(ListNode* head) {
//         vector<int> list;
//         ListNode* temp=head;
//         while(temp != nullptr){
//             list.push_back(temp->val);
//             temp=temp->next;
//         }
//         temp=head;
//         int i=list.size()-1;
//         while(temp!=nullptr){
//             temp->val=list[i];
//             i--;
//             temp=temp->next;
//         }
//         return head;
//     }
// };