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
        ListNode* slow=head;
        ListNode* fast=head;
        while(fast!=NULL && fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
            if(slow==fast){
                return true;
            }

        }
        return false;




        // unordered_set<ListNode* > list;
        // ListNode* temp=head;
        // while(temp!=NULL){
        //     if(list.find(temp)!=list.end()){
        //         return true;
        //     }
        //     list.insert(temp);
        //     temp=temp->next;
        // }
        // return false;
        
    }
};