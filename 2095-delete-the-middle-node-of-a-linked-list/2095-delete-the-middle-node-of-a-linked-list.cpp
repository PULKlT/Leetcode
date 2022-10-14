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
    ListNode* deleteMiddle(ListNode* head) {
        ListNode *cur,*nex,*pre;
        cur = nex = pre = head;
        if(head->next==NULL)     return head->next;
        while(nex!=NULL&&nex->next!=NULL){
            pre=cur;
            cur=cur->next;
            nex=nex->next->next;
        }
        pre->next=cur->next;
        return head;
    }
};