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
        if(head->next==NULL)
            return head->next;
        ListNode *pre,*nex;
        int i=1;
        pre = head;
        nex = head->next;
        while(i<n){
            nex=nex->next;
            i++;
        }
        if(nex==NULL)   return head->next;
        while(nex->next!=NULL){
            nex=nex->next;
            pre=pre->next;
        }
        if(n==1)    nex=nex->next;
        pre->next = pre->next->next;
        return head;
    }
};