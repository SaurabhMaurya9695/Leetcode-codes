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
    bool hasPathSum(TreeNode* root, int targetSum) {
        if(root == NULL) return 0;
        //check for base case ;
        if(root->left == NULL && root->right == NULL) //  leaf node
            if(targetSum == root->val) 
                return true;
        bool left = hasPathSum(root->left , targetSum - root->val);
        bool right = hasPathSum(root->right , targetSum - root->val);
        return left ||  right ;
    }
};