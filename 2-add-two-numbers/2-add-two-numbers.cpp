class Solution {
public:
    
    //   9 4 2
    // 5 6 4 9
    
    ListNode* reverseList(ListNode* head) 
    {
        ListNode * prev = NULL;
        ListNode * curr = head;
        while(curr != NULL)
        {
            ListNode * nextsavingNode  = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nextsavingNode;         
        }
        
        return prev;
        
    }
    
    
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) 
    {
        if(l1 == NULL || l2 == NULL) return (l1 == NULL ? l2 : l1);
        // ListNode * c1 =  reverseList(l1);
        // ListNode * c2 =  reverseList(l2);
        ListNode * c1 =  (l1);
        ListNode * c2 =  (l2);
        ListNode * dummy  = new ListNode(-1);
        ListNode * itr = dummy;
        int carry = 0;
        while(c1 != NULL || c2 != NULL || carry != 0 )
        {
            int c1data = ( c1 != NULL ? c1->val : 0 ) ;
            cout<< "c1data is + " << c1data << endl;
            int c2data = ( c2 != NULL ? c2->val : 0 ) ;
            cout<< "c2data is + " << c2data << endl;
            int sum = ( c1data + c2data  + carry );
            cout<< "sum is + " << sum << endl;
            int rem = sum % 10;
            cout<< "rem is + " << rem << endl;
            carry = sum / 10;
            cout<< "carry is + " << carry << endl;
            ListNode * temp = new ListNode(rem);
            itr->next = temp;
            itr = itr->next;
            cout<< "me from itr : +" << itr->val  << endl;
            if(c1 != NULL)
            {
                c1 = c1->next;
            }
           if(c2 != NULL)
            {
                c2 = c2->next;
            }
            
        }
        
        // ListNode * ans = reverseList(dummy->next);
        return dummy->next ;
     
    }
};