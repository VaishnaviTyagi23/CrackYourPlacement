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
    int diff(ListNode * headA , ListNode* headB){
        int cntA=0,cntB=0;
        while(headA!=NULL || headB!=NULL){
            if(headA!=NULL){
                cntA++;
                headA=headA->next;
            }
            if(headB!=NULL){
                cntB++;
                headB=headB->next;
            }
            
        }
        return cntA-cntB;
    }


    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int n= diff(headA ,  headB);

        if(n<0){
            while(n!=0){
                n++;
                headB=headB->next;
            }
        }
        else{
             while(n!=0){
                n--;
                headA=headA->next;
             }

        }
        while(headA!=NULL && headB!=NULL){
            if(headA==headB){
                return headA;
            }
            headA=headA->next;
            headB=headB->next;
        }
        return NULL;
    
    }
};