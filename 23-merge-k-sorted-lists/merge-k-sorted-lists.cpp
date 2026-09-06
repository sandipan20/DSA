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
    struct compare{
        bool operator()(const ListNode* a,const ListNode* b)const{
            return a->val>b->val;
        }
    };
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        priority_queue<ListNode*,vector<ListNode*>,compare>q;

        for(ListNode* head:lists){//putting head in the prority queue
            if(head){
                q.push(head);
            }
        }
        ListNode* temp=new ListNode(0);
        ListNode* tail=temp;
        
        while(!q.empty()){
            ListNode* low=q.top();
            q.pop();
            tail->next=low;
            tail=tail->next;
            if(low->next){
                q.push(low->next);
            }
        }
        ListNode* ans=temp->next;
        delete temp;
        return ans;
    }
};