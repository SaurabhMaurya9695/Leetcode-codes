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
    void dfs(TreeNode* root , int &sum, bool flag)
    {
        if(root== NULL) return;
        if(root->left == NULL && root->right == NULL && flag == true)
        {
            sum += (root->val);
        }
        dfs(root->left , sum , true);
        dfs(root->right, sum , false);
        
    }
    int sumOfLeftLeaves(TreeNode* root) {
        // vector<int> ans;
        int sum = 0;
        dfs(root, sum, false);
        // int sum = 0;
        // for(int i =0; i< ans.size() ; i++)
        // {
        //     sum+= ans[i];
        // }
        return sum;
    }
};