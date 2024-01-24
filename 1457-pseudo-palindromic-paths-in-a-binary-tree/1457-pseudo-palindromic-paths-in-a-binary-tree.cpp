class Solution {
public:
    int result = 0;
    
    void solve(TreeNode* root, vector<int>& freq) {
        if(root != NULL) {
            
            // jaate hue freq ko increase krengy. 
            freq[root->val]++;
            // leaf node pe pahuch ke check krna hai freq 
            if(root->left == NULL && root->right == NULL) { // means we are at leaf node 
                int oddFreq = 0;
                for(int i = 1; i <= 9; i++) {
                    if(freq[i] % 2 != 0) {
                        oddFreq++;
                    }
                }

                result += (oddFreq <= 1);
            }
            
            // call lgao 
            solve(root->left, freq);
            solve(root->right, freq);
            
            // wapas aate hue freq ko dec kro 
            freq[root->val]--;

        }
    }
    
    int pseudoPalindromicPaths (TreeNode* root) {
        
        vector<int> freq(10, 0);
        solve(root, freq);
        return result;
    }
};