class Solution {
public:
    int maxArea(vector<int>& arr) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        int start =0 ;
        int end = arr.size() - 1 ;
        int ans= INT_MIN ;
        while(start < end)
        {
            int h1 = arr[start];
            int h2 = arr[end];
            int h = min(h1 , h2);
            ans  = max(ans , h * (abs(end - start) )); 
            if(h1 < h2)
            {
                start++;
            }
            else{
                end--;   
            }
   
        }
        return ans;
    }
};