
class Solution {
public:
    int getsize(ListNode * head)
    {
        int cnt = 0 ;
        while(head != NULL) 
        {
            cnt ++;
            head = head -> next;
        }
        return cnt;
    }
    ListNode* rotateRight(ListNode* head, int k) 
    {
        int n = getsize(head);
        if(head == NULL || head-> next == NULL || k == 0 || k == n   ) return head;
        
        
        k = k % n  ;  
        if( k == 0) return head;
        ListNode * slowprev = NULL;
        ListNode * slow = head;
        ListNode * fast = head;
        ListNode * fastprev = NULL;
        
        while(k -- && fast != NULL)
        {
            fastprev = fast;
            fast = fast -> next;
        }
        while(fast != NULL)
        {
            slowprev = slow;
            slow = slow -> next;
            fastprev = fast;
            fast = fast -> next;
        }
        if(slowprev != NULL)
            slowprev -> next = NULL;
        fastprev -> next = head;
        return slow;
        
        
    }
};