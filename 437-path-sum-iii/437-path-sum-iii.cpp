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

// class Solution {
// public:
//     int dfs(TreeNode* root, int targetSum){
//         if(root == NULL) return 0;
        
//         targetSum -= root->val; // we subtract at each and evrey moments 
        
//         int count = 0;
//         if(targetSum == 0) // at any point if target is zero then incresse the count += 1 ;
//             count++;
        
//         return count + dfs(root->left, targetSum) + dfs(root->right, targetSum);
//     }
//     int pathSum(TreeNode* root, int targetSum) {
//         // we are checking for each and every head
//         // base case;
//         if(root == NULL) return 0;
//         return dfs(root,  targetSum) +  pathSum(root->left, targetSum) + pathSum(root->right , targetSum) ; 
//         // check for head // dfs(root , k);
//         //check for its right and left = // pathSum(root->left/right , target);
//     }
// };



// doing with prefix sum technique ;
class Solution {
public:

    
    void solve(TreeNode* root , int k , int sum , map<int,int> &mp , int &cnt)
    {
        if(root == NULL) return ;
        sum += root->val;
        cnt += mp[sum-k];
        mp[sum]++;
        solve(root->left, k , sum , mp , cnt);
        solve(root->right, k , sum , mp , cnt);
        mp[sum]--;
        
        
    }
    int pathSum(TreeNode* root, int k) {
        map<int ,int> mp;
        mp[0] = 1;
        int sum = 0 , cnt = 0;
         solve(root , k ,sum ,mp , cnt );
        return cnt ;
    }
};
































