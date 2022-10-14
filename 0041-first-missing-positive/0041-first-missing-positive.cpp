class Solution {
public:
    int firstMissingPositive(vector<int>& nums) 
    {
        int n = nums.size() ;
        int maxi = *max_element(nums.begin(), nums.end());
        int mini = *min_element(nums.begin(), nums.end());
        set<int> st ;
        unordered_map<int, int > mp;
        int cnt = 0 ;
        for(auto x : nums)
        {
            if(x < 0) cnt++;
            mp[x]++;
        }
        int ans = -1;
        for(int i = 1 ; i<=maxi ; i++)
        {
            if(mp.find(i) == mp.end() )
            {
                ans = i;
                break;
            }
        }
        if(cnt == n)
        {
            return 1 ;
        }
        else if(ans == -1){
            return maxi  + 1;
        }
        else{
            return ans ;
        }
        
    }
};