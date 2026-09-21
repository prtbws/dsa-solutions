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
        // ListNode* fast = head;
        // ListNode* slow = head;


        if (!head  || !head->next) return NULL;

        ListNode* temp =head;

        int n = 0;

        while(temp) {
            // fast = fast->next->next;
            // slow = slow->next;

            temp = temp->next;
            n++;
        }

        temp = head;

        for (int i =0; i<n/2-1; i++){
            temp = temp->next;
        } temp->next = temp->next->next;

        return head;
    }
};