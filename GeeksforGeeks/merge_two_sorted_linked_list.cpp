/*Given the head of two sorted linked lists consisting of nodes respectively. Merge both lists and return the head of the sorted merged list.

Examples:

Input:
  
Output: 2 -> 3 -> 5 -> 10 -> 15 -> 20 -> 40
Explanation:
   
Input:
  
Output: 1 -> 1 -> 2 -> 4
Explanation:
  
Constraints:
1 ≤ list1.size, list2.size ≤ 103
0 ≤ node->data ≤ 105
Expected Complexities
Time Complexity: O(n + m)
Auxiliary Space: O(1)*/

#include<iostream> 
using namespace std;
class Node {
 public:
    int data;
    Node *next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};


class Solution {
  public:
    Node* sortedMerge(Node* head1, Node* head2) {
        // code here
        Node *head=new Node(0),*temp=head;
        while(head1 && head2){
            if(head1->data<head2->data){
                temp->next=head1;
                head1=head1->next;
                temp=temp->next;
                temp->next=NULL;
            }else{
                temp->next=head2;
                head2=head2->next;
                temp=temp->next;
                temp->next=NULL;
            }
        }
        if(head1){
            temp->next=head1;
        } else{
            temp->next=head2;
        }
        head=head->next;
        return head;
    }
};