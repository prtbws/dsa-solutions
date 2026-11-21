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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        priority_queue<pair<int , ListNode*>, vector<pair<int , ListNode*>>, greater<pair<int , ListNode*>>> pq;

        for (auto i : lists) {
            if (i) pq.push({i->val, i});
        }

        ListNode* dummy = new ListNode(0);

        ListNode* temp = dummy;

        while(!pq.empty()) {

            ListNode* node = pq.top().second;
            pq.pop();

            temp->next = node;
            temp = temp->next;

            if (node->next) {

                pq.push({node->next->val, node->next});
            }
        }

        return dummy->next;
    }
};