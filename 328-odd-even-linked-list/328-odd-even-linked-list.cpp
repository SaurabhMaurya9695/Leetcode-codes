
class Solution {
public:
    ListNode* oddEvenList(ListNode* head) 
    {
        ListNode * evenhead = new ListNode (-1);
        ListNode * oddhead = new ListNode(-1);
        ListNode * eventail = evenhead;
        ListNode * oddtail = oddhead;
        ListNode * curr = head;
        int  cnt = 0 ;
        while(curr != NULL)
        {
            if(cnt % 2 == 0)
            {
                eventail->next = curr;
                eventail = eventail->next;
            }
            else{
                oddtail->next = curr;
                oddtail = oddtail->next;
            }
            curr = curr->next;
            cnt++;
        }
        eventail->next = oddhead->next;
        oddtail->next = NULL;
        return evenhead->next;
    }
};