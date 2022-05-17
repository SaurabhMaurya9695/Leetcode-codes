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
    void solve(TreeNode*  root , vector<int> & ino)
    {
        if(root != NULL)
        {
            solve(root->left , ino) ;
            ino.push_back(root->val) ;
            solve(root->right , ino) ;
        }
    }
    int minDiffInBST(TreeNode* root) {
        vector<int> ino ;
        solve(root , ino) ;
        
        // iterate over vector;
        int ans = INT_MAX ;
        for(int i = 0;i < ino.size() - 1 ; i++)
        {
            ans = min(ans , abs (ino[i+1] - ino[i]));
        }
        return ans ;
    }
};