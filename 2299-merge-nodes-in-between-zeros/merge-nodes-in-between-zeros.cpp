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
    ListNode* mergeNodes(ListNode* head) {
        ListNode* temp = new ListNode(-1);
        ListNode* t1=temp;
        head=head->next;
        int data = head->val;
        head=head->next;
        while(head!=NULL){
            if(head->val==0){
                ListNode* t2= new ListNode(data);
                temp->next=t2;
                temp=temp->next;
                data=0;
                
            }
            else{
                data+=head->val;
            }
            head=head->next;
        }
        return t1->next;
    }
};