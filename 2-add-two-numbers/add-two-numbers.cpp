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
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *head= new ListNode(0);
        ListNode *temp=head;
        int carr=0;
        while(l1&&l2){
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
        head=head->next;
        return head;
    }
};