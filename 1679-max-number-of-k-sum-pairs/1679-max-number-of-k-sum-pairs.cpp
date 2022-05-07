class Solution {
public:
    //int maxOperations(vector<int>& arr, int k) 
//     {
     
//         // sort(arr.begin(), arr.end()) ;
//         // int start = 0, end = arr.size() - 1;
//         // int cnt = 0;
//         // while(start < end)
//         // {
//         //     if(arr[start] + arr[end] == k)
//         //     {
//         //         cnt++;
//         //         start++;
//         //             end--;
//         //     }
//         //     else if(arr[start] + arr[end] > k)
//         //     {
//         //         end-- ;
//         //     }
//         //     else{
//         //         start ++ ;
//         //     }
//         // }
//         // return (cnt ) ;
//     }
    int maxOperations(vector<int>& nums, int k) {
        unordered_map<int,int> hm;
        int n = nums.size();
        int count = 0;
        
        for(int i=0;i<n;i++) {
            if(nums[i]>k) continue;
            else {
                if(hm[k-nums[i]] == 0) {
                    hm[nums[i]]++;
                }
                else {
                    hm[k-nums[i]]--;
                    count++;
                }
            }
        }
        return count;
    }
};