class Solution {
public:
    int minimumSum(int n, int k) {
        
        // pair leads to k 
        // if one is i. then other is k - i .. we have to insert k -i.
        // if it is coming in future then ignore
        unordered_set<int> st;
        int ans = 0;
        for(int i = 1; st.size() < n; ++i ){
            if(st.find(k - i) == st.end()) { st.insert(i); ans += i; }
        }
        return ans;
    }
};