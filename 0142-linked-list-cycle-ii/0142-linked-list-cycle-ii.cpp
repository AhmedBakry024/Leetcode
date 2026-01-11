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
    ListNode *detectCycle(ListNode *head) {
        unordered_map<ListNode*,bool> occ;
        while(head != NULL){
            if(occ[head]) return head;
            occ[head] = true;
            head = head->next;
        }
        return NULL;
    }
};