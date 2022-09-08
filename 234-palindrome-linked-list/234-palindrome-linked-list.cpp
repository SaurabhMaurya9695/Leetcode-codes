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
    bool check(string res)
    {
        string s = res;
        reverse(s.begin(), s.end());
        return( s==res);
    }
    bool isPalindrome(ListNode* head) {
        
        string res ;
        while(head != nullptr)
        {
            res += to_string(head->val);
            head= head->next;
        }
        
        return check(res);
    }
};