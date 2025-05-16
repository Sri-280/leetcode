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
    int count(ListNode* head){
        int count=0;
        while(head){
            count++;
            head=head->next;
        }
        return count;
    }

    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int c1=count(headA);
        int c2=count(headB);

        if(c1>c2){
            while(c1!=c2){
                headA=headA->next;
                c1--;
            }
        }else{
            while(c2!=c1){
                headB=headB->next;
                c2--;
            }
        }

         if(c1==c2){
            while(headA!=headB){
                headA=headA->next;
                headB=headB->next;
            }
        } 
         return headA;
    }
};