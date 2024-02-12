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
    /*
    vector<vector<int>> levelOrder(TreeNode* root) {
        if(root == nullptr) return {};
        
        queue<TreeNode * > q;
        q.push(root);
        vector<vector<int>> ans;
        while(!q.empty()){
            
            // do this for all level ;
            int size = q.size() ;
            vector<int> temp ;
            while(size --){
                TreeNode * front = q.front() ;
                q.pop() ;
                
                if(front->left != NULL) q.push(front->left);
                if(front->right != NULL) q.push(front->right);
                
                temp.push_back(front->val);
            }
            ans.push_back(temp);
        }
        
        return ans ;
    }
    */
    
    
    vector<vector<int>> levelOrder(TreeNode* root){
        vector<vector<int>> ans ;
        dfs(root , 0 , ans);
        return ans ;
    }
    
     void dfs(TreeNode * root , int depth , vector<vector<int>> & ans){
        
        if(root == NULL){
            return ;
        }
        
         // at the end depth is 4 and our ans
        if(depth >= ans.size()){
            ans.push_back({}) ;
        }
        
        ans[depth].push_back(root->val);
        dfs(root -> left , depth + 1, ans );
        dfs(root -> right, depth + 1, ans );
    }
};






