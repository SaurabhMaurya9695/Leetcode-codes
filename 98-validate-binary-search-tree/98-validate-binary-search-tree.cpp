class Solution {
public:
    
    bool helper(TreeNode* root, long long l, long long r)
    {
        if(root == NULL)
            return true;
        
        if(root->val > l && root->val < r)
        {
            return helper(root->left, l, root->val) && helper(root->right, root->val, r);
        }
        else
            return false;
        
    }
    
    bool isValidBST(TreeNode* root) {
        
        // long long l = (long long)(INT_MIN-1);
        // long long r = (long long)(INT_MAX+1);
        
        return helper(root, -1e18, 1e18);
        
    }
};