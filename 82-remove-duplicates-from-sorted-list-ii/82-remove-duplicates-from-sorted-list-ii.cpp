
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) 
    {
        if(head == NULL || head-> next == NULL) return head;
        ListNode * dummy  = new ListNode(-1e8);
        ListNode * itr = dummy;
        itr -> next = head;  // for temp ans ;
        ListNode * curr = head -> next; // for checking
        while(curr != NULL)
        {
            bool ok = false; // init no rep ele
            while(curr != NULL && itr-> next -> val == curr -> val)
            {
                ok = true;
                curr = curr -> next;
            }
            if(ok == true)
            {
                itr -> next = curr ;
            }
            else{
                itr = itr-> next;
            }
            if(curr != NULL)
                curr = curr -> next;
            
        }
        return dummy-> next;
        
        
    }
};