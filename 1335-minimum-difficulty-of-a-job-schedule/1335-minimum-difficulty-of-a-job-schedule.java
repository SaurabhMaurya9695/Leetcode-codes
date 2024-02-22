class Solution {
    
    private int [][]dp;
    int solve(int[] arr, int n, int idx, int d) {
        
        // If you have only 1 day, then you will do all the remaining jobs
        // and select the max difficulty as the answer
        if (d == 1) {
            int max = -1;
            for(int i = idx ; i< n ; i ++){
                max=Math.max(arr[i] , max);
            }
            return max;
        }
        
        if (dp[idx][d] != -1)
            return dp[idx][d];
    
        int Max = Integer.MIN_VALUE;
        int result = Integer.MAX_VALUE;
        
        // Try one by one with all possibilities
        /*
            Take 1 job in one day
            Take 2 jobs in one day
            Take 3 jobs in one day
            and so on
            
            Then find the optimal one among all the results
        */
        for (int i = idx; i <= n - d; i++) {
            Max = Math.max(Max, arr[i]);
            result = Math.min(result, Max + solve(arr, n, i + 1, d - 1));
        }
        
        return dp[idx][d] = result;
    }
    
    
    public int minDifficulty(int[] arr, int d) {
        int n = arr.length;
        
        if (n < d)
            return -1;
            
        dp = new int [n + 1][ d + 1] ;
        for(int [] rows : dp){
            Arrays.fill(rows, -1);
        }
        
        return solve(arr, n, 0, d);
    }
}