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
    
    ListNode* middleNode(ListNode* head) 
    {
        int size = getSize(head);
        cout<< size << endl;
        int mid = (size % 2 == 0) ? (size / 2 ) + 1: (size + 1) / 2;
        ListNode * curr = head;
        int cnt = 1;
        while(cnt != mid)
        {
            curr = curr->next;
            cnt++;
        }
        
        cout<< curr->val << endl;
        return curr;
        
        
    }
};