class Solution {
    int recurse(TreeNode* curr, int currMax)
    {
        if(!curr) return 0;
        int ans = 0, temp = max(currMax, curr->val);
        if(curr->val >= currMax) ans += 1;
        ans += recurse(curr->left, temp);
        ans += recurse(curr->right, temp);
        return ans;
    }
public:
    int goodNodes(TreeNode* root) {
        return recurse(root, INT_MIN);
    }
};