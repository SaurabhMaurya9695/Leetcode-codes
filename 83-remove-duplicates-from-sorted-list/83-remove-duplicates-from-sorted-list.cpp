
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) 
    {
        ListNode * dummy = new ListNode(-1e8);
        ListNode * itr = dummy;
        ListNode * curr = head;
        while(curr != NULL)
        {
            if( itr->val == curr->val )
            {
                curr = curr -> next;
            }
            else{
                itr-> next = curr; 
                itr = itr -> next;
                curr = curr->next;
            }
   
        }
        
            itr-> next = NULL;
        return dummy-> next;
        
    }
};