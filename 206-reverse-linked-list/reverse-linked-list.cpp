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
    ListNode* reverseList(ListNode* head) {
        struct ListNode* curr= head;
        struct ListNode* prev= NULL;
        struct ListNode* nn= NULL;
        while (curr!=NULL){
            nn=curr->next;
            curr->next=prev;
            prev=curr;
            curr=nn;
        }
        return prev;
    }
};