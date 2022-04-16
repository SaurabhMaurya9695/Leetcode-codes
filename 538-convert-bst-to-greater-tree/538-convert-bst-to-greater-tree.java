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
     int sum = 0;

    public TreeNode convertBST(TreeNode root) {
        // If the current node is empty, return directly
        if (root == null)
            return null;
        // Because the value of the current node is the current node
        // plus the value of its right child, we need to traverse
        // the right child first
        convertBST(root.right);
        // accumulate
        sum += root.val;
        root.val = sum;
        // Traverse the left subtree
        convertBST(root.left);
        return root;
    }
}