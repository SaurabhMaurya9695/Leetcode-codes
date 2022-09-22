
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if(head == NULL || head->next == NULL){
            return head;
        }
        ListNode* p = reverseList(head->next);
        head->next->next = head;
        head->next = NULL;
        return p;
    }
    
    
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) 
    {
        if(l1 == NULL || l2 == NULL) return (l1 == NULL ? l2 : l1);
        ListNode * c1 =  reverseList(l1);
        ListNode * c2 =  reverseList(l2);
        ListNode * dummy  = new ListNode(-1);
        ListNode * itr = dummy;
        int carry = 0;
        while(c1 != NULL || c2 != NULL || carry != 0 )
        {
            int c1data = ( c1 != NULL ? c1->val : 0 ) ;
            int c2data = ( c2 != NULL ? c2->val : 0 ) ;
            int sum = ( c1data + c2data  + carry );
            int rem = sum % 10;
            carry = sum / 10;
            ListNode * temp = new ListNode(rem);
            itr->next = temp;
            itr = itr->next;
            if(c1 != NULL)
            {
                c1 = c1->next;
            }
           if(c2 != NULL)
            {
                c2 = c2->next;
            }
            
        }
        return reverseList(dummy->next) ;
     
    }
};