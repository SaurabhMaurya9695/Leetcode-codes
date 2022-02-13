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
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    bool isSubPathHelper(ListNode* head, TreeNode* root)
    {
       if(head == NULL) return true;
        // Linked List has all nodes present, return true
        
        if(root == NULL) return false; 
        // Linked List is still remaining, but tree is empty
        
        if(root->val == head->val){
            if(isSubPathHelper(head->next, root->left) == true) 
                return true;
            
            if(isSubPathHelper(head->next, root->right) == true)
                return true;
        }
        
        return false; 
    }
    
    bool isSubPath(ListNode* head, TreeNode* root) {
        if(head == NULL) return true;
        if(root == NULL) return false; // at any point when root is null then its return false ;
        
        return isSubPathHelper(head, root) || isSubPath(head, root->left) 
                                          || isSubPath(head, root->right);
    }
        
    
};