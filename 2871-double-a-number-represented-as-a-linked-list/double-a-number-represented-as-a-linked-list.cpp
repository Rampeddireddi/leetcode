class Solution {
public:
    ListNode* reverseList(ListNode* Node){
        ListNode *current=Node,*prev=nullptr;
        while(current!=NULL){
            ListNode *n=current->next;
            current->next=prev;
            prev=current;
            current=n;
        }
        return prev;
    }
    ListNode* doubleIt(ListNode* head) {
    ListNode  *rev=reverseList(head);
     
    int carry=0,value=0;
    ListNode *dbrev=rev,*prev1=rev;
    while(rev!=NULL){
       int rvalue=rev->val *2 + carry;
        rev->val=rvalue%10;
        if(rvalue>9)carry=1;
        else carry=0;
        prev1=rev;
        rev=rev->next;
    }
    if(carry!=0){
        ListNode *extra=new ListNode(carry);
        prev1->next=extra;
    }
    ListNode *result=reverseList(dbrev);
    return result;
    }
};
