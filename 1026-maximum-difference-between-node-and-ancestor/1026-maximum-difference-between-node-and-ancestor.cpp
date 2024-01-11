
class Solution {
public:
    
    
    int solve(TreeNode * root , int maxi , int mini){
        
        if(root == NULL) return (maxi - mini);
        
        maxi = max(maxi , root->val) ;
        mini = min(mini , root->val) ;
        int leftCall = solve(root->left , maxi , mini);
        int rightCall = solve(root->right ,maxi , mini);
        return max(leftCall , rightCall);
    }
    
    int maxAncestorDiff(TreeNode* root) {
        int maxi = INT_MIN ;
        int mini = INT_MAX;
        return solve(root , maxi , mini) ;
    }
};