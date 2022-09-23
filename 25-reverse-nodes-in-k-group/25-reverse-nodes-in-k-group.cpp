class Solution {
public:
    
    ListNode * th = NULL;
    ListNode * tt = NULL;
    
    void addFirst(ListNode * node)
    {
        if(th == NULL)
        {
            th = node;
            tt = node;
        }
        else{
            node->next = th;
            th = node;
        }
    }
        
    int getSize(ListNode * head) //o(n);
    {
        int cnt = 0 ;
        ListNode *temp = head;

        while(temp != NULL)
        {
            temp=  temp ->next;
            cnt++;
        }
        return cnt;
    }
    
    ListNode* reverseKGroup(ListNode* head, int k) {
        if(head == NULL || head->next == NULL) return head; 
        ListNode * curr = head;
        int n = getSize(head);
        ListNode * oh = NULL;
        ListNode * ot = NULL;
        while(n >= k)
        {
            int tempk = k;
            while(tempk-- > 0)
            {
                ListNode * next = curr->next;
                curr->next = NULL;
                addFirst(curr);
                curr = next;
            }
            if(oh == NULL)
            {
                oh = th ;
                ot = tt;
            }
            else{
                ot->next = th;
                ot = tt;
            }   
            
            th = NULL;
            tt = NULL;
            n -= k;
        }
        
        ot->next = curr;
        return oh;
        
    }
};