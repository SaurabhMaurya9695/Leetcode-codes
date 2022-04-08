class KthLargest {
public:
    KthLargest(int k1, vector<int>& nums) {
        v = nums;
        sort(v.begin(), v.end());
        k = k1;
    }
    
    int add(int val) {
        
        v.insert(lower_bound(v.begin(), v.end(), val), val);
        return v[v.size() - k];
    }
private : 
    int k;
    vector<int> v;
};