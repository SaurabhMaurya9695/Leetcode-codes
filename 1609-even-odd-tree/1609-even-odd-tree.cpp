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
    bool isEvenOddTree(TreeNode* root) {
        queue<TreeNode * > q;
        q.push(root);
        bool even_level = true;
        while(!q.empty()){
            int size = q.size() ;
            
            
            int prev_val ;
            if(even_level){
                prev_val = INT_MIN;
            }else{
                prev_val = INT_MAX;
            }
            
            while(size --){
                TreeNode * curr = q.front() ;
                q.pop();
                if(even_level && (curr->val <= prev_val || curr->val % 2 == 0)){
                    return false;
                }
                
                if( !even_level && (curr->val >= prev_val  || curr->val % 2 == 1)){
                    return false;
                }
                
                prev_val = curr->val ;
                if(curr->left){
                    q.push(curr->left);
                }
                
                if(curr->right){
                    q.push(curr->right);
                }
                
            }
            even_level = !even_level;
        }
        return true;
        
    }
};