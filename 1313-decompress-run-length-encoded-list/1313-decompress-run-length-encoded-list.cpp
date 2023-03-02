class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) {
        vector<int> freq , val ;
        for(int i = 0 ; i < nums.size() ; i ++){
            if(i % 2 == 0){
                freq.push_back(nums[i]);
            }
            else{
                val.push_back(nums[i]);
            }
        }
        
        vector<int> ans ;
        for(int i = 0  ; i < freq.size() ; i ++){
            ans.push_back(val[i]) ;
            int x = freq[i];
            while(x != 1){
                ans.push_back(val[i]) ;
                x-- ;
            }
        }
        
        for(auto x : ans){
            cout<< x << " ";
        }
        cout<< endl;
        return ans ;
    }
};