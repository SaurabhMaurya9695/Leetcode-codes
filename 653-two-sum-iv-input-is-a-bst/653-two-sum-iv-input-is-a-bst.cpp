
class Solution {
public:
    set<int> st ;
    
    bool solve(TreeNode * root , int k)
    {
        if(!root)
            return false;
        if(st.find(root->val) != st.end())
        {
            return true;
        }
        else{
            st.insert(k - root->val);
            return solve(root->right , k) || solve(root ->left , k);
        }
        // return false;
    }
    bool findTarget(TreeNode* root, int k) {
        if(!root)
            return false;
        return solve(root , k);

    }
};