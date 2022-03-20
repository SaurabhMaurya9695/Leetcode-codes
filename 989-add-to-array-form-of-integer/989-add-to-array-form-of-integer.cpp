class Solution {
public:
    string addStrings(string num1, string num2) {
        string ans = "";
        int cur = 0, num1_idx = num1.size() - 1, num2_idx = num2.size() - 1;
        
        while (num1_idx >=0 || num2_idx >= 0 || cur) {
            cur += (num1_idx >= 0) ? (num1[num1_idx--] - '0') : 0;
            cur += (num2_idx >= 0) ? (num2[num2_idx--] - '0') : 0;
            ans = to_string(cur % 10) + ans;
            cur /= 10;
        }
        
        return ans;
    }
    
    vector<int> addToArrayForm(vector<int>& num, int k) {
        string ans = "";
        for(int x : num)
        {
            ans += to_string(x);
        
        }
        string temp = addStrings(ans , to_string(k)) ;
        vector<int> res;
        for(int i = 0; i< temp.size() ; i++)
        {
            res.push_back(temp[i] - '0');
        }
        return res ;
        
    }
};