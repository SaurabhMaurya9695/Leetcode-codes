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
    //TLE
  /*  {
    //o(n)
//     int getSize(ListNode* head)
//     {
//         int cnt = 0;
//         ListNode* temp = head;
//         while(temp != NULL)
//         {
//             temp = temp->next;
//             cnt++;
//         }
//         return cnt ;
//     }
    
//     //o(idx)
//     ListNode* getAtidx(int idx , ListNode* head)
//     {
//         int cnt = 1 ;
//         ListNode *temp = head;
//         while(cnt != idx)
//         {
//             temp = temp->next;
//             cnt++;
//         }
//         return  temp;  
//     }
//     bool isPalindrome(ListNode* head) 
//     {
//         int start = 1;
//         int end = getSize(head) ;
        
//         //o(n)
//         while(start <= end)
//         {
//             ListNode * firstNode = getAtidx(start , head) ;
//             ListNode * lastNode = getAtidx(end , head);
//             if(firstNode->val != lastNode->val)
//             {
//                 return false;
//             }
//             start++;
//             end--;
//         }
//         return true;
        
//     }
    }
    */
    
    bool check(string s)
    {
        int start = 0;
        int end= s.size() - 1;
        while(start < end)
        {
            if(s[start] != s[end] )
            {
                return false;
            }
            start++;
            end--;
        }
        return true;
    }
    
    bool isPalindrome(ListNode* head)
    {
        string ans ="";
        ListNode * temp = head;
        while(temp != NULL)
        {
            ans += to_string(temp->val);
            temp = temp->next;
        }
        
        return check(ans);
    }
};