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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* temp =head;
        int len = 0;
        while(temp!=NULL){
            temp =temp->next;
            len++;
        }
        
       temp =head;
       if(len - n ==0){
           return head->next;
       }
         for (int cnt = 0; cnt < len - n - 1; cnt++) {
            temp = temp->next;
        }
        temp->next=temp->next->next;
       
        return head;
    }
};