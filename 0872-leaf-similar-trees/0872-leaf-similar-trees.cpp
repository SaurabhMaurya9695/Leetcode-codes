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
    
    void solve(TreeNode * root , vector<int> &ans ){
        if(root == nullptr) return ;
        if(root->left == NULL && root->right == NULL){
            ans.push_back(root->val);
        }
        
        solve(root->left , ans);
        solve(root->right , ans);
    }
    
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int> leftTree , rightTree;
        solve(root1 , leftTree);
        solve(root2 , rightTree );
        
        return leftTree == rightTree ;
    }
};