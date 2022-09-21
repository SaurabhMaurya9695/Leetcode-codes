/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) 
    {
        ListNode * curr = head;
        unordered_map<ListNode * , bool > mp;
        while(curr != NULL)
        {
            if(mp.find(curr) != mp.end())
            {
                return true;
            }
            else{
                mp[curr] = true;
            }
            curr = curr -> next;
        }
        return false;
        
    }
};