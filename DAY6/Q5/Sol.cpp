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
        if(head==NULL|| head->next==NULL){
            return true;
        }

        ListNode* slow =head;
        ListNode* fast=head;

        while(fast->next!=NULL && fast->next->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }

        ListNode *secondHalf = reverseList(slow->next);
        ListNode* curr= head;
        ListNode* curr2=secondHalf ;

        while(curr2!=NULL){
              if(curr->val!=curr2->val){
                return false;
              }
              curr=curr->next;
              curr2=curr2->next;
        }

        slow->next = reverseList(secondHalf);
        return true;
    }
private:
    ListNode* reverseList(ListNode* head){
        ListNode* curr=head;
        ListNode* prev=NULL;

        while(curr!=NULL){
            ListNode* next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }
        return prev;

    }
};
















        // stack<int> st;
        // ListNode* temp=head;
        // while(temp!=NULL){
        //     st.push(temp->val);
        //     temp=temp->next;
        // }
        // temp=head;
        // while(temp!=NULL){
        //    if( temp->val!=st.top())
        //        return false;
        //     st.pop();
        //     temp=temp->next;
        // }
        // return true;
        
