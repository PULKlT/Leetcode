/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode *check, *tem=head;
        vector<long> vec;
        while(tem != NULL){
            auto it = find(vec.begin(),vec.end(),long(tem));
            if(it!=vec.end())
                return true;
            else
                vec.push_back(long(tem));
            tem = tem->next;
        }
        return false;
    }
};