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
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        int c1 = -1;
        int clast = -1;
        int minDistance = INT_MAX;

        ListNode* temp = head;

        int idx = 1;

        while (temp->next->next) {

            if ((temp->next->val > temp->val && temp->next->next->val < temp->next->val) ||
            (temp->next->val < temp->val && temp->next->next->val > temp->next->val)){
                if (c1 == -1) {
                    c1 = idx;
                    // c2last = idx;
                    // clast = idx;
                }
                else minDistance = min(minDistance, idx-clast);
                clast = idx;
            }
            temp = temp->next;
            idx++;
        }
        vector<int>ans(2, -1);
        if (c1 != -1 && minDistance != INT_MAX && clast != -1) {
            ans[1] = clast-c1;
            ans[0] = minDistance;
        }
        return ans;
    }
};