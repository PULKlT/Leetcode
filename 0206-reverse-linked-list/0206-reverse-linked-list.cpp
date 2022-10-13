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
    ListNode* reverseList(ListNode* head) {
        if(head==NULL||head->next==NULL)  return head;
        
        ListNode *pre,*nex;
        pre=NULL;    
        nex=head->next;
        while(nex!=NULL){
            head->next=pre;
            pre=head;
            head=nex;
            nex=nex->next;
        }
        head->next=pre;

        return head;
    }
};