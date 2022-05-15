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
    
    int level(TreeNode* root) 
    {
        if(!root) return 0 ;
        int left = level(root->left ) ;
        int right = level (root->right) ;
        return max(left , right) + 1 ;
    }
    void solve(TreeNode* root , int start , int end , int &ans)
    {
        if(root == NULL) 
            return ;
        if(start == end)
        {
             ans += root->val;
        }
        solve(root->left , start + 1 , end , ans) ;
        solve(root->right , start + 1 , end , ans) ;       
        
    }
    int deepestLeavesSum(TreeNode* root) {
       int l = level(root) ;
        int  ans = 0 ;
        solve(root , 1 , l , ans) ;
        return ans ;
        
    }
};