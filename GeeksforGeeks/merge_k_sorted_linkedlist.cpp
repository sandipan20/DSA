#include<iostream> 
using namespace std;

class Node {
  public:
    int data;
    Node* next;
    Node(int x){
        data = x;
        next = NULL;
    }
};

class Solution {
  public:
    Node* merge(Node *head,Node *end){
        Node* ptr=head;
        Node* temp=ptr;
        while(head&&end){
            if(head->data<=end->data){
                temp->next=head;
                head=head->next;
            } else{
                temp->next=end;
                end=end->next;
            }
            temp=temp->next;
        }
        if(head){
            temp->next=head;
        } else{
            temp->next=end;
        }
        return ptr->next;
        
    }
    Node *mergesort(vector<Node*>&arr,int st,int end){
        if(st>=end) return arr[st];
        int mid=st+(end-st)/2;
        Node* l=mergesort(arr,st,mid);
        Node* r=mergesort(arr,mid+1,end);
        return merge(l,r);
    }
    Node* mergeKLists(vector<Node*>& arr) {
        // code here
        return mergesort(arr,0,arr.size()-1);
    }
};
/*Given an array arr[] of n sorted linked lists of different sizes. Your task is to merge all these lists into a single sorted linked list and return the head of the merged list.

Examples:

Input:
   
Output: 1 -> 2 -> 3 -> 4 -> 7 -> 8 -> 9
Explanation: The arr[] has 3 sorted linked list of size 3, 3, 1.
1st list: 1 -> 3 -> 7
2nd list: 2 -> 4 -> 8
3rd list: 9
The merged list will be: 
    
Input:
   
Output: 1 -> 3 -> 4 -> 5 -> 6 -> 8
Explanation: The arr[] has 3 sorted linked list of size 2, 1, 3.
1st list: 1 -> 3
2nd list: 8
3rd list: 4 -> 5 -> 6
The merged list will be: 
    
Constraints
1 ≤ total no. of nodes ≤ 105
1 ≤ node->data ≤ 103
*/