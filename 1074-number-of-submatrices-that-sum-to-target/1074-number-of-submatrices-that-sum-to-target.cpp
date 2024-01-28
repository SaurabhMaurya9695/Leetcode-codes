class Solution {
public:
    int numSubmatrixSumTarget(vector<vector<int>>& matrix, int target) {
        // check the first submission for brute force
        int n = matrix.size() ;
        int m = matrix[0].size() ;
        
        // first we have to calculate the prefix sum row by row for whole array ;
        // jth col define the sum from first col to col j ;
        // 0 1 => 0 1 {prefix sum}
        // 1 1 => 1 2 {prefix sum} 
        // but in above example 2nd col {1 ,2} has the sum 3 which is the sum before that row 
        // now checking for every col did we have the sum target in that col j using lc 540 
        
        // column wise prefix sum 
        for(int row = 0; row < n; row++) {
            for(int col = 1; col < m; col ++) {
                matrix[row][col] += matrix[row][col-1];
            }
        }
        
        
        int result = 0;
        for(int col = 0; col < m ; col++) {
            
            for(int currCol = col; currCol<m ; currCol++) {
                //We need to find all sub matrices sum
                
                //Now comes the concept of "No. of subarrays with sum k"
                unordered_map<int, int> mp;
                mp[0] = 1;
                int sum = 0;
                //Go downwards row wise
                for(int row = 0; row < n; row++) {
                    sum += matrix[row][currCol] - (col > 0 ? matrix[row][col-1] : 0);
                    
                    if(mp.count(sum-target)) {
                        result += mp[sum-target];
                    }
                    
                    mp[sum]++;
                    
                }
                
            }
        }
        
        return result;
        
        
            
    }
};