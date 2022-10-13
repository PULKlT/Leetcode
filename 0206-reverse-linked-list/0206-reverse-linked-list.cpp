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
        
        ListNode *pre,*cur,*nex;
        pre=NULL;
        cur=head;        
        nex=cur->next;
        while(nex!=NULL){
            cur->next=pre;
            pre=cur;
            cur=nex;
            nex=nex->next;
        }
        cur->next=pre;

        return cur;
    }
};