/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    
    TreeNode* solve(TreeNode* org , TreeNode* temp , TreeNode* k , TreeNode* & res)
    {
        if(org != NULL)
        {
            //go in left & right ;
            if(org == k  || org == k)
            {
                res = temp ;
            }
            solve(org->left , temp->left , k , res);
            solve(org->right , temp->right , k , res) ;
        }
        return res ;
            
        
    }
    TreeNode* getTargetCopy(TreeNode* org, TreeNode* temp, TreeNode* k) 
    {
        // as by shown written type we should have to return Trenenode
        TreeNode* res ;
        return solve(org , temp , k , res);
        
    }
};