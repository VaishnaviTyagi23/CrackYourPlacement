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
    ListNode* middleNode(ListNode* head) {
        ListNode *tort= head;
        ListNode *hare= head;

        while(hare!=NULL && hare->next!=NULL)
        {
            tort=tort->next;
            hare=hare->next->next;
        }



     return tort;   
    }
};