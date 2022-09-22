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
    int getSize(ListNode * head)
    {
        int cnt = 0;
        while(head != NULL)
        {
            cnt++;
            head = head-> next;
        }
        return cnt ;
    }
    
    ListNode* removeNthFromEnd(ListNode* head, int k) 
    {
        if(head == NULL ) return head;
        // if(head -> next == NULL && k == 1)
        // {
        //     ListNode * temp = new ListNode();
        //     temp->next = NULL;
        //     return NULL; 
        // }
        
        int n = getSize(head);
        if(n == k)
        {
            return head->next;
        }
        else if(k > n) return new ListNode();
        ListNode * prev = NULL;
        ListNode * slow = head;
        ListNode * fast = head ;
        // making a gap  of k between slow and fast ;
        while(k-- && fast != NULL)
        {
            fast = fast -> next;
        }
        while(fast != NULL)
        {
            prev = slow;
            slow = slow->next;
            fast = fast -> next;
        }
        
            ListNode * temp = prev->next ; // 4
            prev->next = prev->next->next;
            delete (temp);
        
        return head;
    }
};