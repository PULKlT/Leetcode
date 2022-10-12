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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int x,y,carry=0;
        ListNode *head = new ListNode(0), *l3=head;
        
        while(l1||l2||carry)
        {
            if(l1)  x=l1->val;
            else    x=0;
            if(l2)  y=l2->val;
            else    y=0;
            
            int sum = x + y + carry;
            carry = sum/10;
            l3->next = new ListNode(sum%10);
            l3=l3->next;
            
            if(l1)  l1=l1->next;
            if(l2)  l2=l2->next;
        }
        return head->next;
    }
};