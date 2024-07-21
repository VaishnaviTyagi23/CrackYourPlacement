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
    ListNode* removeElements(ListNode* head, int val) {
        ios_base::sync_with_stdio(false);
        cin.tie(0);
        cout.tie(0);
        
        // Create a dummy node pointing to head
        ListNode* dummy = new ListNode(0);
        dummy->next = head;
        
        // Initialize current pointer to dummy node
        ListNode* curr = dummy;

        // Traverse the list
        while (curr->next != NULL) {
            // If the next node's value is the target value, skip it
            if (curr->next->val == val) {
                curr->next = curr->next->next;
            } else {
                // Otherwise, move to the next node
                curr = curr->next;
            }
        }
        
        // Return the new head, which is the next node of dummy
        return dummy->next;
    }
};