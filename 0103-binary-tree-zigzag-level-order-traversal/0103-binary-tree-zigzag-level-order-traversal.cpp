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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        if(root == NULL) return {};
    	queue<TreeNode * > q;
    	vector<vector<int>> ans ;
    	q.push(root) ;
    	bool f = false;
    	while(!q.empty()){
    	    vector<int> temp ;
    	    int sz = q.size();
    	    while(sz -- ){
    	        temp.push_back(q.front()->val) ;
    	        TreeNode * node = q.front();
    	        q.pop() ;
    	        if(node->left != nullptr){
	                q.push(node->left);
	            }
	            if(node->right != nullptr){
	                q.push(node->right);
	            }
	            
    	    }
    	    if(f == true){
                reverse(temp.begin() , temp.end()) ;
                f = false;
            }
            else{
                f= true;
            }
            ans.push_back(temp);
    	    
    	}
    	return ans ;
    }
};