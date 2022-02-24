class Solution {
public:
    
    //1 2 3 7
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size() ;
        int m = nums2.size() ;
        vector<int> ans(n + m);
        merge(nums1.begin(), nums1.end(), nums2.begin(), nums2.end(), ans.begin());
        int start = 0 ;
        int end= ans.size() -1  ;
        while(start < end)
        {
            start++;
            end--;
        }
        return  ceil( ans[start] + ans[end] ) / 2 ;
        
    }
};