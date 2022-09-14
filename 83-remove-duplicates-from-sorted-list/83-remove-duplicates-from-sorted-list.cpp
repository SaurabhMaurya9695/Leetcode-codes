
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) 
    {
        if(head == NULL ) // size == 0
            return head;
        if(head->next == NULL) // size == 1
        {
            return head;
        }
        ListNode * prev = head;
        while(prev->next != NULL)
        {
            if(prev->val == prev->next->val)
            {
                ListNode * temp = prev->next;
                prev->next = prev->next->next;
                delete temp;
            }
            else{
                prev = prev->next;
            }
        }
        return head;
        
    }
};