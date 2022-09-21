class Solution {
public:
    
    int getSize(ListNode * head)
    {
        ListNode * curr = head;
        int cnt = 0;
        while(curr != NULL)
        {
            cnt++;
            curr = curr -> next;
        }
        return cnt;
    }
    
    
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int size1 = getSize(headA);
        int size2 = getSize(headB);
        int diff = size2 - size1;
        // check for max ;
        if(size2 > size1)
        {
           
            for(int i = 0; i<size2 - size1 ;i++)
            {
                headB = headB->next ;
            }
            
        }
        else{
            for(int i = 0; i< size1 - size2 ;i++)
            {
                headA = headA->next;
            }
        }
        while(headA != headB)
        {
            headA = headA->next;
            headB = headB->next;
        }
        return headA; 
        
    }
};