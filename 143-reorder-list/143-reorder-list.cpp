
class Solution {
public:
    
    ListNode* middleNode(ListNode* head) {
        if(head == NULL || head->next == NULL) return head;
        ListNode * slow = head;
        ListNode * fast = head;
        while(fast->next != NULL && fast->next->next != NULL )
        {
            slow = slow->next;
            fast = fast->next->next;
        }

       return  slow ;
    }
    
    ListNode* reverseList(ListNode* head) 
    {
        if(head == NULL || head->next == NULL) return head;
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
    
    void reorderList(ListNode* head) 
    {
        if(head == NULL || head->next == NULL)
        {
            return ;
        }
        
        ListNode * mid = middleNode(head);
        
        ListNode * nextNode = mid ->next;
        mid -> next = NULL;
        
        ListNode * revLL = reverseList(nextNode);
        
        //given new name ;
        ListNode * c1 = head;   // head -> mid ;
        ListNode * c2 = revLL;  //reverse LL from mid + 1 ;
        ListNode * f1 = NULL;
        ListNode * f2 = NULL;
        
        while(c1 != NULL && c2 != NULL)
        {
            // backup;
            f1 = c1->next ;
            f2 = c2->next;
            
            
            // link ;
            c1->next = c2;
            c2->next = f1;
            
            //update
            c1 = f1 ;
            c2 = f2;
            
            
        }
        
    }
};






