/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode() {}
 *     TreeNode(int val) { this.val = val; }
 *     TreeNode(int val, TreeNode left, TreeNode right) {
 *         this.val = val;
 *         this.left = left;
 *         this.right = right;
 *     }
 * }
 */
class Solution {
    boolean balanced = true;
    int solve(TreeNode  root){
        if(root == null) return 0;
        
        int left = solve(root.left);
        int right = solve(root.right);
        
        if(Math.abs(left - right) > 1){
            this.balanced = false;
        }
        
        return Math.max(left , right) + 1;
    }
    public boolean isBalanced(TreeNode root) {
        solve(root);
        return balanced ;
    }
}