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
    vector<int> rightSideView(TreeNode* root) {
       if(root == NULL) return {} ;
       vector<int> ans ;
       queue<TreeNode*> q;
       q.push(root) ;
       while(!q.empty()){
           int sz = q.size() ;
           ans.push_back(q.back()->val) ; // only pushing the first node ;
           while(sz --){
               TreeNode * f = q.front() ;
               q.pop();
               if(f->left != nullptr){
                   q.push(f->left);
               }
               if(f->right != nullptr){
                   q.push(f->right);
               }
           }
       }
        return ans;
    }
};