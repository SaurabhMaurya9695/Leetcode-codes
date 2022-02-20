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
    // we passed a bool marker that indicatesd that we are in the left side ;
    void dfs(TreeNode* root , vector<int>& ans, bool flag)
    {
        if(root== NULL) return;
        if(root->left == NULL && root->right == NULL && flag == true)
        {
            ans.push_back(root->val);
        }
        dfs(root->left , ans , true);
        dfs(root->right, ans , false);
        
    }
    int sumOfLeftLeaves(TreeNode* root) {
        vector<int> ans;
        dfs(root, ans, false);
        int sum = 0;
        for(int i =0; i< ans.size() ; i++)
        {
            sum+= ans[i];
        }
        return sum;
    }
};