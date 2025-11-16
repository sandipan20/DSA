#include<iostream>
using namespace std;
  class Node {
  public:
    int data;
    Node* next;

    Node(int x) {
        data = x;
        next = nullptr;
    }
};

class Solution {
  public:
    Node* segregate(Node* head) {
        // code here
        Node *zh=new Node(-1);
        Node *oh=new Node(-1);
        Node *th=new Node(-1);
        
        Node *z=zh;
        Node *o=oh;
        Node *t=th;
        
        Node *curr=head;
        while(curr){
            if(curr->data==0){
                z->next=curr;
                z=z->next;
            } else if(curr->data==1){
                o->next=curr;
                o=o->next;
            } else{
                t->next=curr;
                t=t->next;
            }
            curr=curr->next;
        }
        t->next=nullptr;
        z->next=(oh->next)?oh->next:th->next;
        o->next=th->next;
        head=zh->next;
        
        return head;
    }
};

// class Solution {
//   public:
//     Node* segregate(Node* head) {
//         // code here
//         Node* curr=head;
//         int c0=0,c1=0,c2=0;
//         while(curr){
//             if(curr->data==0) c0++;
//             else if(curr->data==1) c1++;
//             else c2++;
            
//             curr=curr->next;
//         }
//         curr=head;
//         while(c0--){
//             curr->data=0;
//             curr=curr->next;
//         }
//         while(c1--){
//             curr->data=1;
//             curr=curr->next;
//         }
//         while(c2--){
//             curr->data=2;
//             curr=curr->next;
//         }
//         return head;
//     }
// };
/*Given the head of a linked list where nodes can contain values 0s, 1s, and 2s only. Your task is to rearrange the list so that all 0s appear at the beginning, followed by all 1s, and all 2s are placed at the end.

Examples:

Input: head = 1 → 2 → 2 → 1 → 2 → 0 → 2 → 2
   
Output: 0 → 1 → 1 → 2 → 2 → 2 → 2 → 2
Explanation: All the 0s are segregated to the left end of the linked list, 2s to the right end of the list, and 1s in between. The final list will be:
   
Input: head = 2 → 2 → 0 → 1
   
Output: 0 → 1 → 2 → 2
Explanation: After arranging all the 0s, 1s and 2s in the given format, the output will be:
   
Constraints:
1 ≤ no. of nodes ≤ 106
0 ≤ node->data ≤ 2*/