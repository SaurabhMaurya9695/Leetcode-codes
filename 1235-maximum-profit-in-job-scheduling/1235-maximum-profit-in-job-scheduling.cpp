class Solution {
public:
    int dp[50001];
    int n;
    //find the first job jiska starting point >= currentJob ka end point
    int getNextIndex(vector<vector<int>>& array, int l, int currentJobEnd) {
        int r = n-1;
        
        int result = n+1;
        
        while(l <= r) {
            int mid = l + (r-l)/2;
            
            if(array[mid][0] >= currentJobEnd) { //we can take this task
                result = mid;
                r = mid-1;
            } else {
                l = mid+1;
            }
        }
        
        return result;
    }
    
    int solve(vector<vector<int>>& array, int i) {
        
        //4 - Base Case 
        if(i >= n)
            return 0;
        
        if(dp[i] != -1)
            return dp[i];
        
        // 6 - finding next Index
        int next  = getNextIndex(array, i+1, array[i][1]);
        
        // 5 - if we taken that element then add the profit of that idx and find the next element whose value is greator or equalTo  then our end value .
        int taken = array[i][2] + solve(array, next);
        
        //7 - if we didn't take it then ignore that element 
        int notTaken = solve(array, i+1);
        
        
        // 8 - choose the max value 
        return dp[i] = max(taken, notTaken);
    }
    
    int jobScheduling(vector<int>& startTime, vector<int>& endTime, vector<int>& profit) {
        n = startTime.size();
        
        memset(dp, -1, sizeof(dp));
        
        vector<vector<int>> array(n, vector<int>(3, 0)); //{s, e, p}
        
        // 1 - store in the array         
        for(int i = 0; i<n; i++) {
            array[i][0] = startTime[i];
            array[i][1] = endTime[i];
            array[i][2] = profit[i];
        }
        
        auto comp = [&](auto& vec1, auto& vec2) {
              return vec1[0] <= vec2[0];
        };
        
        // 2 - sort on the basis of start index 
        sort(begin(array), end(array), comp);
        
        
        // 3 - called the dp function to solve 
        return solve(array, 0);
    }
};
