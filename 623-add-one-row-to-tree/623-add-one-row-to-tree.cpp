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
    
    void solve(TreeNode * root , int val , int d , int curr)
    {
        if(!root) return  ;
        if(curr == d - 1)
        {
            // create a two nodes ;
            TreeNode * leftNode  = new TreeNode(val);
            TreeNode * rightNode = new TreeNode(val);
            // protect our link 
            leftNode->left = root->left;
            rightNode->right = root->right;
            
            // make link with node;
            root->left = leftNode ;
            root->right = rightNode;
        }
        solve(root->left , val , d , curr + 1);
        solve(root->right , val , d , curr + 1);
            
    }
    TreeNode* addOneRow(TreeNode* root, int v, int d) 
    {
        if(d == 1)
        {
            // we have to create a new node;
            TreeNode * temp =  new TreeNode(v);
            temp->left = root;
            return temp;
            
        }
        solve(root , v , d , 1);
        return root;
        
    }
};