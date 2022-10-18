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
    bool isPalindrome(ListNode* head) {
        ListNode *slow,*fast;
        vector<int> vec;
        slow = fast = head;
        while(fast!=NULL&&fast->next!=NULL){
            vec.push_back(slow->val);
            slow=slow->next;
            fast=fast->next->next;
        }
        int i=vec.size()-1;
        if(fast!=NULL){
            slow=slow->next;
        }
        while(slow!=NULL&&i>=0){
            cout<<slow->val<<" ";
            if(slow->val!=vec[i--])
                return false;
            
            slow=slow->next;
        }
        return true;
    }
};