class Solution {
public:
    
    int operate(int x  , int y , char c)
    {
        if(c == '*') return x * y;
        else if(c == '+') return x + y;
        else{
            return x - y;
        }
    }
    
    vector<int> solve(string s)
    {
        vector<int> ans;
        int n = s.size() ;
        bool allarenumbers = true;
        for(int i = 0 ; i< s.size() ; i++)
        {
            if(s[i] == '*' || s[i] == '+' || s[i] == '-')
            {
                allarenumbers = false;
                string left = s.substr(0 , i); // 0.. i-1
                string right = s.substr(i + 1 , n) ;
                vector<int> leftv = solve(left) ;
                vector<int> rightv = solve(right);
                
                for(int k = 0 ; k < leftv.size() ; k++)
                {
                    for(int j = 0 ; j< rightv.size() ; j ++)
                    {
                        ans.push_back(operate(leftv[k] , rightv[j] , s[i]));
                    }
                }
            }
        }
        if(allarenumbers == true)
        {
            ans.push_back(stoi(s));
        }
        return ans ;
        
    }
    vector<int> diffWaysToCompute(string expression) 
    {
        return solve(expression) ;
    }
};