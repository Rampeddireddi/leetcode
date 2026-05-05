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
    ListNode* rotateRight(ListNode* head, int k) {
        ListNode* len=head;
        if(k==0 || head==NULL)return head;
        int n=0;
        while(len!=NULL){
            len=len->next;
            n++;
        }
         k=k%n;
        int it=0;
        ListNode* temp=head;
        ListNode* prev=new ListNode(-1);
        prev->next=temp;
        while(it < n-k){
            it++;
        prev=prev->next;
        temp=temp->next;
        }
        prev->next=NULL;
        if(temp==NULL)return head;
        ListNode* t2=temp;
        while(t2->next!=NULL)t2=t2->next;
        t2->next=head;
        return temp;
    }
};