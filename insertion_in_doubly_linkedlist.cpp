// Given the head of a doubly-linked list, a position p, and an integer x. Add a new node with value x at the position just after pth node in the doubly linked list and return the head of the updated list.

// Note: The position is 0-based indexed.

// Examples:

// Input: p = 2, x = 6

// Output: 2 <-> 4 <-> 5 <-> 6
// Explanation: Insert a node of value 6 after the 2nd node.

// Input: p = 0, x = 44 

// Output: 1 <-> 44 <-> 2 <-> 3 <-> 4
// Explanation: Insert a node of value 44 after the 0th node.

// Constraints:
// 0 ≤ p < list size ≤ 104
// 0 ≤ x, node->data ≤ 104

#include<iostream>
using namespace std;

class Node {
  public:
    int data;
    Node* next;
    Node* prev;

    Node(int x) {
        data = x;
        next = prev = nullptr;
    }
};
class Solution {
  public:
    Node *insertAtPos(Node *head, int p, int x) {

        // move curr to the p-th node
        Node *curr = head;
        while (p-- && curr) {
            curr = curr->next;
        }
        Node *temp = new Node(x);

        // insert after curr
        temp->next = curr->next;
        temp->prev = curr;

        if (curr->next) {
            curr->next->prev = temp;
        }

        curr->next = temp;

        return head;
    }
};
