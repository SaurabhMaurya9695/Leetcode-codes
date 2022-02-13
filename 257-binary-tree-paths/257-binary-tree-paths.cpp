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
        void dfs(TreeNode* root,vector<string>&res,string ans)
        {
            if(root==NULL) return;
            if(ans=="") ans=to_string(root->val);
            else ans+="->"+to_string(root->val);
            if(root->left==NULL and root->right==NULL){
                res.push_back(ans);
                return;
            }
            if(root->left!=NULL){
                dfs(root->left,res,ans);
            }
            if(root->right!=NULL){
                dfs(root->right,res,ans);
            }
    }
        vector<string> binaryTreePaths(TreeNode* root) {
            vector<string> res;
            dfs(root,res,"");
            return res;
        }
};