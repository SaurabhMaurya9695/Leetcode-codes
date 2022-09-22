
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) 
    {
        ListNode * dummy = new ListNode(-1e8);
        ListNode * itr = dummy;
        ListNode * curr = head;
        while(curr != NULL)
        {
            while(curr != NULL &&  itr->val == curr->val )
            {
                curr = curr -> next;
            }
            
            itr-> next = curr;
            itr = itr -> next;
            if(curr != NULL) curr = curr->next;
            
        }
        return dummy-> next;
        
    }
};