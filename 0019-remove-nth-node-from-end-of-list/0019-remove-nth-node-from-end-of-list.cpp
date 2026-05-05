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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head==NULL || head->next==NULL)return NULL;
        ListNode* slow=head;
        ListNode* prev=new ListNode(-1);
        prev->next=slow;
        ListNode*res=prev;
        ListNode* fast=head;
        int k=0;
        while(k!=n){
            fast=fast->next;
            k++;
        }
        while(fast!=NULL){
            fast=fast->next;
            slow=slow->next;
            prev=prev->next;
        }
        prev->next=slow->next;
       return res->next;
    }
};