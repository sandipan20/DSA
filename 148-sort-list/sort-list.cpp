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
    ListNode* sortList(ListNode* head) {
        vector<int> arr;
        ListNode *temp=head;
        while(temp){
            arr.push_back(temp->val);
            temp=temp->next;
        }
        sort(arr.begin(),arr.end());
        ListNode* ans=new ListNode(0);
        temp=ans;
        int n=arr.size();

        for(int i=0;i<n;i++){
            ListNode* n=new ListNode(arr[i]);
            temp->next=n;
            temp=temp->next;
        }
        return ans->next;
    }
};