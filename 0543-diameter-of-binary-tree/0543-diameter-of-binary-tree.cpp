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
    int ans ;
    int dfs(TreeNode * root){
        if(root == NULL )return 0 ;
        int x = dfs(root -> left );
        int y = dfs(root -> right );
        ans = max(ans,x + y + 1);
        return max(x,y) + 1 ; // we have to return to the top the max ans b/w the both trees
        
    }
    int diameterOfBinaryTree(TreeNode* root) {
        ans = INT_MIN;
        dfs(root);
        return ans - 1 ;
    }
};