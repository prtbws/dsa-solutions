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

    ListNode* merge(ListNode* left, ListNode* right) {

        if (!right) return left;
        if (!left) return right;

        if (right->val <= left->val) {
            right->next = merge(left, right->next);
            return right;
        } else{
            left->next = merge(left->next, right);
            return left;
        }
    }

    ListNode* sortList(ListNode* head) {
        if (!head || !head->next) return head;

        ListNode* slow = head;
        ListNode* fast = head->next;

        while(fast && fast->next) {

            slow = slow->next;
            fast = fast->next->next;
        }

        ListNode* right = slow->next;
        slow->next = NULL;

        return merge( sortList(head), sortList(right));
    }
};