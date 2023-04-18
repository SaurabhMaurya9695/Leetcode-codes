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
    int sum = 0;
    void totalSum(TreeNode * root){
        if(root == NULL) return  ;
        sum += root->val ;
        totalSum(root->left );
        totalSum(root->right);
    }
    
    void solve(TreeNode * &root ){
        if(root == NULL) return  ;
        //first go on left ;
        solve(root->left);
		int t = root->val;
		root->val = sum;
		sum -= t;
		solve(root->right);
    }
    
    
    TreeNode* bstToGst(TreeNode* root) {
        totalSum(root);
        solve(root );
        return root;
    }
};