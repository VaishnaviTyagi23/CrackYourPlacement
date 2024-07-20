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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
         ListNode* dummy=new ListNode(0);
         ListNode* curr=dummy;
         while(list1!=nullptr && list2!=nullptr)
         {
            if((list1->val)<=(list2->val))
            {
                curr->next=list1;
                list1=list1->next;
            }
            else
            {
                curr->next=list2;
                list2=list2->next;
            }
            curr=curr->next;
         }
         if(list1!=nullptr){
            curr->next=list1;
         } 
         if(list2!=nullptr){
            curr->next=list2;
         }

          return dummy->next;




        // vector<int> v;
        // ListNode* curr=list1;
        // while(curr!=NULL){
        //     v.push_back(curr->val);
        //     curr=curr->next;
        // }

        // curr=list2;
        // while(curr!=NULL){
        //     v.push_back(curr->val);
        //     curr=curr->next;
        // }
        // sort(v.begin(),v.end());
        // ListNode *dummy=new ListNode(0);
        // ListNode *start= dummy;
        // for(int i=0;i<v.size();i++){
        //     ListNode *curr=new ListNode(v[i]);
        //     start->next=curr;
        //     start=curr;
        // }
        // return dummy->next;
        
    }
};