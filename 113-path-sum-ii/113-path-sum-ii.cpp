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
    vector<vector<int>> ans;
    vector<vector<int>> pathSum(TreeNode* root, int targetSum, vector<int> cur = {}) {
        if(root == NULL) return ans;
        
        cur.push_back(root->val);
        targetSum -= root->val;
        if(root->left == NULL && root->right == NULL && targetSum == 0) ans.push_back(cur);
        
        pathSum(root->left, targetSum, cur);
        pathSum(root->right, targetSum, cur);
        return ans;
    }
};