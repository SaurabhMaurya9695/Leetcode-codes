class Solution {
    bool helper(TreeNode *p, TreeNode *q){
        if(!p || !q)
            return p == q;
        return p->val == q->val && helper(p->left, q->right) && helper(p->right, q->left);
    }
public:
    bool isSymmetric(TreeNode* root) {
        if(!root) return true;
        return helper(root->left, root->right);
    }
};