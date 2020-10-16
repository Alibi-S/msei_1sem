//https://leetcode.com/problems/partition-list/


class Solution {
public:
    ListNode* partition(ListNode* head, int x) {
        ListNode* startL = new ListNode(1);
        ListNode* startR = new ListNode(1);
        ListNode* left = startL; 
        ListNode* right = startR;
        
        
        while (head != NULL) {
            if (head->val < x){
                left->next = new ListNode(head->val);
                left = left->next;
            }
            else{
                right->next = new ListNode(head -> val);
                right = right->next;
            }
            head = head->next;
        }
        left -> next = startR -> next;
        return startL -> next;
    }
};



