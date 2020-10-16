//https://leetcode.com/problems/intersection-of-two-linked-lists/



class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        if(headA == NULL || headB == NULL)
            return NULL;
        
        ListNode *a = headA;
        ListNode *b = headB;
        
        ListNode *aEnd = headA;
        ListNode *bEnd = headB;
        
        while(a->next!=NULL) 
            a = a->next;
        aEnd = a;
        
        while(b->next!=NULL)
            b = b->next;
        bEnd = b;
        
        if(aEnd==bEnd){
            a = headA;
            b = headB;
            while(a!=b){
                if(a->next!=NULL) a = a->next;
                else                           a = headB;
                
                
                if(b->next!=NULL) b = b->next;
                else                           b = headA;
            }
            return a;
        }
        return NULL;
    }
};
