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
    int getSize( ListNode *head)
    {
        int cnt = 0;
        ListNode * temp = head;
        while(temp != NULL)
        {
            temp = temp->next;
            cnt++;
        }
        return cnt;
        
    }
    ListNode* deleteMiddle(ListNode* head) 
    {
        
        int size = getSize(head);
        if(size == 1)
        {
            head = NULL;
            size--;
            return head;
        }
        int mid = (size % 2 == 0) ? (size / 2 ) + 1: (size + 1) / 2;
        ListNode * curr = head;
        int cnt = 1;
        while(cnt != mid - 1 )
        {
            curr = curr->next;
            cnt++;
        }
        curr->next = curr->next->next;
        return head;
    }
};