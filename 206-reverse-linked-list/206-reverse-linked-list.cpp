
class Solution {
public:
    
    ListNode * th = NULL;
    ListNode * tt = NULL;
    void addFirst(ListNode * node)
    {
        //Creation of Node
        if(node == NULL)
        {
            th = tt = node;
        }
        else{
            node->next = th;
            th = node;
        }
    }
    
    
    ListNode* reverseList(ListNode* head) 
    {
        if(head == NULL || head->next == NULL) return head;
        ListNode * curr = head;
        while(curr != NULL)
        {
            ListNode * nextNode = curr->next;
            curr->next = NULL;
            addFirst(curr);
            curr = nextNode;
        }
        return th;
        
    }
};