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
    int maxDepth(TreeNode* root) {
        if(root == NULL){
            return 0 ;
        }
        queue<TreeNode*> q;
        q.push(root);
        int height = 0 ;
        while(!q.empty()){
            int sz = q.size() ;
            
            //process current level node
            for(int i = 0 ; i < sz; i++){
                TreeNode * front = q.front();
                q.pop();
                if(front->left != NULL){
                    q.push(front->left);
                }
                
                if(front->right != NULL){
                    q.push(front->right);
                }
            }
            
            // after processing level node we increase our level by 1
            height ++ ;
        }
        
        return height ;
    }
};