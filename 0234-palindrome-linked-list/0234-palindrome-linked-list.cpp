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
        stack<int> elements;
        ListNode* cur = head;
        while (cur) {
            elements.push(cur->val);
            cur = cur->next;
        }
        cur = head;
        int iterations = elements.size() / 2;
        for (int i = 0; i < iterations; i++) {
            if (cur->val != elements.top()) {
                return false;
            }
            elements.pop();
            cur = cur->next;
        }
        return true;
    }
};