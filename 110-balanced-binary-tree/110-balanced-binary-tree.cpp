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
    
    // re rooting technique
    bool result = true; // dp on trees
    // overload the function to accept a height parameter
    int validate(TreeNode* root) {
        if (root == nullptr) return 0;
        int left = validate(root->left);
        int right = validate(root->right);
        if (abs(left - right) > 1) result = false;
        return (left > right) ? 1 + left : 1 + right;
    }
    
    bool isBalanced(TreeNode* root) {
        validate(root);
        return result;
    }
};