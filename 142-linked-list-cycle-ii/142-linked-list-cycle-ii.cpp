
class Solution {
public:
    ListNode *detectCycle(ListNode *head) 
    {
        ListNode * hare = head;
        ListNode * turtle = head;
        
        while (hare != NULL && hare->next != NULL) {
            hare = hare->next->next;
            turtle = turtle->next;
            
            if (hare == turtle) {
                turtle = head;
                while (hare != turtle) {
                    hare = hare->next;
                    turtle = turtle->next;
                }
                return turtle;
            }
        }
        return NULL;
        
    }
};