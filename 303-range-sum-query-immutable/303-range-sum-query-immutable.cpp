class NumArray {
public:
    vector<int>c;
    NumArray(vector<int>& nums) {
        c.resize(nums.size());
        c[0] = nums[0];
        for(int i=1;i<nums.size();i++){
            c[i]+=(c[i-1]+nums[i]);
        }
    }

    int sumRange(int left, int right) {
        if(left==0){
            return c[right];
        }else{
            return (c[right]-c[left-1]);
        }
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */