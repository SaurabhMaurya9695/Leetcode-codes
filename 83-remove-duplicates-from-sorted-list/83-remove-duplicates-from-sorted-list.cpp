class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        
        ListNode *prev = head;
        if(head == NULL)
        {
            return head;
        }
        
        while(prev->next != NULL)
        {
            if((prev->val) == (prev->next->val)){
                ListNode *temp = prev->next;
                prev->next = prev->next->next;
                
                delete(temp);
                
            }else{
                prev = prev->next;
            }
            
        }
        
        return head;
    }
};