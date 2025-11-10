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

class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        vector<int> list;
        ListNode* temp=head;
        while(temp != nullptr){
            list.push_back(temp->val);
            temp=temp->next;
        }
        temp=head;
        int i=list.size()-1;
        while(temp!=nullptr){
            temp->val=list[i];
            i--;
            temp=temp->next;
        }
        return head;
    }
};