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
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        vector<int>res;
        vector<int>subres;
        if(head->next==NULL || head->next->next==NULL)return {-1,-1};
        int ind=2;
        ListNode* prev=head;
        head = head->next;
        ListNode* nxt=head;
        nxt=nxt->next;
        while(nxt!=NULL){
            if(head->val > nxt->val && head->val > prev->val){
                subres.push_back(ind);
            }
            else if(head->val < nxt->val && head->val < prev->val){
                subres.push_back(ind);
            }
            nxt=nxt->next;
            head=head->next;
            prev=prev->next;
            ind+=1;
        }
        int len=subres.size();
        if(len>=2){
        int minE=subres[1]-subres[0], maxE=subres[len-1]-subres[0];
        for(int i=2;i<subres.size();i++){
            if((subres[i]-subres[i-1]) < minE){
                minE=subres[i]-subres[i-1];
            }
        }
        res.push_back(minE);
        res.push_back(maxE);
        return res;
        }
        return {-1,-1};
    }
};