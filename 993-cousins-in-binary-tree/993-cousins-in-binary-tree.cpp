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

//class Solution {
//     int xLevel = 0, yLevel = 0, xParent = -1, yParent = -1;
    
//     void DFS(TreeNode root, int x, int y, int level, int parent){
//         if(root == null) return;
        
//         if(root->val == x) {
//             xLevel = level;
//             xParent = parent;
//         }
//         if(root->val == y){
//             yLevel = level;
//             yParent = parent;
//         }
        
//         DFS(root->left, x, y, level + 1, root->val);
//         DFS(root->right, x, y, level + 1, root->val);
//     }
    
//      bool isCousins(TreeNode root, int x, int y) {
//         DFS(root, x, y, 0, -1);
        
//         if(x == y) return false;
//         if(xLevel != yLevel) return false;
//         if(xParent == yParent) return false;
//         return true;
//     }
// }
class Solution {
public:
    // if both of the level is differnt ans is false;
    //level is same then ans is true;
    //then check for its parent if both of the children's parent is same then ans is false otherwise true; 
    int xlevel = 0 , ylevel = 0 ;
    int xparent = -1 , yparent = -1;
    
    void dfs(TreeNode* root , int x , int y , int level , int parent)
    {
        if(root == NULL) return ;
        if(root->val == x)
        {
            xlevel = level;
            xparent = parent;
        }
        if(root->val == y)
        {
            ylevel = level;
            yparent = parent;
        }
        dfs(root->left , x, y , level + 1 , root->val);
        dfs(root->right , x, y , level + 1 , root->val);
        
        
    }
    
    
    bool isCousins(TreeNode* root, int x, int y) {
        dfs(root , x, y, 0 ,-1);
         if(x == y) return false;
        if(xlevel != ylevel) return false;
        if(xparent == yparent) return false;
        return true;
    }
};