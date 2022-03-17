class Solution {
public:
    int maximumGap(vector<int>& nums) {
    int result=0;
    sort(nums.begin(),nums.end());
    for(int i=1;i<nums.size();i++)
    {
        result=max(result,nums[i]-nums[i-1]);
    }
    return result;
}
        
};

static int x=[](){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    return 0;
}();