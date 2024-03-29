/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
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
    bool isPalindrome(ListNode* head) 
    {
        if(head == NULL || head->next == NULL) return true;
        ListNode * mid = middleNode(head);
        ListNode * nextptr = mid -> next ;
        mid->next = NULL;
        ListNode * revLL = reverseList(nextptr);
        ListNode * curr1 = head;
        ListNode * curr2 = revLL;
        
        while(curr1 != NULL && curr2 != NULL)
        {
            if(curr1 -> val != curr2-> val)
            {
                return false;
            }
            curr1 = curr1->next;
            curr2 = curr2 -> next;
            
        }
        return true;      
    }
};