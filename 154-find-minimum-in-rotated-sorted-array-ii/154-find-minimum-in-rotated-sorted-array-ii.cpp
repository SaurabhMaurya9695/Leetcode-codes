class Solution {
public:
    int findMin(vector<int>& nums) {
        set<int> st;
        for(int i = 0; i< nums.size() ; i++)
        {
            st.insert(nums[i]); // insert all elemnt in set
        }
        vector<int> arr(st.begin() , st.end()); // fill all element in set ;
        // same question before;
        int start = 0;
        int end = arr.size() - 1;
        int min = arr[0];
        int ans = arr[0];
        while(start <= end)
        {
            int mid = start + (end - start) / 2;
            if(arr[mid] < min)
            {
                ans = arr[mid];
                end = mid - 1;
                
            }
            else{
                start = mid + 1;
            }
        }
        return ans ;
        
    }
};