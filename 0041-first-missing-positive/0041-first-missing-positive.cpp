class Solution {
public:

    int firstMissingPositive(vector<int>& arr) 
    {
        int n = arr.size() ;
        set<int> st ;
        for(auto x : arr)
        {
            if(x > 0) {
                st.insert(x);
            }
        }
        bool ok = false;
        int idx = 0;
        vector<int> ans(st.begin() , st.end()) ;
        if(ans.size() == 0) return 1 ;
        else {
            
                if(ans[0] == 1) 
                {
                    // 1 2
                    for(int i = 0  ; i<  ans.size() - 1 ; i ++)
                    {
                        if(abs(ans[i] - ans[i + 1] ) != 1)
                        {
                            ok = true;
                            idx = i + 2 ;
                            break;
                        }
                    }
                }
                else{
                    return 1 ;
                }
            }
        if(ok ==  false)
        {
            return ans[ans.size() - 1] + 1 ;
        }
        else{
            return idx ;
        }
        
    }
};