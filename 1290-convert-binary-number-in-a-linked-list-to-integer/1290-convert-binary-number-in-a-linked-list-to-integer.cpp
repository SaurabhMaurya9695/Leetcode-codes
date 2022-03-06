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
    int getDecimalValue(ListNode* head) {
        vector<int> binaryNumber;
        
        while(head != NULL) {
            binaryNumber.push_back(head->val);
            head = head->next;
        }
        
        int number = 0, exponent = 0;
        for(int i = binaryNumber.size() - 1; i >= 0; i--) {
            number += (binaryNumber[i]) * pow(2, exponent);
            exponent++;
        }
        
        return number;
    }
};