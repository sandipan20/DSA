#include<iostream>
using namespace std;

class Node {
  public:
    int data;
    Node *next;
    Node *prev;
    Node(int val) {
        data = val;
        next = NULL;
        prev = NULL;
    }
};

class Solution {
  public:
    Node *reverse(Node *head) {
        // code here
        //if no node
        if(head->next==NULL){
            return head;
        } else{
            Node *curr=head, *temp=NULL;
            while(curr){
                temp=curr->prev;
                curr->prev=curr->next;
                curr->next=temp;
                curr=curr->prev;
            }
            if(temp) head=temp->prev;
        }
        return head;
    }
};

// You are given the head of a doubly linked list. You have to reverse the doubly linked list and return its head.

// Examples:

// Input:
   
// Output: 5 <-> 4 <-> 3
// Explanation: After reversing the given doubly linked list the new list will be 5 <-> 4 <-> 3.
   
// Input: 
   
// Output: 196 <-> 59 <-> 122 <-> 75
// Explanation: After reversing the given doubly linked list the new list will be 196 <-> 59 <-> 122 <-> 75.
   
// Constraints:
// 1 ≤ number of nodes ≤ 106
// 0 ≤ node->data ≤ 104
