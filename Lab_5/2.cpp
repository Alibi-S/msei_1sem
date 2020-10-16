//https://leetcode.com/problems/reverse-linked-list/

class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if (!head || !head->next) return head;

        ListNode* prev = head;
        ListNode* next = head->next;
        
        prev->next = NULL;

        while (next){
            prev = next;
            next = prev->next;
            prev->next = head;
            head = prev;
        }

        return head;
    }
};

