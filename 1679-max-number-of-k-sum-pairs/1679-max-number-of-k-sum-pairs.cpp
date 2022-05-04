// class Solution {
// public: // Time/Space: O(n); O(n)
//     int maxOperations(vector<int>& nums, int k) {
//         unordered_map<int, int> freq;
//         int ans = 0;
//         for(auto cur: nums){
//             int complement = k - cur;
//             if(freq[complement] > 0){ans++; freq[complement]--;}
//             else freq[cur]++;
//         }
//         return ans;
//     }
// };

//
class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int ans=0,i=0,j=nums.size()-1;
        while(i<j)
        {
            if(nums[i]+nums[j]==k)
            {
                ans++,i++,j--;
            }
            else if(nums[i]+nums[j]>k)
            {
                j--;
            }else
            {
                i++;
            }
        }
        return ans;
    }
};