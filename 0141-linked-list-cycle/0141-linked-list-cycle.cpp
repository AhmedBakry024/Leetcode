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
        ListNode *cur = head;
        while(cur){
            if(cur->val > 200000) return true;
            cur->val += 500000;
            cur = cur->next;
        }
        return false;

    }
};