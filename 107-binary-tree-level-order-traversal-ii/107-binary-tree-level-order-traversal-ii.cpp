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
    vector<vector<int>> res;
    void dfs(TreeNode* root , int depth)
    {
        if(root == NULL) return;
        if(res.size() == depth) // res ka size depth ke bababar ho;
        {
            res.push_back(vector<int>());
        }
        res[depth].push_back(root->val) ;
        dfs(root->left , depth + 1);
        dfs(root->right , depth + 1) ;
            
    }
//     vector<vector<int>> levelOrderBottom(TreeNode* root) {
// //         vector<vector<int>> res;
// //         if(!root) return res;
// //         queue<TreeNode*> q; 
// //         q.push(root); 
        
// //         while(q.size() > 0 )
// //         {  
// //            int len = q.size();
// //             vector<int> res2;
// //             while(len--)
// //             {
               
// //                TreeNode* curr = q.front(); 
// //                 q.pop();
// //                res2.push_back(curr->val);
               
// //                if(curr->left) q.push(curr->left);
// //                if(curr->right) q.push(curr->right);
// //            } 
// //             res.push_back(res2);
// //         }
// //         reverse(res.begin() , res.end());

        
// //         return res;
// //     }
// };
    vector<vector<int>> levelOrderBottom(TreeNode* root)
    {
        dfs(root , 0);
        reverse(res.begin() , res.end());
        return res;
    }
};