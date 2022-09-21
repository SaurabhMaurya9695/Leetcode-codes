
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        unordered_map<ListNode * , bool > ump;
        ListNode * curr = head;
        while(curr != NULL)
        {
            if(ump.find(curr) != ump.end()) return curr;
            else{
                ump[curr] = true;
            }
            curr = curr -> next;
        }
        return nullptr;  
    }
};