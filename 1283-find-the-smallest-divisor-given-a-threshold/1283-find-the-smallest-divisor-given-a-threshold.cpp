class Solution {
public:
    bool ispossible(vector<int>& piles , int h , int mid)
    {
        long long  sum = 0 ;
        for(int i = 0 ; i< piles.size() ; i++)
        {
             sum += ((piles[i] % mid != 0) ? (piles[i] / mid) + 1 : piles[i] / mid) ;
        }
        if(sum > h)
        {
            return false;
        }
        else{
            return true;
        }
    }
    int smallestDivisor(vector<int>& nums, int threshold) {
        int start = 1 ; //min eating speed
        int end = INT_MAX ; // max speed  ;
        int ans = threshold; // we assumed our koko can eat banana in h hours ;
        while(start <= end)
        {
            int mid = start + (end - start) / 2 ;
            if(ispossible(nums , threshold , mid) == true)
            {
                ans = mid ;
                end= mid - 1;
                
            }
            else{
                start = mid + 1;
            }
        }
        return ans ;
    }
};