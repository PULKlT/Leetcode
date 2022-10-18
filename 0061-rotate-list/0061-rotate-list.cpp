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
        int count=1;
        ListNode *temp=head;
        if(head==NULL)  return head;
        while(temp->next!=NULL){
            temp=temp->next;
            count++;
        }
        temp->next=head;
        k=k%count+1;
        while(k<count){
            head=head->next;
            k++;
        }
        temp=head->next;
        head->next=NULL;
        return temp;
    }
};