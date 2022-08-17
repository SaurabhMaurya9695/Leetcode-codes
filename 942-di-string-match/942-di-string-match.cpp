class Solution {
public:
    vector<int> diStringMatch(string s) {
        
        int n = s.size();
        vector<int> ans;
        int I = 0;
        int D = s.size();
        for(int i = 0 ; i< n ; i++)
        {
            if(s[i] == 'I'  )
            {
                ans.push_back(I++);
            }
            else if(s[i] == 'D' )
            {
                ans.push_back(D--);
            }
        }
        ans.push_back(I);
        return ans;
        
    }
};